local this = nil 
local npcCards = {}
local mycards = {}
--链条分层
function nextLoop()
	if FightSystem.getState() == STATE.LOOPING then
		return
	end
	
	FightSystem.setState(STATE.LOOPING)

	local function c( ... )
		FightSystem.setState(STATE.DEAL)
		if FightSystem.getTurn() == TURN.RED then
			FightSystem.setTurn(TURN.BLUE)
		else
			FightSystem.setTurn(TURN.RED)
		end

		currentRound = currentRound + 1
		textRound:setText(currentRound)
		textRound:commitChange()
		--
		local function wait(type)
			local cards = FightSystem.getFieldByType(type)
			for i=1,#cards do
				local cardInfo = cards[i]
				cardInfo.card.round = cardInfo.card.round - 1
				if cardInfo.card.round < 0 then
					cardInfo.card.round = 0
				end
				util.textbox(cardInfo.panel:get("textRound")):setText(cardInfo.card.round)
			end
		end
		local function battle( type )
			local cards = FightSystem.getFieldByType(type)
			for i=1,#cards do
				local cardInfo = cards[i]  
				cardInfo.isSufferOver = false
				cardInfo.isAttacked = true
				cardInfo.state = CARD_STATE.NONE
				cardInfo.round = cardInfo.round + 1
				cardInfo.panel:setBool("turnOver", false)
			end
		end
		local function target( typeFrom, typeTo )
			local cards = FightSystem.getFieldByType(typeFrom)
			for i=1,#cards do
				local cardInfo = cards[i]  
				FightSystem.targetCardById(typeFrom, cardInfo.card.id, typeTo)
			end
		end
		local function over( types )
			local cnt = 0
			for i=1,#types do
				cnt = cnt + FightSystem.getCardCount(types[i])
			end
			if cnt == 0 then
				return true
			end
			return false
		end
		--所有手牌的回合数减少1
		wait(FIELD.BLUE_WAIT)
		wait(FIELD.RED_WAIT)
		battle(FIELD.BLUE_BATTLE)
		battle(FIELD.RED_BATTLE)
		target(FIELD.RED_BATTLE, FIELD.BLUE_BATTLE)
		target(FIELD.BLUE_BATTLE, FIELD.RED_BATTLE)
		
		if over({FIELD.RED_HAND, FIELD.RED_WAIT, FIELD.RED_BATTLE}) then
			isPlayerWin = false
			FightSystem.setState(STATE.GAME_OVER)
		end
		if over({FIELD.BLUE_HAND, FIELD.BLUE_WAIT, FIELD.BLUE_BATTLE}) then
			isPlayerWin = true
			FightSystem.setState(STATE.GAME_OVER)
		end

		if FightSystem.getState() ~= STATE.GAME_OVER then
			FightSystem.setState(STATE.DEAL)
		end
	end

	local boxRoundBall = this:get("boxRoundBall")
	local rot = 180
	if FightSystem.getTurn() == TURN.RED then
		rot = -180
	end
	local seq = action.seq(
			action.rotateBy(0.3, -rot),
			action.func(function ( ... )
				c()
			end)
		)
	boxRoundBall:runAction(seq)
end 

local function switchSkip()
	btnSkip:setBool("fight", false)
	btnSkip:touchClick(function ( ... )
		--logger.info("选择跳过%s", STATE.name(FightSystem.getState()))
		if FightSystem.getState() == STATE.WAITING then
			FightSystem.setState(STATE.ATTACK)
			NetFight.discard({})	
		end
	end)
end

local function onClickFight(isRed)
	FightSystem.setState(STATE.ATTACK)
	--删除preview卡牌
	local cards = {}
	for i=1,#previewCards do
		FightSystem.removeCardById(ternary(isRed,FIELD.RED_WAIT,FIELD.BLUE_WAIT), previewCards[i].card.id)
		table.insert(cards, previewCards[i].card.id)
		logger.warn("卡牌%s上场，id为%d", previewCards[i].card.name, previewCards[i].card.id)
	end

	local function c( ... )
		previewCards = {}
		--转换为skip
		switchSkip()
	end

	FightSystem.reorderCards(ternary(isRed,FIELD.RED_WAIT,FIELD.BLUE_WAIT), function ( ... )
		c()
	end)
	--如果是玩家，发送出牌信息
	if not isRed then
		NetFight.discard(cards)	
	end
end

local function switchFight(isRed)
	btnSkip:setBool("fight", true)
	btnSkip:touchClick(function ( ... )
		logger.info("选择战斗%s", STATE.name(FightSystem.getState()))
		if FightSystem.getState() == STATE.WAITING then
			onClickFight(isRed)
		end
	end)
end  

--将手牌进行预览
--支持蓝方和红方
local function moveCardPreview(cardInfo_, isRed, onMoveOver)
	if cardInfo_.panel:getBool("moving") then
		return
	end
	cardInfo_.panel:setBool("moving", true)
	
	local fieldType 
	local fieldTargetType

	if isRed then
		fieldType = FIELD.RED_BATTLE
		fieldTargetType = FIELD.BLUE_BATTLE
	else
		fieldType = FIELD.BLUE_BATTLE
		fieldTargetType = FIELD.RED_BATTLE
	end

	local id = cardInfo_.card.id
	--创建卡牌
	local panel  
	if isRed then
		panel = CardSystem.createNpcCard(id, CARD_TYPE.FIGHT)
	else
		panel = CardSystem.createCard(id, CARD_TYPE.FIGHT)
	end

	boxArea:addWidget(panel)
	panel:setPosition(ccp(cardInfo_.panel:getPosition()))

	local cardInfo = {}
	cardInfo.panel = panel
	cardInfo.card = cardInfo_.card

	local x = FightSystem.calEmptyCardPos(fieldType)

	FightSystem.addCardToField(fieldType, cardInfo)
	--设置target
	FightSystem.targetCardById(fieldType, cardInfo.card.id, fieldTargetType)--FIELD.RED_BATTLE)
	--插入到预览列表
	table.insert(previewCards, cardInfo)

	local y = nil
	local yd = nil
	if isRed then
		y = bgRedBattle:getPositionY()
		yd = y-80
	else
		y = bgBlueBattle:getPositionY()
		yd = y+80
	end
	--添加阴影
	local size = panel:getContentSize()
	local spr = ImageBox:createWithFrameName("shadow", "cardfight/img_frame_shadow.png")
	panel:addWidget(spr)
	spr:toBottomZOrder()
	spr:makeMeCenter()
	local sprx, spry = spr:getPosition()
	spr:setOpacity(255*0.4)
	spr:setScale(0.75)
	local seq = action.seq(
		action.spawn(
				action.func(function ( ... )
					sound.play("card_preview")
				end),
				action.moveTo(0.25, x, yd),
				action.scaleTo(0.25, 1.5, 1.5)
			),
		action.delay(0.4),
		action.spawn(
				action.moveTo(0.05, x, y),
				action.scaleTo(0.05, 1.0,1.0),
				action.func(function ( ... )
					sound.play("deckplace")
					local seq = action.seq(
							action.moveTo(0.05, sprx, spry),
							action.scaleTo(0.05, 1.0, 1.0)
						)
					spr:runAction(seq)
				end)
			),	
		action.func(function ()
			switchFight(isRed)
			onMoveOver(panel)
			panel:removeWidget(spr)
			--从父节点删除，附加到新节点上
			node.transfer(panel, battleCanvas)
		end)
	)
	panel:toTopZOrder()
	panel:runAction(seq)
	
	local x, y = spr:getPosition()
	spr:setPosition(ccp(x-42, y-54))
end

--删除预览手牌
local function removeCardPreview(cardInfo_, fieldType, onRemoveOver)
	if cardInfo_.panel:getBool("moving") then
		return
	end
	cardInfo_.panel:setBool("moving", true)
	local id = cardInfo_.card.id
	--在手牌中找到原来的卡牌
	local handCard = FightSystem.getFieldCard(FIELD.BLUE_WAIT, id)
	local previewCard = FightSystem.getFieldCard(FIELD.BLUE_BATTLE, id)
	local x, y = handCard.panel:getPosition()
	--在战斗区中删除指定id的卡牌
	local function c( ... )
		FightSystem.removeCardById(fieldType, id)
		--维护previewCards列表
		for i=1,#previewCards do
			if previewCards[i].card.id == id then
				table.remove(previewCards, i)
				break
			end
		end
		onRemoveOver()
		cardInfo_.panel:setBool("moving", false)
		--重排
		FightSystem.reorderCards(fieldType, function ( ... )
			if #previewCards == 0 then
				switchSkip()
			end
		end)
	end

	local seq = action.seq(
			action.spawn(
					action.func(function ( ... )
						sound.play("card_preview")
					end),
					action.moveTo(0.25, x, y),
					action.scaleTo(0.25, 0.5, 0.5)
				), 
			action.func(function ( ... )
				c()
			end)
		)
	node.transfer(previewCard.panel, boxArea)
	previewCard.panel:runAction(seq)
end 

--初始化战斗场景的卡牌
local function initCard()
	--玩家卡牌
	local groupId = CardSystem.getCurrentGroupId()
	local group = CardSystem.getCurrentGroupCards()--getCardByGroupId(groupId)
	local t = 12.0
	for i=1,#group do
		local card = util.table.deepcopy(group[i])
		card.round = t_s_card[card.tid].round
		card.name = t_s_card[card.tid].name
		card.hp = CardSystem.getHpByLevel(card.tid, card.level)
		card.skills = CardSystem.getCardSkills(card.tid)
		card.attack = CardSystem.getAttackByLevel(card.tid, card.level)
		local panel = CardSystem.createCard(card.id, CARD_TYPE.HAND)
		panel:getCamera():setEyeXYZ(0, -t, t)
		boxArea:addWidget(panel)
		panel:setVisible(false)
		panel:setPosition(ccp(boxArea:get("imgBlueCardDraw"):getPosition()))
		boxArea:get("imgBlueCardDraw"):toTopZOrder()
		local cardInfo = {}
		cardInfo.panel = panel
		cardInfo.card = card
		FightSystem.addCardToField(FIELD.BLUE_HAND, cardInfo)
	end
	--NPC卡牌
	local npcCards = CardSystem.getCardByNpcId(npcId)
	for i=1,#npcCards do
		local card = util.table.deepcopy(npcCards[i])
		card.round = t_s_card[card.tid].round
		card.name = t_s_card[card.tid].name
		card.skills = CardSystem.getCardSkills(card.tid)
		card.hp = CardSystem.getHpByLevel(card.tid, card.level)
		card.attack = CardSystem.getAttackByLevel(card.tid, card.level)
		local panel = CardSystem.createNpcCard(card.id, CARD_TYPE.HAND)
		panel:getCamera():setEyeXYZ(0, t, t)
		boxArea:addWidget(panel)
		panel:setPosition(ccp(boxArea:get("imgRedCardDraw"):getPosition()))
		boxArea:get("imgRedCardDraw"):toTopZOrder()
		panel:setVisible(false)
		local cardInfo = {}
		cardInfo.panel = panel
		cardInfo.card = card
		FightSystem.addCardToField(FIELD.RED_HAND, cardInfo)
	end
end

local function updateHeroHp()
	local npc = t_s_npc[npcId]
	if npcHp < 0 then
		npcHp = 0
	end
	
	if gamePlayer.getHp() == 0 then
		isPlayerWin = false
		FightSystem.setState(STATE.GAME_OVER)
	end

	if npcHp == 0 then
		isPlayerWin = true
		FightSystem.setState(STATE.GAME_OVER)
	end

	textRedHp:setText(string.format("%d/%d", npcHp, npc.hp))
	textBlueHp:setText(string.format("%d/%d", gamePlayer.getHp(), gamePlayer.getMaxHp()))
end

--开始攻击
local function isAttackOver(type)
	local field = FightSystem.getFieldByType(type)
	for i=1, #field do
		local turnOver = field[i].panel:getBool("turnOver")
		if turnOver == false then
			return false
		end
	end
	return true
end

local function onStateAttack()
	local function c( type , typeTo, typeDead, typeDeadTo, nodeDead, nodeDeadTo, attackHero)
		if FightSystem.getCardCount(type) == 0 then
			--没有找到可以攻击的，则直接下回合
			nextLoop()
			return
		end
		local field = FightSystem.getFieldByType(type)
		--首先要检查是否有卡牌需要执行上场技能
		local enterCards = {}
		for i=1, #field do
			if field[i].round == 0 or field[i].round == nil then
				table.insert(enterCards, field[i])
			end
		end
		
		if #enterCards > 0 then
			--上场技能
			skill.execute( enterCards[1],nil, SKILL_MOLD.ON_ENTER_BATTLE, function ( ... )
				enterCards[1].round = 1
				c( type , typeTo, typeDead, typeDeadTo, nodeDead, nodeDeadTo, attackHero)
			end)
			FightSystem.setState(STATE.ATTACKING)
		else
			for i=1, #field do
				local turnOver = field[i].panel:getBool("turnOver")
				if turnOver == false then
					field[i].panel:setBool("turnOver", true)
					FightSystem.attackCard(type, i, function (cardAttack, cardAttacked)
						local damage = cardAttack.card.attack--t_s_card[cardAttack.card.tid].attack
						local function onAttackedOver()
							field[i].panel:setBool("turnOver", true)
							
							if isAttackOver(type) then 
								--回合结束，reorderCards需要等待所有卡牌就绪
								FightSystem.reorderCards(typeTo, function ( ... )
									nextLoop()
								end)
							else
								FightSystem.setState(STATE.ATTACK)
							end
						end
						if cardAttacked == nil then
							--攻击英雄
							attackHero(damage) 
							onAttackedOver() 
						else 
							--如果被击者被命中，则执行被中及减血
							if cardAttacked.isAttacked == true then
								local seq = FightSystem.actionAttacked(cardAttacked, 
									function ( ... )
										FightSystem.addCardHp(cardAttacked, -cardAttack.card.attack, function ( ... )
											if cardAttacked.card.hp <= 0 then
												onAttackedOver()
											end
										end)
									end, 
									function ( ... )
										DelaySystem.delay(function ( ... )
											--如果死亡则移动到墓地
											if cardAttacked.card.hp <= 0 then

											else
												onAttackedOver()
											end
											
										end)
								end)
								cardAttacked.panel:runAction(seq)
							end
						end
					end)
					--攻击时设置状态为ATTACKING
					FightSystem.setState(STATE.ATTACKING)
					return
				end
			end
		end
	end
	if FightSystem.getTurn() == TURN.RED then 
		c(FIELD.RED_BATTLE, FIELD.BLUE_BATTLE, FIELD.RED_DEAD, FIELD.BLUE_DEAD, bgRedDead, bgBlueDead, function (damage)
			--logger.info("英雄受到伤害%d", damage)
			gamePlayer.setHp(gamePlayer.getHp() - damage)
			updateHeroHp()
		end)
	else
		c(FIELD.BLUE_BATTLE, FIELD.RED_BATTLE, FIELD.BLUE_DEAD, FIELD.RED_DEAD, bgBlueDead,bgRedDead, function ( damage )
			npcHp = npcHp - damage
			updateHeroHp()
		end)
	end
end 

--检查等待区是否存在可以上场的卡牌
local function checkWaitCard()
	if FightSystem.getTurn() == TURN.RED then
		local cards = FightSystem.getFieldByType(FIELD.RED_WAIT)
		local exist = false
		for i=1,#cards do
			local cardInfo = cards[i]
			local round = cardInfo.card.round
			
			cardInfo.panel:touchClick(function()
				logger.warn("卡牌 %s(%d)", cardInfo.card.name, cardInfo.card.id)
			end)
			
			if round == 0 then
				exist = true
			end
		end
		--如果存在，则等待，否则开始新回合
		if exist then
			FightSystem.setState(STATE.DISCARD)
		else
			FightSystem.setState(STATE.ATTACK)
		end
	else
		local cards = FightSystem.getFieldByType(FIELD.BLUE_WAIT)
		local exist = false
		for i=1,#cards do
			local cardInfo = cards[i]
			local round = cardInfo.card.round
			if round == 0 then
				exist = true
				cardInfo.panel:touchClick(function ( ... )
					logger.warn("卡牌 %s(%d)", cardInfo.card.name, cardInfo.card.id)
					if FightSystem.getState() ~= STATE.WAITING then
						return
					end
					if cardInfo.panel:getUIData():getBool("preview") == false  then
						cardInfo.panel:getUIData():setBool("preview", true)
						--降低自身透明度
						cardInfo.panel:setAlpha(100)
						--产生一个card，添加到wait牌组中
						moveCardPreview(cardInfo, false, function ( ... )
							cardInfo.panel:setBool("moving", false)
						end)
					else
						--删除预览中的卡牌
						removeCardPreview(cardInfo, FIELD.BLUE_BATTLE, function ( ... )
							cardInfo.panel:getUIData():setBool("preview", false)
							--恢复自身透明度
							cardInfo.panel:setAlpha(255)
						end)
					end
				end)
			else
				cardInfo.panel:touchClick(function()
					logger.warn("卡牌 %s(%d)", cardInfo.card.name, cardInfo.card.id)
				end)
			end
		end
		--如果存在，则等待，否则开始新回合
		if exist then
			FightSystem.setState(STATE.WAITING)
		else
			FightSystem.setState(STATE.ATTACK)
		end
	end
end

local function showCards(field)
	--[[logger.info(string.format("卡组%s",FIELD.name(field)))
	local cards = FightSystem.getFieldByType(field)
	for i=1,#cards do
		local card = cards[i].card
		local tcard = t_s_card[card.tid]
		logger.error(tcard.name.." ")
	end]]
end

--系统发牌
local function onStateDeal()
	--发牌
	if FightSystem.getTurn() == TURN.RED then
		showCards(FIELD.RED_HAND)
		--如果手牌存在，则发牌，否则状态置为出牌
		if FightSystem.getCardCount(FIELD.RED_HAND) > 0 and FightSystem.getCardCount(FIELD.RED_WAIT) < MAX_WAIT_CARD then
			local index = FightSystem.rand("红队 随机手牌出场")%FightSystem.getCardCount(FIELD.RED_HAND)+1
			local card = FightSystem.getFieldCardByIndex( FIELD.RED_HAND, index )
			local tcard = t_s_card[card.card.tid]
			logger.error(string.format("发牌 %d %s", index, tcard.name))
			FightSystem.moveCard(FIELD.RED_HAND, index, FIELD.RED_WAIT, bgRedWait:getPositionY(), function(cardInfo)
				--我方发牌之后，如果存在可以上战场的卡牌，则等待
				--如果不存在，则回合结束，新回合开始
				checkWaitCard()
			end)
			FightSystem.setState(STATE.DEALING)
		else
			FightSystem.setState(STATE.DISCARD)
		end
	else
		if FightSystem.getCardCount(FIELD.BLUE_HAND) > 0 and FightSystem.getCardCount(FIELD.BLUE_WAIT) < MAX_WAIT_CARD then
			local index = FightSystem.rand("蓝队 随机手牌出场")%FightSystem.getCardCount(FIELD.BLUE_HAND)+1
			FightSystem.moveCard(FIELD.BLUE_HAND, index, FIELD.BLUE_WAIT, bgBlueWait:getPositionY(), function( ... )
					--我方发牌之后，如果存在可以上战场的卡牌，则等待
					--如果不存在，则回合结束，新回合开始
					checkWaitCard()
			end)
			FightSystem.setState(STATE.DEALING)
		else
			checkWaitCard()
		end
	end
end

local function onStateDiscard()
	--出牌
	if FightSystem.getTurn() == TURN.RED then
		--红队
		local cards = FightSystem.getFieldByType(FIELD.RED_WAIT)
		local ids = {}
		for i=1,#cards do
			local cardInfo = cards[i]
			local round = cardInfo.card.round
			--回合数为0
			if round == 0 then
				table.insert(ids, cardInfo)
			end
		end
		local count = #ids
		for i=1,#ids do
			--创建卡牌
			local cardInfo = ids[i]
			moveCardPreview(cardInfo, true, function ( ... )
				cardInfo.panel:setBool("moving", false)
				count = count - 1
				if count == 0 then
					FightSystem.reorderCards(FIELD.RED_WAIT, function ( ... )
						onClickFight(true)
						FightSystem.setState(STATE.ATTACK)
					end) 
				end 
			end) 

			FightSystem.setState(STATE.DISCARDING)
		end
		if #ids == 0 then
			FightSystem.setState(STATE.ATTACK)
		end
	else
		--蓝队，玩家自己出牌
	end
end

local function onStateWaiting()
	if FightSystem.getCardCount(FIELD.BLUE_WAIT) <= 0 then
		FightSystem.setState(STATE.ATTACK)
	end
end

local playStory = nil

local function onStateGameOver()
	if isPlayerWin then
		logger.error("你赢啦！！")
	else
		logger.error("你输啦！！")
	end

	playStory( missionId, 2 , function ( ... )
		NetFight.gameOver()
	end)
	
	this:registerUpdate(nil)
end

local function stateUpdate()
	local now = CCGUIUtil:getTimeTick()
	local state = FightSystem.getState()

	if state == STATE.NEW_TURN then
		nextLoop()
		FightSystem.setState(STATE.DISCARD)
	elseif state == STATE.DISCARD then
		onStateDiscard()
	elseif state == STATE.DISCARDING then
		--do nothing
	elseif state == STATE.DEAL then
		onStateDeal()
	elseif state == STATE.ATTACK then
		--start attack
		onStateAttack()
	elseif state == STATE.ATTACKING then
		--do nothing
	elseif state == STATE.WAITING then
		onStateWaiting()
	elseif state == STATE.GAME_OVER then
		onStateGameOver()
	end
end

local function getMissionTalks( missionId, type )
	local talks = {}
	for i=1,#t_s_talk do
		if t_s_talk[i].missionId == missionId and t_s_talk[i].type == type then
			table.insert(talks, t_s_talk[i])
		end
	end
	return talks
end

local function startStateMachine()
	--服务器返回之后开始状态机
	this:registerUpdate(function( ... )
		stateUpdate()
	end)
end

local function onStoryOver(type)
	if type == 1 then
		startStateMachine()
		this:get("boxStory"):setVisible(false)
	elseif type == 2 then
		--显示胜利面板
	end
end

local function updateTalk(index)
	
end

playStory = function ( missionId, type , onOver)
	local boxStory = this:get("boxStory")
	this:get("boxStory"):setVisible(true)
	--设置文本
	local talks = getMissionTalks(missionId, type)
	--如果没有对话
	if #talks == 0 then 
		onStoryOver(type) 
		if onOver then
				onOver()
			end
		return 
	end 

	local index = 1
	local richTalk = util.richtext(boxStory:get("richTalk"))
	local textNpcName = util.textbox(boxStory:get("textNpcName"))
	local boxHead = boxStory:get("boxHead")
	local npcInfo = t_s_npc[talks[index].npcId]
	local npcName = npcInfo.name
	textNpcName:setText(npcName)
	richTalk:setText(talks[index].word)
	local tex = ImageTexture:createWithFile("images/card/icon/"..npcInfo.icon)
	local img = ImageBox:create("head", tex)
	boxHead:addWidget(img)
	img:makeMeCenter()

	this:get("boxStory"):touchClick(function ( ... )
		index = index + 1
		if index > #talks then
			onStoryOver(type)
			if onOver then
				onOver()
			end
			return 
		end
		local npcInfo = t_s_npc[talks[index].npcId]
		local npcName = npcInfo.name
		textNpcName:setText(npcName)
		local tex = ImageTexture:createWithFile("images/card/icon/"..npcInfo.icon)
		img:setImageTexture(tex)
		richTalk:setText(talks[index].word)
	end)
end

local function onFightInit(ev, p)
	if p.isNpcTurn then
		FightSystem.setTurn(TURN.RED)
	else
		FightSystem.setTurn(TURN.BLUE)
	end
	currentRound = 1
	missionId = p.missionId
	local mission = t_s_mission[missionId]
	npcId = mission.npcId
	textRound:setText(currentRound)
	--初始化卡牌，PVE战斗只需要传入npcId即可
	initCard()
	--系统发牌
	FightSystem.setState(STATE.DEAL)
	--
	local boxRoundBall = this:get("boxRoundBall")
	if p.isNpcTurn then
		boxRoundBall:setRotation(-180)
	end
	--设置NPC血量和名字
	local npc = t_s_npc[npcId]
	textRedName:setText(npc.name)
	npcHp = npc.hp
	textRedHp:setText(string.format("%d/%d", npc.hp, npc.hp))
	--textRedLevel:setText("LV"..npc.level)
	--设置玩家血量和名字
	textBlueName:setText(gamePlayer.getName())
	gamePlayer.setHp(gamePlayer.getMaxHp())
	textBlueHp:setText(string.format("%d/%d", gamePlayer.getHp(), gamePlayer.getMaxHp()))
	--textBlueLevel:setText("LV"..gamePlayer.getLevel())
	--播放背景音乐
	--sound.play("battlebgm")
	--开始剧情对话
	if p.isNewMission then
		playStory(p.missionId, 1)
	else
		startStateMachine()
	end
end

local function onKeyBoard( ev, key )
	if not selectCardPanel then
		return
	end
	if key == 37 then
		--left
		selectCardPanel:setPositionX(selectCardPanel:getPositionX()-1)
		logger.info(selectCardPanel:getPositionX())
	end
	if key == 39 then
		--right
		selectCardPanel:setPositionX(selectCardPanel:getPositionX()+1)
		logger.info(selectCardPanel:getPositionX())
	end
	if key == 38 then
		--up
		selectCardPanel:setPositionY(selectCardPanel:getPositionY()+1)
		logger.info(selectCardPanel:getPositionY())
	end
	if key == 40 then
		--down
		selectCardPanel:setPositionY(selectCardPanel:getPositionY()-1)
		logger.info(selectCardPanel:getPositionY())
	end
	-----------------rotation
	if key == 87 then
		--w
		local c = selectCardPanel:getCamera()
		local x,y,z = c:getEyeXYZ(0, 0, 0)
		y = y+0.1
		c:restore()
		c:setEyeXYZ(x, y, 5) 
		logger.warn("eye %.2f, %.2f, %.2f", x, y, z)
		-- selectCardPanel:setRotationY(selectCardPanel:getRotationY()+1)
		-- logger.info(selectCardPanel:getRotationY())
	end
	if key == 83 then
		--s
		local c = selectCardPanel:getCamera()
		local x,y,z = c:getEyeXYZ(0, 0, 0)
		y = y-0.1
		c:restore()
		c:setEyeXYZ(x, y, 5)
		logger.warn("eye %.2f, %.2f, %.2f", x, y, z)
		-- selectCardPanel:setRotationY(selectCardPanel:getRotationY()-1)
		-- logger.info(selectCardPanel:getRotationY())
	end
	if key == 65 then
		--a
		local c = selectCardPanel:getCamera()
		local x,y,z = c:getCenterXYZ(0, 0, 0)
		y = y-0.1
		c:restore()
		c:setCenterXYZ(x, y, z)
		logger.warn("center %.2f, %.2f, %.2f", x, y, z)
		-- selectCardPanel:setRotationX(selectCardPanel:getRotationX()+1)
		-- logger.info(selectCardPanel:getRotationX())
	end
	if key == 68 then
		--d
		local c = selectCardPanel:getCamera()
		local x,y,z = c:getCenterXYZ(0, 0, 0)
		y = y+0.1
		c:restore()
		c:setCenterXYZ(x, y, z)
		logger.warn("center %.2f, %.2f, %.2f", x, y, z)
		selectCardPanel:setRotationX(selectCardPanel:getRotationX()-1)
		logger.info(selectCardPanel:getRotationX())
	end
	-----------------skew
	if key == 81 then
		--q
		selectCardPanel:setSkewX(selectCardPanel:getSkewX() + 1)
		logger.info(selectCardPanel:getSkewX())
	end
	if key == 69 then
		--e
		selectCardPanel:setSkewX(selectCardPanel:getSkewX() - 1)
		logger.info(selectCardPanel:getSkewX())
	end
	if key == 70 then
		--q
		selectCardPanel:setSkewY(selectCardPanel:getSkewY() + 1)
		logger.info(selectCardPanel:getSkewY())
	end
	if key == 71 then
		--e
		selectCardPanel:setSkewY(selectCardPanel:getSkewY() - 1)
		logger.info(selectCardPanel:getSkewY())
	end 
end

local function initBattleCanvas(parent)
	local scroll = ScrollView:create("battleScroll")
	local size = parent:getContentSize()
	scroll:setContentSize(size)
	local canvas = Widget:create("canvas")
	canvas:setContentSize(CCSize(size.width, size.height))
	scroll:setCanvas(canvas)
	parent:addWidget(scroll)
	scroll:makeMeCenter()
	--scroll:showDebugLayer(true,true)
	return canvas
end

local function onFightOver(ev, data)
	--显示战斗结果
	local overDialog = WindowsDict.showWindow("GameOverDialog")
	local textResult = util.textbox(overDialog:get("textResult"))
	local textGold = util.textbox(overDialog:get("textGold"))
	local textExp = util.textbox(overDialog:get("textExp"))

	if data.isWin then
		textGold:setText(data.gold)
		textExp:setText(data.exp)
		textResult:setText("你赢了！")
	else
		textGold:setText(data.gold)
		textExp:setText(data.exp)
		textResult:setText("你输了！")
	end
	--
	overDialog:touchClick(function ( ... )
		WindowsDict.destroyWindow("GameOverDialog")
		scene.pop(true)
	end)
end

function FightScene_Init(morn)
	this = morn
	bgRedWait = util.imagebox(this:get("bgRedWait"))
	bgRedBattle = this:get("bgRedBattle")
	bgBlueWait = util.imagebox(this:get("bgBlueWait"))
	bgBlueBattle = this:get("bgBlueBattle")
	bgRedDead = util.imagebox(this:get("bgRedDead"))
	local canvas = this:get("canvas")
	bgBlueDead = util.imagebox(this:get("bgBlueDead"))
	this:get("btnClose"):touchClick(function ( ... )
		NetFight.leaveGame()
		scene.pop(true)
	end)
	battleCanvas = initBattleCanvas(canvas)
	FightSystem.setBattleCanvas(battleCanvas)
	textRound = util.textbox(this:get("textRound"))
	boxArea = this:get("boxArea")
	FightSystem.setFightScene(this)
	FightSystem.setFightArea(boxArea)
	--
	FightSystem.setState(STATE.NONE)

	btnSkip = util.imagebox(this:get("btnSkip"))
	switchSkip()

	--设置NPC血量和名字
	textRedName = util.textbox(this:get("textRedName"))
	textRedHp = util.textbox(this:get("textRedHp"))
	textRedLevel = util.textbox(this:get("textRedLevel"))
	--设置玩家血量和名字
	textBlueName = util.textbox(this:get("textBlueName"))
	textBlueHp = util.textbox(this:get("textBlueHp"))
	textBlueLevel = util.textbox(this:get("textBlueLevel"))
	
	EventSystem.reg(EventCode.FIGHT_SCENE_INIT, onFightInit)
	EventSystem.reg(EventCode.KEY_PRESS, onKeyBoard)
	EventSystem.reg(EventCode.FIGHT_OVER, onFightOver)
end

function FightScene_Destroy( ... )
	sound.stopMusic()
	FightSystem.setFightScene(nil)
	FightSystem.setFightArea(nil)
	FightSystem.setState(STATE.NONE)
	FightSystem.clearFight()
	EventSystem.unreg(EventCode.FIGHT_SCENE_INIT, onFightInit)
	EventSystem.unreg(EventCode.KEY_PRESS, onKeyBoard)
	EventSystem.unreg(EventCode.FIGHT_OVER, onFightOver)
end





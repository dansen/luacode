dofile("luacode/keyevent.lua")
dofile("luacode/keybinder.lua")

function CodeEdit_OnKeyDown(edit, evt)
	local ctrl  = evt:ControlDown()
	local shift = evt:ShiftDown()
	local alt   = evt:AltDown()
	local key = evt:GetKeyCode()
	
	if ctrl then
		edit:AutoCompCancel()
	end
	
	local str = ""
	if ctrl then
		str = str.."ctrl"
	end
	if alt then
		if str ~= "" then 
			str = str.."+alt"
		else
			str = "alt"
		end
	end
	if shift then 
		if str ~= "" then
			str = str.."+shift"
		else
			str = "shift"
		end
	end
	if key ~= 308 and key ~= 307 and key ~= 306 then
		if isalnum(key) then
			str = str.."+"..string.lower(string.char(key))
		end
	end
	
	local event = keybinders[str]
	if event then
		event(edit, evt)
	end
	--evt:setProsessed(true)
	--local events = event_find()
	--local ctrls = key_find(str)
	
end

function SetLuaLexer(edit)
	edit = util.codeedit(edit)
	edit:SetDefaultLexer()
	edit:SetLexer(15)
	local keywords = 
	[[and       break     do        else      elseif 
        end       false     for       function  if 
        in        local     nil       not       or 
        repeat    return    then      true      until     while]]
	edit:SetKeyWords(KeywordType.KeywordKeyword, keywords)
	
	local innerFunction = [[module print dofile collectgarbage tonumber]]
	edit:SetKeyWords(KeywordType.KeywordInnerFuntion, innerFunction)
end

local function helloworld()
	local a = 1
	
end

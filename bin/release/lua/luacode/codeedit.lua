dofile("luacode/keyevent.lua")
dofile("luacode/keybinder.lua")

local keymap = {
	[47] = "/",
	[314] = "left", 
	[315] = "up", 
	[316] = "right", 
	[317] = "down", 
}

function CodeEdit_OnKeyDown(edit, evt)
	local ctrl = evt:ControlDown()
	local shift = evt:ShiftDown()
	local alt = evt:AltDown()
	local key = evt:GetKeyCode()
	
	print(key, keymap[key])
	
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
	local map = keymap[key]
	
	if key ~= 308 and key ~= 307 and key ~= 306 then 
		if map then 
			str = str.."+"..keymap[key]
		elseif isalnum(key) then 
			str = str.."+"..string.lower(string.char(key))
		end
	end
	
	print(str)
	
	local event = keybinders[str]
	
	if event then 
		event(edit, evt)
	end
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
edit:SetKeyWords(KeywordType.KeywordInnerFuntion, innerFunction) end


function event_cursorLineBegin(edit, evt)
	local line = edit:GetCurrentLine()
	local pos = edit:GetLineEndPosition(line)
	edit:SetCurrentPos(pos)
	edit:setAnchor(pos)
end

function event_selectTab(edit, evt)
	local tab = tonumber(string.char(evt:GetKeyCode()))
	mainframe:selectPage(tab-1)
end

function event_deleteLine(edit, evt)
	edit:LineDelete()
	edit:LineDown()
	edit:LineUp()
	evt:setProsessed(true)
end
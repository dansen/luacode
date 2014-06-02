

function event_cursorLineBegin(edit, evt)
	local line = edit:GetCurrentLine()
	local pos = edit:PositionFromLine(line)
	edit:SetCurrentPos(pos)
	edit:SetAnchor(pos)
end

function event_cursorPageBegin(edit, evt)
	edit:SetCurrentPos(0)
	edit:SetAnchor(0)
	edit:ScrollToLine(0)
end

function event_cursorPageEnd(edit, evt)
	local line = edit:GetLineCount()
	edit:ScrollToLine(line)
	local pos = edit:GetLineEndPosition(line)
	edit:SetCurrentPos(pos + 1)
	edit:SetAnchor(pos + 1)
end

function event_cursorLineEnd(edit, evt)
	local line = edit:GetCurrentLine()
	local pos = edit:GetLineEndPosition(line)
	edit:SetCurrentPos(pos)
	edit:SetAnchor(pos)
end

function event_selectTab(edit, evt)
	local tab = tonumber(string.char(evt:GetKeyCode()))
	mainframe:selectPage(tab - 1)
end

function event_deleteLine(edit, evt)
	edit:LineDelete()
	edit:LineDown()
	edit:LineUp()
	evt:setProsessed(true)
end
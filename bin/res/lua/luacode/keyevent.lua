
function event_selectTab(edit, evt)
	local tab = tonumber(string.char(evt:GetKeyCode()))
	
	logger.info("select %d", tab)
end

function event_deleteLine(edit, evt)
	edit:LineDelete()
	edit:LineDown()
	edit:LineUp()
	evt:setProsessed(true)
end
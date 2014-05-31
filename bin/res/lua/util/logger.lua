logger = {}

function logger.error(str_, ...)
	local str = string.format(str_, ...)
	if str == nil then return  end
	color_print("<lua error>"..str, 0xff0000)
end

function logger.warn(str_, ...)
	local str = string.format(str_, ...)
	if str == nil then 
		return 
	end
	color_print("<lua-warn>"..str, 0xffff00)
end

function logger.info(str_, ...)
	local str = string.format(str_, ...)
	if str == nil then return  end
	color_print("<lua-info>"..str, 0x00ff00)
end

function logger.print(str_, ...)
	local str = string.format(str_, ...)
	if str == nil then return  end
	color_print("<lua-print>"..str, 0xffffff)
end


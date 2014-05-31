dofile("util/string.lua")
dofile("util/table.lua")
dofile("util/utf8.lua")
dofile("util/logger.lua")
dofile("util/json.lua")
dofile("util/enum.lua")
dofile("util/math.lua")

module("util", package.seeall)

function refresh()
	
end

function cast(userdata, type)
	return tolua.cast(userdata, type)
end

function codeedit(userdata)
	return util.cast(userdata, "CodeEdit")
end

refresh()

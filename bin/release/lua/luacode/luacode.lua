dofile("luacode/types.lua")
dofile("luacode/codeedit.lua")

module("luacode", package.seeall)
--每个目录有一个提供刷新该目录的lua文件
function refresh()
	dofile("luacode/codeedit.lua")
end

refresh()
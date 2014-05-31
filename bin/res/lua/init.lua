dofile = function (path)
	ScriptManager:sharedMgr():dofile(path)
end

--三元函数
function ternary(cond, t, f)
	if cond then return t else return f end
end

function refresh(frame)
	dofile("util/util.lua")
	dofile("luacode/luacode.lua")
end

--重写traceback函数
function __G__TRACKBACK__(msg)
	local traceback = debug.traceback()
	logger.error(msg.."\n"..traceback)
end

function keyboard_Pressed(key)
	
end

local function initLuaStack()
	-- avoid memory leak
	collectgarbage("setpause", 100)
	collectgarbage("setstepmul", 5000)
	--for random  
	math.randomseed(tonumber(tostring(os.time()):reverse():sub(1, 6)))
end

local function main()
	--switch_console()
	initLuaStack()
	refresh(nil)
	--
	logger.info("lua系统启动完成!")
end

main()





module("enum", package.seeall)

--创建enum类型
function create(tbl, index) 
	if type(tbl) ~= "table" then
		logger.error("enum create error.")
		return
	end
    local enumtbl = {} 
    local enumindex = index or 0 
    local size = 0
    for i, v in ipairs(tbl) do 
        enumtbl[v] = enumindex + i - 1
        size = size + 1
    end
    enumtbl.size = size
    enumtbl.name = function ( id )
        return tbl[id]
    end
	
    return enumtbl 
end 
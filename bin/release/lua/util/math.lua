

function math.randoms(min, max, cnt, duplicate)
	if duplicate == nil then
		duplicate = true
	end
	if cnt > (max-min+1) then
		logger.error("math randoms error.")
		return nil
	end
	local tbl = {}
	for i=1,cnt do
		local v = math.random(min, max)
		if duplicate then
			table.insert(tbl, v)
		else
			if tbl[v] ~= nil then
				i = i-1
			else
				tbl[v] = v
			end
		end
	end
	local tbl2 = {}
	for k, v in pairs(tbl) do
		table.insert(tbl2, v)
	end
	return tbl2
end

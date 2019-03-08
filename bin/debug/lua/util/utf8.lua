-- ABNF from RFC 3629
--
-- UTF8-octets = *( UTF8-char )
-- UTF8-char = UTF8-1 / UTF8-2 / UTF8-3 / UTF8-4
-- UTF8-1 = %x00-7F
-- UTF8-2 = %xC2-DF UTF8-tail
-- UTF8-3 = %xE0 %xA0-BF UTF8-tail / %xE1-EC 2( UTF8-tail ) /
-- %xED %x80-9F UTF8-tail / %xEE-EF 2( UTF8-tail )
-- UTF8-4 = %xF0 %x90-BF 2( UTF8-tail ) / %xF1-F3 3( UTF8-tail ) /
-- %xF4 %x80-8F 2( UTF8-tail )
-- UTF8-tail = %x80-BF

-- 0xxxxxxx                            | 007F   (127)
-- 110xxxxx	10xxxxxx                   | 07FF   (2047)
-- 1110xxxx	10xxxxxx 10xxxxxx          | FFFF   (65535)
-- 11110xxx	10xxxxxx 10xxxxxx 10xxxxxx | 10FFFF (1114111)

local maxitems = 256
local utf8char = '[%z\1-\127\194-\244][\128-\191]*'

utf8 = {}

-- returns the utf8 character byte length at first-byte i
utf8.clen = 
function (s, i)
	local c = string.match(s, utf8char, i)
	
	if notc then 
		return 
	end
	
	return #c
end

-- maps f over s's utf8 characters f can accept args: (visual_index, utf8_character, byte_index)
utf8.map = 
function (s, f)
	local i = 0
	
	for b, c in string.gmatch(s, '()('..utf8char..')') do 
		i = i + 1
		f(i, c, b)
	end
end

-- generator to iterate over all utf8 chars
utf8.iter = 
function (s)
	return coroutine.wrap(function ()return utf8.map(s, coroutine.yield) end)
end

-- return the utf8 character at the "visual index" 'i' + actual byte index
utf8.at = 
function (s, x)
	for i, c, b in utf8.iter(s) do 
		if i == x then 
			return c, b
		end
	end
end

-- returns the number of characters in a UTF-8 string
utf8.len = 
function (s)
	-- count the number of non-continuing bytes
	return select(2, string.gsub(s, '[^\128-\193]', ''))
end

-- like string.sub() but i, j are utf8 strings
utf8.sub = function (s, i, j)
	local l
	l = utf8.len(s)
	if i < 0 then 
		i = i + l + 1
	end
	if j < 0 then 
		j = j + l + 1
	end
	if i < 1 or i > l or j < 1 or j > l or i > j then 
		return ""
	end
	local k, m, add, sub
	k = 1
	m = 0
	sub = ""
	add = false
	while true do 
		c = string.sub(s, k, k)
		if c == "" then 
			return sub
		end
		k = k + 1
		a = string.byte(c)
		if a > 191 or a < 127 then 
			-- first byte
			m = m + 1
			if m == i then 
				add = true
			end
			if m == j + 1 then 
				add = false
			end
		end
		if add then 
			sub = sub..c
		end
	end
	return sub
end

-- replace all utf8 chars with mapping
utf8.replace = 
function (s, map)
	local new = {}
	
	for _, c in utf8.iter(s) do 
		table.insert(new, map[c] or c)
		
		if #new > maxitems then 
			new = {table.concat(new)}
		end
	end
	
	return table.concat(new)
end

-- reverse a utf8 string
utf8.reverse = 
function (s)
	local new = {}
	
	for _, c in utf8.iter(s) do 
		table.insert(new, 1, c)
		
		if #new > maxitems then 
			new = {table.concat(new)}
		end
	end
	
	return table.concat(new)
end

-- strip utf8 characters from a string
utf8.strip = 
function (s)
	local new = {}
	
	for _, c in utf8.iter(s) do 
		if #c == 1 then 
			table.insert(new, c)
			
			if #new > maxitems then 
				new = {table.concat(new)}
			end
		end
	end
	
	return table.concat(new)
end

return utf8
--去除字符串两边的空格
function string.trim(str)
    return string.match(str, "^%s*(.-)%s*$")
end

function string.urldecode(str)
  str = string.gsub (str, "+", " ")
  str = string.gsub (str, "%%(%x%x)",
      function(h) return string.char(tonumber(h,16)) end)
  str = string.gsub (str, "\r\n", "\n")
  return str
end

function string.urlencode(str)
  if (str) then
    str = string.gsub (str, "\n", "\r\n")
    str = string.gsub (str, "([^%w %-%_%.%~])",
        function (c) return string.format ("%%%02X", string.byte(c)) end)
    str = string.gsub (str, " ", "+")
  end
  return str	
end

--阿拉伯数字转换成中文。只支持100以内的整数
function string.num2ch(num)
	local unitText = {"", "十"}
	local numberText = {"一","二", "三", "四", "五", "六", "七", "八", "九"}
	local numStr = tostring(num)
	local ret = ""
	local len = string.len(numStr)
	for i = len, 1, -1 do
		local number = tonumber(string.sub(numStr, i, i))
		if number > 0 then
			local unit = len - i + 1
			--不显示“一十”
			if number == 1 and unit == 2 then
				ret = unitText[unit] .. ret
			else
				ret = numberText[number] .. unitText[unit] .. ret
			end
		end
	end
	return ret
end

function string.split(str, token)
	if str == nil then return {} end
    local initPos = 1
    local t = {}
    local tokenLen = string.len(token)
    
    while true do
        local startPos, lastPos = string.find(str, token, initPos)
        if not startPos then
            table.insert(t, string.sub(str, initPos, string.len(str)))
            break
        end
        
        table.insert(t, string.sub(str, initPos, startPos - 1))
        initPos = lastPos + 1
    end
    
    return t
end

function string.empty(s)
    return (not s) or (s == "") 
end

--字符串子集
function string.sub8(s, i, j)
    return utf8.sub(s, i, j)
end

--字符串子集，末尾部分
function string.sub8e( s, len )
    if not s then
        return
    end
    local l = utf8.len(s)
    if len > l then
        return s
    else
        return utf8.sub(s, l-len, l)
    end
end

--带头
function string.sub8e_head( s, len )
    if not s then
        return
    end
    local l = utf8.len(s)
    if len > l then
        return s
    else
        return "..."..utf8.sub(s, l-len, l)
    end
end

--字符串子集，开始部分
function string.sub8s( s, len )
    if not s then
        return
    end
    local l = utf8.len(s)
    if len > l then
        return s
    else
        return utf8.sub(s, 1, len)
    end
end

--带尾
function string.sub8s_tail( s, len )
    if not s then
        return
    end
    local l = utf8.len(s)
    if len > l then
        return s
    else
        return utf8.sub(s, 1, len).."..."
    end
end

--是否以v开头
function string.starts(s, v)
   return v=='' or string.sub(s,1,string.len(v))==v
end

--是否以v结尾
function string.ends(s, v)
   return v=='' or string.sub(s,-string.len(v))==v
end
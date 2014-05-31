
function SetLuaLexer(edit)  
	edit = util.codeedit(edit)
	edit:SetDefaultLexer()
    edit:SetLexer(15)

    local keywords =
 		[[and       break     do        else      elseif 
        end       false     for       function  if 
        in        local     nil       not       or 
        repeat    return    then      true      until     while]]
	edit:SetKeyWords(KeywordType.KeywordKeyword, keywords)

	local  innerFunction = [[module print dofile collectgarbage]]
	edit:SetKeyWords(KeywordType.KeywordInnerFuntion, innerFunction)
end

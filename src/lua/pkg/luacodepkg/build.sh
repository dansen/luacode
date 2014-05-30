echo "generate luacodeToLua.cpp ..."
./tolua++ -o luacodeToLua.cpp -n luacode luacode.pkg

#echo "add using namespace ..."
#sed -i 's/#include "luacodeToLua.h"/#include "CCGUIToLua.h"\
#using namespace CCGUI;\
#using namespace cocos2d;\
#using namespace cocos2d::extension;/' CCGUIToLua.cpp

echo "run transform.sh ..."
./transform.sh

echo "copy to project ..."
mv luacodeToLua.cpp ../../../Frontend/luaext

echo "done!"




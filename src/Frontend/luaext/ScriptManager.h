#ifndef __script_manager_h
#define __script_manager_h

#include <CCLuaEngine.h>

class ScriptManager
{
public:
	void init();
public:
	ScriptManager();
	~ScriptManager();
private:
	CCLuaEngine * m_luaEngine;
};


#endif   


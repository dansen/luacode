#ifndef __script_manager_h
#define __script_manager_h

#include <CCLuaEngine.h>
#include "../base/Singleton.h"
#include <string>

class ScriptManager : public Singleton<ScriptManager>
{
public:
	void init(const char * workpath);
	void dofile(const char * path);
	void dostring(const char * str);
public:
	ScriptManager();
	~ScriptManager();
private:
	CCLuaEngine * m_luaEngine;
	std::string m_workpath;
};


#endif   


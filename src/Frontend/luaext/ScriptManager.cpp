#include "ScriptManager.h"


void ScriptManager::init()
{
	//初始化lua环境
	m_luaEngine = CCLuaEngine::defaultEngine();
	CCScriptEngineManager::sharedManager()->setScriptEngine(m_luaEngine);
}

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "CCLuaEngine.h"

CCLuaEngine* CCLuaEngine::m_defaultEngine = NULL;

CCLuaEngine* CCLuaEngine::defaultEngine(void)
{
    if (!m_defaultEngine)
    {
        m_defaultEngine = new CCLuaEngine();
        m_defaultEngine->init();
    }
    return m_defaultEngine;
}

void CCLuaEngine::restart()
{
	if (m_defaultEngine)
	{ 
		//m_defaultEngine = new CCLuaEngine(); 
		//m_defaultEngine->init();
	} 
}


CCLuaEngine::~CCLuaEngine(void)
{
    m_defaultEngine = NULL;
}

bool CCLuaEngine::init(void)
{
    m_stack = CCLuaStack::create();
    return true;
}

void CCLuaEngine::addSearchPath(const char* path)
{
    m_stack->addSearchPath(path);
}

void CCLuaEngine::addLuaLoader(lua_CFunction func)
{
    m_stack->addLuaLoader(func);
}


void CCLuaEngine::removeScriptHandler(int nHandler)
{
    m_stack->removeScriptHandler(nHandler);
}

int CCLuaEngine::executeString(const char *codes)
{
    int ret = m_stack->executeString(codes);
    m_stack->clean();
    return ret;
}

int CCLuaEngine::executeScriptFile(const char* filename)
{
	int ret = m_stack->executeScriptFile(filename);
    m_stack->clean();
    return ret;
}

int CCLuaEngine::executeGlobalFunction(const char* functionName)
{
    int ret = m_stack->executeGlobalFunction(functionName);
    m_stack->clean();
    return ret;
}

bool CCLuaEngine::executeAssert(bool cond, const char *msg/* = NULL */)
{
    bool ret = m_stack->executeAssert(cond, msg);
    m_stack->clean();
    return ret;
}

/*
** Lua binding: luacode
** Generated automatically by tolua++-1.0.92 on 05/30/14 10:52:57.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_luacode_open (lua_State* tolua_S);

#include "luacodeTolua.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"ScriptManager");
 tolua_usertype(tolua_S,"CodeEdit");
}

/* function: isseq */
#ifndef TOLUA_DISABLE_tolua_luacode_isseq00
static int tolua_luacode_isseq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* p = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* c = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  isseq(p,c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isseq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isseq_ignorecase */
#ifndef TOLUA_DISABLE_tolua_luacode_isseq_ignorecase00
static int tolua_luacode_isseq_ignorecase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* p = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* c = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  isseq_ignorecase(p,c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isseq_ignorecase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: switch_console */
#ifndef TOLUA_DISABLE_tolua_luacode_switch_console00
static int tolua_luacode_switch_console00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   switch_console();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switch_console'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: color_print */
#ifndef TOLUA_DISABLE_tolua_luacode_color_print00
static int tolua_luacode_color_print00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* s = ((const char*)  tolua_tostring(tolua_S,1,0));
  int color = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   color_print(s,color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'color_print'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedMgr of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_luacode_ScriptManager_sharedMgr00
static int tolua_luacode_ScriptManager_sharedMgr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScriptManager* tolua_ret = (ScriptManager*)  ScriptManager::sharedMgr();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ScriptManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedMgr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_luacode_ScriptManager_init00
static int tolua_luacode_ScriptManager_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptManager* self = (ScriptManager*)  tolua_tousertype(tolua_S,1,0);
  const char* workpath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init(workpath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dofile of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_luacode_ScriptManager_dofile00
static int tolua_luacode_ScriptManager_dofile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptManager* self = (ScriptManager*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dofile'", NULL);
#endif
  {
   self->dofile(path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dofile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dostring of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_luacode_ScriptManager_dostring00
static int tolua_luacode_ScriptManager_dostring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptManager* self = (ScriptManager*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dostring'", NULL);
#endif
  {
   self->dostring(str);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dostring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDefaultLexer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetDefaultLexer00
static int tolua_luacode_CodeEdit_SetDefaultLexer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDefaultLexer'", NULL);
#endif
  {
   self->SetDefaultLexer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDefaultLexer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLexer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLexer00
static int tolua_luacode_CodeEdit_SetLexer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int lexer = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLexer'", NULL);
#endif
  {
   self->SetLexer(lexer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLexer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetKeyWords of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetKeyWords00
static int tolua_luacode_CodeEdit_SetKeyWords00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int keywordSet = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string keyWords = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetKeyWords'", NULL);
#endif
  {
   self->SetKeyWords(keywordSet,keyWords);
   tolua_pushcppstring(tolua_S,(const char*)keyWords);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetKeyWords'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_luacode_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_function(tolua_S,"isseq",tolua_luacode_isseq00);
  tolua_function(tolua_S,"isseq_ignorecase",tolua_luacode_isseq_ignorecase00);
  tolua_function(tolua_S,"switch_console",tolua_luacode_switch_console00);
  tolua_function(tolua_S,"color_print",tolua_luacode_color_print00);
  tolua_cclass(tolua_S,"ScriptManager","ScriptManager","",NULL);
  tolua_beginmodule(tolua_S,"ScriptManager");
   tolua_function(tolua_S,"sharedMgr",tolua_luacode_ScriptManager_sharedMgr00);
   tolua_function(tolua_S,"init",tolua_luacode_ScriptManager_init00);
   tolua_function(tolua_S,"dofile",tolua_luacode_ScriptManager_dofile00);
   tolua_function(tolua_S,"dostring",tolua_luacode_ScriptManager_dostring00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CodeEdit","CodeEdit","",NULL);
  tolua_beginmodule(tolua_S,"CodeEdit");
   tolua_function(tolua_S,"SetDefaultLexer",tolua_luacode_CodeEdit_SetDefaultLexer00);
   tolua_function(tolua_S,"SetLexer",tolua_luacode_CodeEdit_SetLexer00);
   tolua_function(tolua_S,"SetKeyWords",tolua_luacode_CodeEdit_SetKeyWords00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_luacode (lua_State* tolua_S) {
 return tolua_luacode_open(tolua_S);
};
#endif


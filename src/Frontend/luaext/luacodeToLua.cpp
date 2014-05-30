/*
** Lua binding: luacode
** Generated automatically by tolua++-1.0.92 on 05/30/14 07:52:57.
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

/* Open function */
TOLUA_API int tolua_luacode_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_function(tolua_S,"isseq",tolua_luacode_isseq00);
  tolua_function(tolua_S,"isseq_ignorecase",tolua_luacode_isseq_ignorecase00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_luacode (lua_State* tolua_S) {
 return tolua_luacode_open(tolua_S);
};
#endif


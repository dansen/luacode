/*
** Lua binding: luacode
** Generated automatically by tolua++-1.0.92 on 06/02/14 09:18:59.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_luacode_open (lua_State* tolua_S);

#include "luacodeTolua.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_wxCharBuffer (lua_State* tolua_S)
{
 wxCharBuffer* self = (wxCharBuffer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wxPoint (lua_State* tolua_S)
{
 wxPoint* self = (wxPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wxColour (lua_State* tolua_S)
{
 wxColour* self = (wxColour*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wxMemoryBuffer (lua_State* tolua_S)
{
 wxMemoryBuffer* self = (wxMemoryBuffer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_wxUint32 (lua_State* tolua_S)
{
 wxUint32* self = (wxUint32*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"wxCharBuffer");
 tolua_usertype(tolua_S,"SourceControl::Status");
 tolua_usertype(tolua_S,"wxPoint");
 tolua_usertype(tolua_S,"wxDC");
 tolua_usertype(tolua_S,"wxColour");
 tolua_usertype(tolua_S,"wxMemoryBuffer");
 tolua_usertype(tolua_S,"Mode");
 tolua_usertype(tolua_S,"DebugFrontend::Script");
 tolua_usertype(tolua_S,"wxFileName");
 tolua_usertype(tolua_S,"wxKeyEvent");
 tolua_usertype(tolua_S,"OpenFileInfo");
 tolua_usertype(tolua_S,"wxRect");
 tolua_usertype(tolua_S,"wxFont");
 tolua_usertype(tolua_S,"std::vector<std::string>");
 tolua_usertype(tolua_S,"wxUint32");
 tolua_usertype(tolua_S,"ScriptManager");
 tolua_usertype(tolua_S,"MainFrame");
 tolua_usertype(tolua_S,"wxFontEncoding");
 tolua_usertype(tolua_S,"Project::File");
 tolua_usertype(tolua_S,"wxBitmap");
 tolua_usertype(tolua_S,"Updater");
 tolua_usertype(tolua_S,"CodeEdit");
 tolua_usertype(tolua_S,"wxScrollBar");
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

/* function: isalpha */
#ifndef TOLUA_DISABLE_tolua_luacode_isalpha00
static int tolua_luacode_isalpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isalpha(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isalpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isupper */
#ifndef TOLUA_DISABLE_tolua_luacode_isupper00
static int tolua_luacode_isupper00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isupper(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isupper'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: islower */
#ifndef TOLUA_DISABLE_tolua_luacode_islower00
static int tolua_luacode_islower00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  islower(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'islower'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isdigit */
#ifndef TOLUA_DISABLE_tolua_luacode_isdigit00
static int tolua_luacode_isdigit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isdigit(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isdigit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ispunct */
#ifndef TOLUA_DISABLE_tolua_luacode_ispunct00
static int tolua_luacode_ispunct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  ispunct(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ispunct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isblank */
#ifndef TOLUA_DISABLE_tolua_luacode_isblank00
static int tolua_luacode_isblank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isblank(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isblank'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isalnum */
#ifndef TOLUA_DISABLE_tolua_luacode_isalnum00
static int tolua_luacode_isalnum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isalnum(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isalnum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: isgraph */
#ifndef TOLUA_DISABLE_tolua_luacode_isgraph00
static int tolua_luacode_isgraph00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char c = ((unsigned char)  tolua_tonumber(tolua_S,1,0));
  {
   bool tolua_ret = (bool)  isgraph(c);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isgraph'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModifiers of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_GetModifiers00
static int tolua_luacode_wxKeyEvent_GetModifiers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModifiers'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetModifiers();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModifiers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ControlDown of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_ControlDown00
static int tolua_luacode_wxKeyEvent_ControlDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ControlDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ControlDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ControlDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShiftDown of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_ShiftDown00
static int tolua_luacode_wxKeyEvent_ShiftDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShiftDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ShiftDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShiftDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MetaDown of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_MetaDown00
static int tolua_luacode_wxKeyEvent_MetaDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MetaDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->MetaDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MetaDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AltDown of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_AltDown00
static int tolua_luacode_wxKeyEvent_AltDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AltDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AltDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AltDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CmdDown of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_CmdDown00
static int tolua_luacode_wxKeyEvent_CmdDown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CmdDown'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CmdDown();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CmdDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isProsessed of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_isProsessed00
static int tolua_luacode_wxKeyEvent_isProsessed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isProsessed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isProsessed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isProsessed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setProsessed of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_setProsessed00
static int tolua_luacode_wxKeyEvent_setProsessed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"wxKeyEvent",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  wxKeyEvent* self = (wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
  bool pro = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setProsessed'", NULL);
#endif
  {
   self->setProsessed(pro);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setProsessed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HasModifiers of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_HasModifiers00
static int tolua_luacode_wxKeyEvent_HasModifiers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HasModifiers'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->HasModifiers();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HasModifiers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetKeyCode of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_GetKeyCode00
static int tolua_luacode_wxKeyEvent_GetKeyCode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetKeyCode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetKeyCode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetKeyCode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRawKeyCode of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_GetRawKeyCode00
static int tolua_luacode_wxKeyEvent_GetRawKeyCode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRawKeyCode'", NULL);
#endif
  {
   wxUint32 tolua_ret = (wxUint32)  self->GetRawKeyCode();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxUint32)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxUint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxUint32));
     tolua_pushusertype(tolua_S,tolua_obj,"wxUint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRawKeyCode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRawKeyFlags of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_GetRawKeyFlags00
static int tolua_luacode_wxKeyEvent_GetRawKeyFlags00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRawKeyFlags'", NULL);
#endif
  {
   wxUint32 tolua_ret = (wxUint32)  self->GetRawKeyFlags();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxUint32)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxUint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxUint32));
     tolua_pushusertype(tolua_S,tolua_obj,"wxUint32");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRawKeyFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  wxKeyEvent */
#ifndef TOLUA_DISABLE_tolua_luacode_wxKeyEvent_GetPosition00
static int tolua_luacode_wxKeyEvent_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const wxKeyEvent",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const wxKeyEvent* self = (const wxKeyEvent*)  tolua_tousertype(tolua_S,1,0);
  long xpos = ((long)  tolua_tonumber(tolua_S,2,0));
  long ypos = ((long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   self->GetPosition(&xpos,&ypos);
   tolua_pushnumber(tolua_S,(lua_Number)xpos);
   tolua_pushnumber(tolua_S,(lua_Number)ypos);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
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

/* method: AddText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AddText00
static int tolua_luacode_CodeEdit_AddText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddText'", NULL);
#endif
  {
   self->AddText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AddText01
static int tolua_luacode_CodeEdit_AddText01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const int length = ((const int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddText'", NULL);
#endif
  {
   self->AddText(length,text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
tolua_lerror:
 return tolua_luacode_CodeEdit_AddText00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddStyledText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AddStyledText00
static int tolua_luacode_CodeEdit_AddStyledText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxMemoryBuffer",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxMemoryBuffer* data = ((const wxMemoryBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddStyledText'", NULL);
#endif
  {
   self->AddStyledText(*data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddStyledText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InsertText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_InsertText00
static int tolua_luacode_CodeEdit_InsertText00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InsertText'", NULL);
#endif
  {
   self->InsertText(pos,text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InsertText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearAll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ClearAll00
static int tolua_luacode_CodeEdit_ClearAll00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearAll'", NULL);
#endif
  {
   self->ClearAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearDocumentStyle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ClearDocumentStyle00
static int tolua_luacode_CodeEdit_ClearDocumentStyle00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearDocumentStyle'", NULL);
#endif
  {
   self->ClearDocumentStyle();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearDocumentStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLength of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLength00
static int tolua_luacode_CodeEdit_GetLength00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCharAt of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCharAt00
static int tolua_luacode_CodeEdit_GetCharAt00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCharAt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCharAt(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCharAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentPos of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCurrentPos00
static int tolua_luacode_CodeEdit_GetCurrentPos00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentPos'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentPos();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAnchor of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetAnchor00
static int tolua_luacode_CodeEdit_GetAnchor00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAnchor'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetAnchor();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAnchor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStyleAt of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetStyleAt00
static int tolua_luacode_CodeEdit_GetStyleAt00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStyleAt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetStyleAt(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStyleAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Redo of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Redo00
static int tolua_luacode_CodeEdit_Redo00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Redo'", NULL);
#endif
  {
   self->Redo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Redo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUndoCollection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetUndoCollection00
static int tolua_luacode_CodeEdit_SetUndoCollection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool collectUndo = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUndoCollection'", NULL);
#endif
  {
   self->SetUndoCollection(collectUndo);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUndoCollection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SelectAll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SelectAll00
static int tolua_luacode_CodeEdit_SelectAll00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SelectAll'", NULL);
#endif
  {
   self->SelectAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SelectAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSavePoint of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSavePoint00
static int tolua_luacode_CodeEdit_SetSavePoint00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSavePoint'", NULL);
#endif
  {
   self->SetSavePoint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSavePoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStyledText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetStyledText00
static int tolua_luacode_CodeEdit_GetStyledText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStyledText'", NULL);
#endif
  {
   wxMemoryBuffer tolua_ret = (wxMemoryBuffer)  self->GetStyledText(startPos,endPos);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxMemoryBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxMemoryBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxMemoryBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxMemoryBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStyledText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CanRedo of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CanRedo00
static int tolua_luacode_CodeEdit_CanRedo00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CanRedo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CanRedo();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CanRedo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerLineFromHandle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerLineFromHandle00
static int tolua_luacode_CodeEdit_MarkerLineFromHandle00(lua_State* tolua_S)
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
  int handle = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerLineFromHandle'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MarkerLineFromHandle(handle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerLineFromHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerDeleteHandle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerDeleteHandle00
static int tolua_luacode_CodeEdit_MarkerDeleteHandle00(lua_State* tolua_S)
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
  int handle = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerDeleteHandle'", NULL);
#endif
  {
   self->MarkerDeleteHandle(handle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerDeleteHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUndoCollection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetUndoCollection00
static int tolua_luacode_CodeEdit_GetUndoCollection00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUndoCollection'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetUndoCollection();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUndoCollection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewWhiteSpace of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetViewWhiteSpace00
static int tolua_luacode_CodeEdit_GetViewWhiteSpace00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewWhiteSpace'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetViewWhiteSpace();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewWhiteSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetViewWhiteSpace of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetViewWhiteSpace00
static int tolua_luacode_CodeEdit_SetViewWhiteSpace00(lua_State* tolua_S)
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
  int viewWS = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetViewWhiteSpace'", NULL);
#endif
  {
   self->SetViewWhiteSpace(viewWS);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetViewWhiteSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PositionFromPoint of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PositionFromPoint00
static int tolua_luacode_CodeEdit_PositionFromPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"wxPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  wxPoint pt = *((wxPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PositionFromPoint'", NULL);
#endif
  {
   int tolua_ret = (int)  self->PositionFromPoint(pt);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PositionFromPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PositionFromPointClose of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PositionFromPointClose00
static int tolua_luacode_CodeEdit_PositionFromPointClose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PositionFromPointClose'", NULL);
#endif
  {
   int tolua_ret = (int)  self->PositionFromPointClose(x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PositionFromPointClose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GotoLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GotoLine00
static int tolua_luacode_CodeEdit_GotoLine00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GotoLine'", NULL);
#endif
  {
   self->GotoLine(line);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GotoLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GotoPos of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GotoPos00
static int tolua_luacode_CodeEdit_GotoPos00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GotoPos'", NULL);
#endif
  {
   self->GotoPos(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GotoPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAnchor of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetAnchor00
static int tolua_luacode_CodeEdit_SetAnchor00(lua_State* tolua_S)
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
  int posAnchor = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAnchor'", NULL);
#endif
  {
   self->SetAnchor(posAnchor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAnchor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCurLine00
static int tolua_luacode_CodeEdit_GetCurLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int linePos = ((int)  tolua_tonumber(tolua_S,2,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurLine'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetCurLine(&linePos);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)linePos);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEndStyled of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEndStyled00
static int tolua_luacode_CodeEdit_GetEndStyled00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEndStyled'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetEndStyled();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEndStyled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertEOLs of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ConvertEOLs00
static int tolua_luacode_CodeEdit_ConvertEOLs00(lua_State* tolua_S)
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
  int eolMode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertEOLs'", NULL);
#endif
  {
   self->ConvertEOLs(eolMode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertEOLs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEOLMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEOLMode00
static int tolua_luacode_CodeEdit_GetEOLMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEOLMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetEOLMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEOLMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEOLMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetEOLMode00
static int tolua_luacode_CodeEdit_SetEOLMode00(lua_State* tolua_S)
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
  int eolMode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEOLMode'", NULL);
#endif
  {
   self->SetEOLMode(eolMode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEOLMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StartStyling of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StartStyling00
static int tolua_luacode_CodeEdit_StartStyling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  int mask = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StartStyling'", NULL);
#endif
  {
   self->StartStyling(pos,mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StartStyling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStyling of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetStyling00
static int tolua_luacode_CodeEdit_SetStyling00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
  int style = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStyling'", NULL);
#endif
  {
   self->SetStyling(length,style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStyling'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBufferedDraw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetBufferedDraw00
static int tolua_luacode_CodeEdit_GetBufferedDraw00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBufferedDraw'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetBufferedDraw();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBufferedDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetBufferedDraw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetBufferedDraw00
static int tolua_luacode_CodeEdit_SetBufferedDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool buffered = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetBufferedDraw'", NULL);
#endif
  {
   self->SetBufferedDraw(buffered);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetBufferedDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTabWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTabWidth00
static int tolua_luacode_CodeEdit_SetTabWidth00(lua_State* tolua_S)
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
  int tabWidth = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTabWidth'", NULL);
#endif
  {
   self->SetTabWidth(tabWidth);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTabWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTabWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTabWidth00
static int tolua_luacode_CodeEdit_GetTabWidth00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTabWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTabWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTabWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCodePage of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCodePage00
static int tolua_luacode_CodeEdit_SetCodePage00(lua_State* tolua_S)
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
  int codePage = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCodePage'", NULL);
#endif
  {
   self->SetCodePage(codePage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCodePage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerDefine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerDefine00
static int tolua_luacode_CodeEdit_MarkerDefine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerSymbol = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerDefine'", NULL);
#endif
  {
   self->MarkerDefine(markerNumber,markerSymbol);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerDefine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerSetForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerSetForeground00
static int tolua_luacode_CodeEdit_MarkerSetForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerSetForeground'", NULL);
#endif
  {
   self->MarkerSetForeground(markerNumber,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerSetForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerSetBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerSetBackground00
static int tolua_luacode_CodeEdit_MarkerSetBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerSetBackground'", NULL);
#endif
  {
   self->MarkerSetBackground(markerNumber,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerSetBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerAdd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerAdd00
static int tolua_luacode_CodeEdit_MarkerAdd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerNumber = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerAdd'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MarkerAdd(line,markerNumber);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerAdd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerDelete of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerDelete00
static int tolua_luacode_CodeEdit_MarkerDelete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerNumber = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerDelete'", NULL);
#endif
  {
   self->MarkerDelete(line,markerNumber);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerDelete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerDeleteAll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerDeleteAll00
static int tolua_luacode_CodeEdit_MarkerDeleteAll00(lua_State* tolua_S)
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
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerDeleteAll'", NULL);
#endif
  {
   self->MarkerDeleteAll(markerNumber);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerDeleteAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerGet of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerGet00
static int tolua_luacode_CodeEdit_MarkerGet00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerGet'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MarkerGet(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerGet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerNext of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerNext00
static int tolua_luacode_CodeEdit_MarkerNext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int lineStart = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerMask = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerNext'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MarkerNext(lineStart,markerMask);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerPrevious of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerPrevious00
static int tolua_luacode_CodeEdit_MarkerPrevious00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int lineStart = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerMask = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerPrevious'", NULL);
#endif
  {
   int tolua_ret = (int)  self->MarkerPrevious(lineStart,markerMask);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerPrevious'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerDefineBitmap of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerDefineBitmap00
static int tolua_luacode_CodeEdit_MarkerDefineBitmap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxBitmap",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxBitmap* bmp = ((const wxBitmap*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerDefineBitmap'", NULL);
#endif
  {
   self->MarkerDefineBitmap(markerNumber,*bmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerDefineBitmap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerAddSet of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerAddSet00
static int tolua_luacode_CodeEdit_MarkerAddSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int markerSet = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerAddSet'", NULL);
#endif
  {
   self->MarkerAddSet(line,markerSet);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerAddSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MarkerSetAlpha of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MarkerSetAlpha00
static int tolua_luacode_CodeEdit_MarkerSetAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int markerNumber = ((int)  tolua_tonumber(tolua_S,2,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MarkerSetAlpha'", NULL);
#endif
  {
   self->MarkerSetAlpha(markerNumber,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MarkerSetAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginType of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginType00
static int tolua_luacode_CodeEdit_SetMarginType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
  int marginType = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginType'", NULL);
#endif
  {
   self->SetMarginType(margin,marginType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginType of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginType00
static int tolua_luacode_CodeEdit_GetMarginType00(lua_State* tolua_S)
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
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginType'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMarginType(margin);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginWidth00
static int tolua_luacode_CodeEdit_SetMarginWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
  int pixels = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginWidth'", NULL);
#endif
  {
   self->SetMarginWidth(margin,pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginWidth00
static int tolua_luacode_CodeEdit_GetMarginWidth00(lua_State* tolua_S)
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
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMarginWidth(margin);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginMask of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginMask00
static int tolua_luacode_CodeEdit_SetMarginMask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
  int mask = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginMask'", NULL);
#endif
  {
   self->SetMarginMask(margin,mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginMask of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginMask00
static int tolua_luacode_CodeEdit_GetMarginMask00(lua_State* tolua_S)
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
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginMask'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMarginMask(margin);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginSensitive of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginSensitive00
static int tolua_luacode_CodeEdit_SetMarginSensitive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
  bool sensitive = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginSensitive'", NULL);
#endif
  {
   self->SetMarginSensitive(margin,sensitive);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginSensitive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginSensitive of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginSensitive00
static int tolua_luacode_CodeEdit_GetMarginSensitive00(lua_State* tolua_S)
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
  int margin = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginSensitive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetMarginSensitive(margin);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginSensitive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleClearAll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleClearAll00
static int tolua_luacode_CodeEdit_StyleClearAll00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleClearAll'", NULL);
#endif
  {
   self->StyleClearAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleClearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetForeground00
static int tolua_luacode_CodeEdit_StyleSetForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetForeground'", NULL);
#endif
  {
   self->StyleSetForeground(style,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetBackground00
static int tolua_luacode_CodeEdit_StyleSetBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetBackground'", NULL);
#endif
  {
   self->StyleSetBackground(style,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetBold of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetBold00
static int tolua_luacode_CodeEdit_StyleSetBold00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool bold = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetBold'", NULL);
#endif
  {
   self->StyleSetBold(style,bold);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetBold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetItalic of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetItalic00
static int tolua_luacode_CodeEdit_StyleSetItalic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool italic = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetItalic'", NULL);
#endif
  {
   self->StyleSetItalic(style,italic);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetItalic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetSize of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetSize00
static int tolua_luacode_CodeEdit_StyleSetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  int sizePoints = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetSize'", NULL);
#endif
  {
   self->StyleSetSize(style,sizePoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetFaceName of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetFaceName00
static int tolua_luacode_CodeEdit_StyleSetFaceName00(lua_State* tolua_S)
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
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string fontName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetFaceName'", NULL);
#endif
  {
   self->StyleSetFaceName(style,fontName);
   tolua_pushcppstring(tolua_S,(const char*)fontName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetFaceName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetEOLFilled of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetEOLFilled00
static int tolua_luacode_CodeEdit_StyleSetEOLFilled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool filled = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetEOLFilled'", NULL);
#endif
  {
   self->StyleSetEOLFilled(style,filled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetEOLFilled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleResetDefault of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleResetDefault00
static int tolua_luacode_CodeEdit_StyleResetDefault00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleResetDefault'", NULL);
#endif
  {
   self->StyleResetDefault();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleResetDefault'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetUnderline of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetUnderline00
static int tolua_luacode_CodeEdit_StyleSetUnderline00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool underline = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetUnderline'", NULL);
#endif
  {
   self->StyleSetUnderline(style,underline);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetUnderline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetCase of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetCase00
static int tolua_luacode_CodeEdit_StyleSetCase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  int caseMode = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetCase'", NULL);
#endif
  {
   self->StyleSetCase(style,caseMode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetCase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetHotSpot of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetHotSpot00
static int tolua_luacode_CodeEdit_StyleSetHotSpot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool hotspot = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetHotSpot'", NULL);
#endif
  {
   self->StyleSetHotSpot(style,hotspot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetHotSpot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelAlpha of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelAlpha00
static int tolua_luacode_CodeEdit_GetSelAlpha00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSelAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelAlpha of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelAlpha00
static int tolua_luacode_CodeEdit_SetSelAlpha00(lua_State* tolua_S)
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
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelAlpha'", NULL);
#endif
  {
   self->SetSelAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelForeground00
static int tolua_luacode_CodeEdit_SetSelForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelForeground'", NULL);
#endif
  {
   self->SetSelForeground(useSetting,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelBackground00
static int tolua_luacode_CodeEdit_SetSelBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelBackground'", NULL);
#endif
  {
   self->SetSelBackground(useSetting,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretForeground00
static int tolua_luacode_CodeEdit_SetCaretForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretForeground'", NULL);
#endif
  {
   self->SetCaretForeground(*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CmdKeyAssign of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CmdKeyAssign00
static int tolua_luacode_CodeEdit_CmdKeyAssign00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int key = ((int)  tolua_tonumber(tolua_S,2,0));
  int modifiers = ((int)  tolua_tonumber(tolua_S,3,0));
  int cmd = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CmdKeyAssign'", NULL);
#endif
  {
   self->CmdKeyAssign(key,modifiers,cmd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CmdKeyAssign'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CmdKeyClear of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CmdKeyClear00
static int tolua_luacode_CodeEdit_CmdKeyClear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int key = ((int)  tolua_tonumber(tolua_S,2,0));
  int modifiers = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CmdKeyClear'", NULL);
#endif
  {
   self->CmdKeyClear(key,modifiers);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CmdKeyClear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CmdKeyClearAll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CmdKeyClearAll00
static int tolua_luacode_CodeEdit_CmdKeyClearAll00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CmdKeyClearAll'", NULL);
#endif
  {
   self->CmdKeyClearAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CmdKeyClearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStyleBytes of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetStyleBytes00
static int tolua_luacode_CodeEdit_SetStyleBytes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
  char* styleBytes = ((char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStyleBytes'", NULL);
#endif
  {
   self->SetStyleBytes(length,styleBytes);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStyleBytes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetVisible00
static int tolua_luacode_CodeEdit_StyleSetVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool visible = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetVisible'", NULL);
#endif
  {
   self->StyleSetVisible(style,visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretPeriod of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretPeriod00
static int tolua_luacode_CodeEdit_GetCaretPeriod00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretPeriod'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCaretPeriod();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretPeriod'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretPeriod of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretPeriod00
static int tolua_luacode_CodeEdit_SetCaretPeriod00(lua_State* tolua_S)
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
  int milliseconds = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretPeriod'", NULL);
#endif
  {
   self->SetCaretPeriod(milliseconds);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretPeriod'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWordChars of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWordChars00
static int tolua_luacode_CodeEdit_SetWordChars00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string characters = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWordChars'", NULL);
#endif
  {
   self->SetWordChars(characters);
   tolua_pushcppstring(tolua_S,(const char*)characters);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWordChars'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BeginUndoAction of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_BeginUndoAction00
static int tolua_luacode_CodeEdit_BeginUndoAction00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BeginUndoAction'", NULL);
#endif
  {
   self->BeginUndoAction();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BeginUndoAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EndUndoAction of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EndUndoAction00
static int tolua_luacode_CodeEdit_EndUndoAction00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EndUndoAction'", NULL);
#endif
  {
   self->EndUndoAction();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EndUndoAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IndicatorSetStyle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_IndicatorSetStyle00
static int tolua_luacode_CodeEdit_IndicatorSetStyle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int indic = ((int)  tolua_tonumber(tolua_S,2,0));
  int style = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IndicatorSetStyle'", NULL);
#endif
  {
   self->IndicatorSetStyle(indic,style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IndicatorSetStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IndicatorGetStyle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_IndicatorGetStyle00
static int tolua_luacode_CodeEdit_IndicatorGetStyle00(lua_State* tolua_S)
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
  int indic = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IndicatorGetStyle'", NULL);
#endif
  {
   int tolua_ret = (int)  self->IndicatorGetStyle(indic);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IndicatorGetStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IndicatorSetForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_IndicatorSetForeground00
static int tolua_luacode_CodeEdit_IndicatorSetForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int indic = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IndicatorSetForeground'", NULL);
#endif
  {
   self->IndicatorSetForeground(indic,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IndicatorSetForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IndicatorGetForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_IndicatorGetForeground00
static int tolua_luacode_CodeEdit_IndicatorGetForeground00(lua_State* tolua_S)
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
  int indic = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IndicatorGetForeground'", NULL);
#endif
  {
   wxColour tolua_ret = (wxColour)  self->IndicatorGetForeground(indic);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxColour)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxColour));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IndicatorGetForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWhitespaceForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWhitespaceForeground00
static int tolua_luacode_CodeEdit_SetWhitespaceForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWhitespaceForeground'", NULL);
#endif
  {
   self->SetWhitespaceForeground(useSetting,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWhitespaceForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWhitespaceBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWhitespaceBackground00
static int tolua_luacode_CodeEdit_SetWhitespaceBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWhitespaceBackground'", NULL);
#endif
  {
   self->SetWhitespaceBackground(useSetting,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWhitespaceBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStyleBits of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetStyleBits00
static int tolua_luacode_CodeEdit_SetStyleBits00(lua_State* tolua_S)
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
  int bits = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStyleBits'", NULL);
#endif
  {
   self->SetStyleBits(bits);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStyleBits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStyleBits of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetStyleBits00
static int tolua_luacode_CodeEdit_GetStyleBits00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStyleBits'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetStyleBits();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStyleBits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLineState of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLineState00
static int tolua_luacode_CodeEdit_SetLineState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int state = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLineState'", NULL);
#endif
  {
   self->SetLineState(line,state);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLineState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineState of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineState00
static int tolua_luacode_CodeEdit_GetLineState00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineState'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineState(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMaxLineState of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMaxLineState00
static int tolua_luacode_CodeEdit_GetMaxLineState00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMaxLineState'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMaxLineState();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMaxLineState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretLineVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretLineVisible00
static int tolua_luacode_CodeEdit_GetCaretLineVisible00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretLineVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetCaretLineVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretLineVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretLineVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretLineVisible00
static int tolua_luacode_CodeEdit_SetCaretLineVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretLineVisible'", NULL);
#endif
  {
   self->SetCaretLineVisible(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretLineVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretLineBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretLineBackground00
static int tolua_luacode_CodeEdit_GetCaretLineBackground00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretLineBackground'", NULL);
#endif
  {
   wxColour tolua_ret = (wxColour)  self->GetCaretLineBackground();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxColour)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxColour));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretLineBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretLineBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretLineBackground00
static int tolua_luacode_CodeEdit_SetCaretLineBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretLineBackground'", NULL);
#endif
  {
   self->SetCaretLineBackground(*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretLineBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetChangeable of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetChangeable00
static int tolua_luacode_CodeEdit_StyleSetChangeable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  bool changeable = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetChangeable'", NULL);
#endif
  {
   self->StyleSetChangeable(style,changeable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetChangeable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompShow of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompShow00
static int tolua_luacode_CodeEdit_AutoCompShow00(lua_State* tolua_S)
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
  int lenEntered = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string itemList = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompShow'", NULL);
#endif
  {
   self->AutoCompShow(lenEntered,itemList);
   tolua_pushcppstring(tolua_S,(const char*)itemList);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompShow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompCancel of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompCancel00
static int tolua_luacode_CodeEdit_AutoCompCancel00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompCancel'", NULL);
#endif
  {
   self->AutoCompCancel();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompCancel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompActive of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompActive00
static int tolua_luacode_CodeEdit_AutoCompActive00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompPosStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompPosStart00
static int tolua_luacode_CodeEdit_AutoCompPosStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompPosStart'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompPosStart();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompPosStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompComplete of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompComplete00
static int tolua_luacode_CodeEdit_AutoCompComplete00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompComplete'", NULL);
#endif
  {
   self->AutoCompComplete();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompComplete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompStops of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompStops00
static int tolua_luacode_CodeEdit_AutoCompStops00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string characterSet = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompStops'", NULL);
#endif
  {
   self->AutoCompStops(characterSet);
   tolua_pushcppstring(tolua_S,(const char*)characterSet);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompStops'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetSeparator of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetSeparator00
static int tolua_luacode_CodeEdit_AutoCompSetSeparator00(lua_State* tolua_S)
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
  int separatorCharacter = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetSeparator'", NULL);
#endif
  {
   self->AutoCompSetSeparator(separatorCharacter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetSeparator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetSeparator of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetSeparator00
static int tolua_luacode_CodeEdit_AutoCompGetSeparator00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetSeparator'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompGetSeparator();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetSeparator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSelect of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSelect00
static int tolua_luacode_CodeEdit_AutoCompSelect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSelect'", NULL);
#endif
  {
   self->AutoCompSelect(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSelect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetCancelAtStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetCancelAtStart00
static int tolua_luacode_CodeEdit_AutoCompSetCancelAtStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool cancel = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetCancelAtStart'", NULL);
#endif
  {
   self->AutoCompSetCancelAtStart(cancel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetCancelAtStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetCancelAtStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetCancelAtStart00
static int tolua_luacode_CodeEdit_AutoCompGetCancelAtStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetCancelAtStart'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompGetCancelAtStart();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetCancelAtStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetFillUps of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetFillUps00
static int tolua_luacode_CodeEdit_AutoCompSetFillUps00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string characterSet = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetFillUps'", NULL);
#endif
  {
   self->AutoCompSetFillUps(characterSet);
   tolua_pushcppstring(tolua_S,(const char*)characterSet);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetFillUps'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetChooseSingle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetChooseSingle00
static int tolua_luacode_CodeEdit_AutoCompSetChooseSingle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool chooseSingle = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetChooseSingle'", NULL);
#endif
  {
   self->AutoCompSetChooseSingle(chooseSingle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetChooseSingle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetChooseSingle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetChooseSingle00
static int tolua_luacode_CodeEdit_AutoCompGetChooseSingle00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetChooseSingle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompGetChooseSingle();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetChooseSingle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetIgnoreCase of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetIgnoreCase00
static int tolua_luacode_CodeEdit_AutoCompSetIgnoreCase00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool ignoreCase = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetIgnoreCase'", NULL);
#endif
  {
   self->AutoCompSetIgnoreCase(ignoreCase);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetIgnoreCase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetIgnoreCase of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetIgnoreCase00
static int tolua_luacode_CodeEdit_AutoCompGetIgnoreCase00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetIgnoreCase'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompGetIgnoreCase();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetIgnoreCase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UserListShow of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_UserListShow00
static int tolua_luacode_CodeEdit_UserListShow00(lua_State* tolua_S)
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
  int listType = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string itemList = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UserListShow'", NULL);
#endif
  {
   self->UserListShow(listType,itemList);
   tolua_pushcppstring(tolua_S,(const char*)itemList);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UserListShow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetAutoHide of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetAutoHide00
static int tolua_luacode_CodeEdit_AutoCompSetAutoHide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool autoHide = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetAutoHide'", NULL);
#endif
  {
   self->AutoCompSetAutoHide(autoHide);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetAutoHide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetAutoHide of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetAutoHide00
static int tolua_luacode_CodeEdit_AutoCompGetAutoHide00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetAutoHide'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompGetAutoHide();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetAutoHide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetDropRestOfWord of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetDropRestOfWord00
static int tolua_luacode_CodeEdit_AutoCompSetDropRestOfWord00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool dropRestOfWord = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetDropRestOfWord'", NULL);
#endif
  {
   self->AutoCompSetDropRestOfWord(dropRestOfWord);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetDropRestOfWord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetDropRestOfWord of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetDropRestOfWord00
static int tolua_luacode_CodeEdit_AutoCompGetDropRestOfWord00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetDropRestOfWord'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AutoCompGetDropRestOfWord();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetDropRestOfWord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RegisterImage of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_RegisterImage00
static int tolua_luacode_CodeEdit_RegisterImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxBitmap",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int type = ((int)  tolua_tonumber(tolua_S,2,0));
  const wxBitmap* bmp = ((const wxBitmap*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RegisterImage'", NULL);
#endif
  {
   self->RegisterImage(type,*bmp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RegisterImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearRegisteredImages of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ClearRegisteredImages00
static int tolua_luacode_CodeEdit_ClearRegisteredImages00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearRegisteredImages'", NULL);
#endif
  {
   self->ClearRegisteredImages();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearRegisteredImages'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetTypeSeparator of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetTypeSeparator00
static int tolua_luacode_CodeEdit_AutoCompGetTypeSeparator00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetTypeSeparator'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompGetTypeSeparator();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetTypeSeparator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetTypeSeparator of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetTypeSeparator00
static int tolua_luacode_CodeEdit_AutoCompSetTypeSeparator00(lua_State* tolua_S)
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
  int separatorCharacter = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetTypeSeparator'", NULL);
#endif
  {
   self->AutoCompSetTypeSeparator(separatorCharacter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetTypeSeparator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetMaxWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetMaxWidth00
static int tolua_luacode_CodeEdit_AutoCompSetMaxWidth00(lua_State* tolua_S)
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
  int characterCount = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetMaxWidth'", NULL);
#endif
  {
   self->AutoCompSetMaxWidth(characterCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetMaxWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetMaxWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetMaxWidth00
static int tolua_luacode_CodeEdit_AutoCompGetMaxWidth00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetMaxWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompGetMaxWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetMaxWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompSetMaxHeight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompSetMaxHeight00
static int tolua_luacode_CodeEdit_AutoCompSetMaxHeight00(lua_State* tolua_S)
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
  int rowCount = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompSetMaxHeight'", NULL);
#endif
  {
   self->AutoCompSetMaxHeight(rowCount);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompSetMaxHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetMaxHeight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetMaxHeight00
static int tolua_luacode_CodeEdit_AutoCompGetMaxHeight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetMaxHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompGetMaxHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetMaxHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetIndent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetIndent00
static int tolua_luacode_CodeEdit_SetIndent00(lua_State* tolua_S)
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
  int indentSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetIndent'", NULL);
#endif
  {
   self->SetIndent(indentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetIndent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetIndent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetIndent00
static int tolua_luacode_CodeEdit_GetIndent00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetIndent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetIndent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetIndent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUseTabs of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetUseTabs00
static int tolua_luacode_CodeEdit_SetUseTabs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useTabs = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseTabs'", NULL);
#endif
  {
   self->SetUseTabs(useTabs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseTabs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUseTabs of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetUseTabs00
static int tolua_luacode_CodeEdit_GetUseTabs00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUseTabs'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetUseTabs();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUseTabs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLineIndentation of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLineIndentation00
static int tolua_luacode_CodeEdit_SetLineIndentation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int indentSize = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLineIndentation'", NULL);
#endif
  {
   self->SetLineIndentation(line,indentSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLineIndentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineIndentation of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineIndentation00
static int tolua_luacode_CodeEdit_GetLineIndentation00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineIndentation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineIndentation(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineIndentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineIndentPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineIndentPosition00
static int tolua_luacode_CodeEdit_GetLineIndentPosition00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineIndentPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineIndentPosition(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineIndentPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetColumn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetColumn00
static int tolua_luacode_CodeEdit_GetColumn00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetColumn'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetColumn(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindColumn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_FindColumn00
static int tolua_luacode_CodeEdit_FindColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int column = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindColumn'", NULL);
#endif
  {
   int tolua_ret = (int)  self->FindColumn(line,column);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretSticky of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretSticky00
static int tolua_luacode_CodeEdit_GetCaretSticky00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretSticky'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetCaretSticky();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretSticky'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretSticky of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretSticky00
static int tolua_luacode_CodeEdit_SetCaretSticky00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useCaretStickyBehaviour = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretSticky'", NULL);
#endif
  {
   self->SetCaretSticky(useCaretStickyBehaviour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretSticky'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToggleCaretSticky of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ToggleCaretSticky00
static int tolua_luacode_CodeEdit_ToggleCaretSticky00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToggleCaretSticky'", NULL);
#endif
  {
   self->ToggleCaretSticky();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToggleCaretSticky'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPasteConvertEndings of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetPasteConvertEndings00
static int tolua_luacode_CodeEdit_SetPasteConvertEndings00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool convert = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPasteConvertEndings'", NULL);
#endif
  {
   self->SetPasteConvertEndings(convert);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPasteConvertEndings'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPasteConvertEndings of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPasteConvertEndings00
static int tolua_luacode_CodeEdit_GetPasteConvertEndings00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPasteConvertEndings'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetPasteConvertEndings();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPasteConvertEndings'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SelectionDuplicate of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SelectionDuplicate00
static int tolua_luacode_CodeEdit_SelectionDuplicate00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SelectionDuplicate'", NULL);
#endif
  {
   self->SelectionDuplicate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SelectionDuplicate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretLineBackroundAlpha of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretLineBackroundAlpha00
static int tolua_luacode_CodeEdit_GetCaretLineBackroundAlpha00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretLineBackroundAlpha'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCaretLineBackroundAlpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretLineBackroundAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretLineBackgroundAlpha of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretLineBackgroundAlpha00
static int tolua_luacode_CodeEdit_SetCaretLineBackgroundAlpha00(lua_State* tolua_S)
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
  int alpha = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretLineBackgroundAlpha'", NULL);
#endif
  {
   self->SetCaretLineBackgroundAlpha(alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretLineBackgroundAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUseHorizontalScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetUseHorizontalScrollBar00
static int tolua_luacode_CodeEdit_SetUseHorizontalScrollBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseHorizontalScrollBar'", NULL);
#endif
  {
   self->SetUseHorizontalScrollBar(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseHorizontalScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUseHorizontalScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetUseHorizontalScrollBar00
static int tolua_luacode_CodeEdit_GetUseHorizontalScrollBar00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUseHorizontalScrollBar'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetUseHorizontalScrollBar();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUseHorizontalScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetIndentationGuides of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetIndentationGuides00
static int tolua_luacode_CodeEdit_SetIndentationGuides00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetIndentationGuides'", NULL);
#endif
  {
   self->SetIndentationGuides(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetIndentationGuides'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetIndentationGuides of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetIndentationGuides00
static int tolua_luacode_CodeEdit_GetIndentationGuides00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetIndentationGuides'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetIndentationGuides();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetIndentationGuides'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHighlightGuide of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHighlightGuide00
static int tolua_luacode_CodeEdit_SetHighlightGuide00(lua_State* tolua_S)
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
  int column = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHighlightGuide'", NULL);
#endif
  {
   self->SetHighlightGuide(column);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHighlightGuide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetHighlightGuide of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetHighlightGuide00
static int tolua_luacode_CodeEdit_GetHighlightGuide00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetHighlightGuide'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetHighlightGuide();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetHighlightGuide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineEndPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineEndPosition00
static int tolua_luacode_CodeEdit_GetLineEndPosition00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineEndPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineEndPosition(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineEndPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCodePage of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCodePage00
static int tolua_luacode_CodeEdit_GetCodePage00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCodePage'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCodePage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCodePage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretForeground00
static int tolua_luacode_CodeEdit_GetCaretForeground00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretForeground'", NULL);
#endif
  {
   wxColour tolua_ret = (wxColour)  self->GetCaretForeground();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxColour)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxColour));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetReadOnly of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetReadOnly00
static int tolua_luacode_CodeEdit_GetReadOnly00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetReadOnly'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetReadOnly();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetReadOnly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCurrentPos of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCurrentPos00
static int tolua_luacode_CodeEdit_SetCurrentPos00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCurrentPos'", NULL);
#endif
  {
   self->SetCurrentPos(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCurrentPos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectionStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelectionStart00
static int tolua_luacode_CodeEdit_SetSelectionStart00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectionStart'", NULL);
#endif
  {
   self->SetSelectionStart(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectionStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectionStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelectionStart00
static int tolua_luacode_CodeEdit_GetSelectionStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectionStart'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSelectionStart();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectionStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectionEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelectionEnd00
static int tolua_luacode_CodeEdit_SetSelectionEnd00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectionEnd'", NULL);
#endif
  {
   self->SetSelectionEnd(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectionEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectionEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelectionEnd00
static int tolua_luacode_CodeEdit_GetSelectionEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectionEnd'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSelectionEnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectionEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPrintMagnification of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetPrintMagnification00
static int tolua_luacode_CodeEdit_SetPrintMagnification00(lua_State* tolua_S)
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
  int magnification = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPrintMagnification'", NULL);
#endif
  {
   self->SetPrintMagnification(magnification);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPrintMagnification'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPrintMagnification of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPrintMagnification00
static int tolua_luacode_CodeEdit_GetPrintMagnification00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPrintMagnification'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetPrintMagnification();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPrintMagnification'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPrintColourMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetPrintColourMode00
static int tolua_luacode_CodeEdit_SetPrintColourMode00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPrintColourMode'", NULL);
#endif
  {
   self->SetPrintColourMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPrintColourMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPrintColourMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPrintColourMode00
static int tolua_luacode_CodeEdit_GetPrintColourMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPrintColourMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetPrintColourMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPrintColourMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_FindText00
static int tolua_luacode_CodeEdit_FindText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int minPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int maxPos = ((int)  tolua_tonumber(tolua_S,3,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  int flags = ((int)  tolua_tonumber(tolua_S,5,0));
  int lengthFound = ((int)  tolua_tonumber(tolua_S,6,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindText'", NULL);
#endif
  {
   int tolua_ret = (int)  self->FindText(minPos,maxPos,text,flags,&lengthFound);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
   tolua_pushnumber(tolua_S,(lua_Number)lengthFound);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FormatRange of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_FormatRange00
static int tolua_luacode_CodeEdit_FormatRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,5,"wxDC",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"wxDC",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"wxRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,8,&tolua_err) || !tolua_isusertype(tolua_S,8,"wxRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool doDraw = ((bool)  tolua_toboolean(tolua_S,2,0));
  int startPos = ((int)  tolua_tonumber(tolua_S,3,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,4,0));
  wxDC* draw = ((wxDC*)  tolua_tousertype(tolua_S,5,0));
  wxDC* target = ((wxDC*)  tolua_tousertype(tolua_S,6,0));
  wxRect renderRect = *((wxRect*)  tolua_tousertype(tolua_S,7,0));
  wxRect pageRect = *((wxRect*)  tolua_tousertype(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FormatRange'", NULL);
#endif
  {
   int tolua_ret = (int)  self->FormatRange(doDraw,startPos,endPos,draw,target,renderRect,pageRect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FormatRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFirstVisibleLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetFirstVisibleLine00
static int tolua_luacode_CodeEdit_GetFirstVisibleLine00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFirstVisibleLine'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFirstVisibleLine();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFirstVisibleLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLine00
static int tolua_luacode_CodeEdit_GetLine00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLine'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetLine(line);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineCount of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineCount00
static int tolua_luacode_CodeEdit_GetLineCount00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginLeft00
static int tolua_luacode_CodeEdit_SetMarginLeft00(lua_State* tolua_S)
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
  int pixels = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginLeft'", NULL);
#endif
  {
   self->SetMarginLeft(pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginLeft00
static int tolua_luacode_CodeEdit_GetMarginLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginLeft'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMarginLeft();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMarginRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMarginRight00
static int tolua_luacode_CodeEdit_SetMarginRight00(lua_State* tolua_S)
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
  int pixels = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMarginRight'", NULL);
#endif
  {
   self->SetMarginRight(pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMarginRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMarginRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMarginRight00
static int tolua_luacode_CodeEdit_GetMarginRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMarginRight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMarginRight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMarginRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModify of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetModify00
static int tolua_luacode_CodeEdit_GetModify00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModify'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetModify();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModify'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelection00
static int tolua_luacode_CodeEdit_SetSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelection'", NULL);
#endif
  {
   self->SetSelection(startPos,endPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectedText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelectedText00
static int tolua_luacode_CodeEdit_GetSelectedText00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectedText'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetSelectedText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectedText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTextRange of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTextRange00
static int tolua_luacode_CodeEdit_GetTextRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTextRange'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetTextRange(startPos,endPos);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HideSelection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HideSelection00
static int tolua_luacode_CodeEdit_HideSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool hide = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HideSelection'", NULL);
#endif
  {
   self->HideSelection(hide);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HideSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineFromPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineFromPosition00
static int tolua_luacode_CodeEdit_LineFromPosition00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineFromPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->LineFromPosition(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineFromPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PositionFromLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PositionFromLine00
static int tolua_luacode_CodeEdit_PositionFromLine00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PositionFromLine'", NULL);
#endif
  {
   int tolua_ret = (int)  self->PositionFromLine(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PositionFromLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineScroll of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineScroll00
static int tolua_luacode_CodeEdit_LineScroll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int columns = ((int)  tolua_tonumber(tolua_S,2,0));
  int lines = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineScroll'", NULL);
#endif
  {
   self->LineScroll(columns,lines);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineScroll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnsureCaretVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EnsureCaretVisible00
static int tolua_luacode_CodeEdit_EnsureCaretVisible00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnsureCaretVisible'", NULL);
#endif
  {
   self->EnsureCaretVisible();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnsureCaretVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReplaceSelection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ReplaceSelection00
static int tolua_luacode_CodeEdit_ReplaceSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReplaceSelection'", NULL);
#endif
  {
   self->ReplaceSelection(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReplaceSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetReadOnly of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetReadOnly00
static int tolua_luacode_CodeEdit_SetReadOnly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool readOnly = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetReadOnly'", NULL);
#endif
  {
   self->SetReadOnly(readOnly);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetReadOnly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CanPaste of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CanPaste00
static int tolua_luacode_CodeEdit_CanPaste00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CanPaste'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CanPaste();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CanPaste'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CanUndo of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CanUndo00
static int tolua_luacode_CodeEdit_CanUndo00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CanUndo'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CanUndo();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CanUndo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EmptyUndoBuffer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EmptyUndoBuffer00
static int tolua_luacode_CodeEdit_EmptyUndoBuffer00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EmptyUndoBuffer'", NULL);
#endif
  {
   self->EmptyUndoBuffer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EmptyUndoBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Undo of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Undo00
static int tolua_luacode_CodeEdit_Undo00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Undo'", NULL);
#endif
  {
   self->Undo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Undo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Cut of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Cut00
static int tolua_luacode_CodeEdit_Cut00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Cut'", NULL);
#endif
  {
   self->Cut();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Cut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Copy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Copy00
static int tolua_luacode_CodeEdit_Copy00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Copy'", NULL);
#endif
  {
   self->Copy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Paste of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Paste00
static int tolua_luacode_CodeEdit_Paste00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Paste'", NULL);
#endif
  {
   self->Paste();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Paste'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Clear00
static int tolua_luacode_CodeEdit_Clear00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetText00
static int tolua_luacode_CodeEdit_SetText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetText'", NULL);
#endif
  {
   self->SetText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetText00
static int tolua_luacode_CodeEdit_GetText00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetText'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetText();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTextLength of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTextLength00
static int tolua_luacode_CodeEdit_GetTextLength00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTextLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTextLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOvertype of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetOvertype00
static int tolua_luacode_CodeEdit_SetOvertype00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool overtype = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOvertype'", NULL);
#endif
  {
   self->SetOvertype(overtype);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOvertype'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOvertype of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetOvertype00
static int tolua_luacode_CodeEdit_GetOvertype00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOvertype'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetOvertype();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOvertype'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCaretWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCaretWidth00
static int tolua_luacode_CodeEdit_SetCaretWidth00(lua_State* tolua_S)
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
  int pixels = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCaretWidth'", NULL);
#endif
  {
   self->SetCaretWidth(pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCaretWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCaretWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCaretWidth00
static int tolua_luacode_CodeEdit_GetCaretWidth00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCaretWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCaretWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCaretWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTargetStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTargetStart00
static int tolua_luacode_CodeEdit_SetTargetStart00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTargetStart'", NULL);
#endif
  {
   self->SetTargetStart(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTargetStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTargetStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTargetStart00
static int tolua_luacode_CodeEdit_GetTargetStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTargetStart'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTargetStart();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTargetStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTargetEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTargetEnd00
static int tolua_luacode_CodeEdit_SetTargetEnd00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTargetEnd'", NULL);
#endif
  {
   self->SetTargetEnd(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTargetEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTargetEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTargetEnd00
static int tolua_luacode_CodeEdit_GetTargetEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTargetEnd'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetTargetEnd();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTargetEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReplaceTarget of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ReplaceTarget00
static int tolua_luacode_CodeEdit_ReplaceTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReplaceTarget'", NULL);
#endif
  {
   int tolua_ret = (int)  self->ReplaceTarget(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReplaceTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReplaceTargetRE of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ReplaceTargetRE00
static int tolua_luacode_CodeEdit_ReplaceTargetRE00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReplaceTargetRE'", NULL);
#endif
  {
   int tolua_ret = (int)  self->ReplaceTargetRE(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReplaceTargetRE'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SearchInTarget of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SearchInTarget00
static int tolua_luacode_CodeEdit_SearchInTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SearchInTarget'", NULL);
#endif
  {
   int tolua_ret = (int)  self->SearchInTarget(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SearchInTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSearchFlags of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSearchFlags00
static int tolua_luacode_CodeEdit_SetSearchFlags00(lua_State* tolua_S)
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
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSearchFlags'", NULL);
#endif
  {
   self->SetSearchFlags(flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSearchFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSearchFlags of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSearchFlags00
static int tolua_luacode_CodeEdit_GetSearchFlags00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSearchFlags'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSearchFlags();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSearchFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipShow of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipShow00
static int tolua_luacode_CodeEdit_CallTipShow00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string definition = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipShow'", NULL);
#endif
  {
   self->CallTipShow(pos,definition);
   tolua_pushcppstring(tolua_S,(const char*)definition);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipShow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipCancel of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipCancel00
static int tolua_luacode_CodeEdit_CallTipCancel00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipCancel'", NULL);
#endif
  {
   self->CallTipCancel();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipCancel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipActive of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipActive00
static int tolua_luacode_CodeEdit_CallTipActive00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CallTipActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipPosAtStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipPosAtStart00
static int tolua_luacode_CodeEdit_CallTipPosAtStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipPosAtStart'", NULL);
#endif
  {
   int tolua_ret = (int)  self->CallTipPosAtStart();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipPosAtStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipSetHighlight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipSetHighlight00
static int tolua_luacode_CodeEdit_CallTipSetHighlight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipSetHighlight'", NULL);
#endif
  {
   self->CallTipSetHighlight(startPos,endPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipSetHighlight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipSetBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipSetBackground00
static int tolua_luacode_CodeEdit_CallTipSetBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipSetBackground'", NULL);
#endif
  {
   self->CallTipSetBackground(*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipSetBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipSetForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipSetForeground00
static int tolua_luacode_CodeEdit_CallTipSetForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipSetForeground'", NULL);
#endif
  {
   self->CallTipSetForeground(*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipSetForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipSetForegroundHighlight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipSetForegroundHighlight00
static int tolua_luacode_CodeEdit_CallTipSetForegroundHighlight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipSetForegroundHighlight'", NULL);
#endif
  {
   self->CallTipSetForegroundHighlight(*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipSetForegroundHighlight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallTipUseStyle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CallTipUseStyle00
static int tolua_luacode_CodeEdit_CallTipUseStyle00(lua_State* tolua_S)
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
  int tabSize = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallTipUseStyle'", NULL);
#endif
  {
   self->CallTipUseStyle(tabSize);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallTipUseStyle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VisibleFromDocLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VisibleFromDocLine00
static int tolua_luacode_CodeEdit_VisibleFromDocLine00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VisibleFromDocLine'", NULL);
#endif
  {
   int tolua_ret = (int)  self->VisibleFromDocLine(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VisibleFromDocLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DocLineFromVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DocLineFromVisible00
static int tolua_luacode_CodeEdit_DocLineFromVisible00(lua_State* tolua_S)
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
  int lineDisplay = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DocLineFromVisible'", NULL);
#endif
  {
   int tolua_ret = (int)  self->DocLineFromVisible(lineDisplay);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DocLineFromVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WrapCount of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WrapCount00
static int tolua_luacode_CodeEdit_WrapCount00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WrapCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->WrapCount(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WrapCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFoldLevel of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetFoldLevel00
static int tolua_luacode_CodeEdit_SetFoldLevel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFoldLevel'", NULL);
#endif
  {
   self->SetFoldLevel(line,level);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFoldLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFoldLevel of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetFoldLevel00
static int tolua_luacode_CodeEdit_GetFoldLevel00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFoldLevel'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFoldLevel(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFoldLevel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLastChild of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLastChild00
static int tolua_luacode_CodeEdit_GetLastChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLastChild'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLastChild(line,level);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLastChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFoldParent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetFoldParent00
static int tolua_luacode_CodeEdit_GetFoldParent00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFoldParent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetFoldParent(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFoldParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShowLines of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ShowLines00
static int tolua_luacode_CodeEdit_ShowLines00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int lineStart = ((int)  tolua_tonumber(tolua_S,2,0));
  int lineEnd = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShowLines'", NULL);
#endif
  {
   self->ShowLines(lineStart,lineEnd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowLines'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HideLines of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HideLines00
static int tolua_luacode_CodeEdit_HideLines00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int lineStart = ((int)  tolua_tonumber(tolua_S,2,0));
  int lineEnd = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HideLines'", NULL);
#endif
  {
   self->HideLines(lineStart,lineEnd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HideLines'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineVisible00
static int tolua_luacode_CodeEdit_GetLineVisible00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetLineVisible(line);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFoldExpanded of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetFoldExpanded00
static int tolua_luacode_CodeEdit_SetFoldExpanded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
  bool expanded = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFoldExpanded'", NULL);
#endif
  {
   self->SetFoldExpanded(line,expanded);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFoldExpanded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFoldExpanded of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetFoldExpanded00
static int tolua_luacode_CodeEdit_GetFoldExpanded00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFoldExpanded'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetFoldExpanded(line);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFoldExpanded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ToggleFold of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ToggleFold00
static int tolua_luacode_CodeEdit_ToggleFold00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ToggleFold'", NULL);
#endif
  {
   self->ToggleFold(line);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ToggleFold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnsureVisible of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EnsureVisible00
static int tolua_luacode_CodeEdit_EnsureVisible00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnsureVisible'", NULL);
#endif
  {
   self->EnsureVisible(line);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnsureVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFoldFlags of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetFoldFlags00
static int tolua_luacode_CodeEdit_SetFoldFlags00(lua_State* tolua_S)
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
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFoldFlags'", NULL);
#endif
  {
   self->SetFoldFlags(flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFoldFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EnsureVisibleEnforcePolicy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EnsureVisibleEnforcePolicy00
static int tolua_luacode_CodeEdit_EnsureVisibleEnforcePolicy00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EnsureVisibleEnforcePolicy'", NULL);
#endif
  {
   self->EnsureVisibleEnforcePolicy(line);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EnsureVisibleEnforcePolicy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTabIndents of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTabIndents00
static int tolua_luacode_CodeEdit_SetTabIndents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool tabIndents = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTabIndents'", NULL);
#endif
  {
   self->SetTabIndents(tabIndents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTabIndents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTabIndents of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTabIndents00
static int tolua_luacode_CodeEdit_GetTabIndents00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTabIndents'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetTabIndents();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTabIndents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetBackSpaceUnIndents of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetBackSpaceUnIndents00
static int tolua_luacode_CodeEdit_SetBackSpaceUnIndents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool bsUnIndents = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetBackSpaceUnIndents'", NULL);
#endif
  {
   self->SetBackSpaceUnIndents(bsUnIndents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetBackSpaceUnIndents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBackSpaceUnIndents of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetBackSpaceUnIndents00
static int tolua_luacode_CodeEdit_GetBackSpaceUnIndents00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBackSpaceUnIndents'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetBackSpaceUnIndents();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBackSpaceUnIndents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMouseDwellTime of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMouseDwellTime00
static int tolua_luacode_CodeEdit_SetMouseDwellTime00(lua_State* tolua_S)
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
  int periodMilliseconds = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMouseDwellTime'", NULL);
#endif
  {
   self->SetMouseDwellTime(periodMilliseconds);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMouseDwellTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMouseDwellTime of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMouseDwellTime00
static int tolua_luacode_CodeEdit_GetMouseDwellTime00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMouseDwellTime'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetMouseDwellTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMouseDwellTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordStartPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordStartPosition00
static int tolua_luacode_CodeEdit_WordStartPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  bool onlyWordCharacters = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordStartPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->WordStartPosition(pos,onlyWordCharacters);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordStartPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordEndPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordEndPosition00
static int tolua_luacode_CodeEdit_WordEndPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  bool onlyWordCharacters = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordEndPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->WordEndPosition(pos,onlyWordCharacters);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordEndPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWrapMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWrapMode00
static int tolua_luacode_CodeEdit_SetWrapMode00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWrapMode'", NULL);
#endif
  {
   self->SetWrapMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWrapMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWrapMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetWrapMode00
static int tolua_luacode_CodeEdit_GetWrapMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWrapMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWrapMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWrapMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWrapVisualFlags of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWrapVisualFlags00
static int tolua_luacode_CodeEdit_SetWrapVisualFlags00(lua_State* tolua_S)
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
  int wrapVisualFlags = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWrapVisualFlags'", NULL);
#endif
  {
   self->SetWrapVisualFlags(wrapVisualFlags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWrapVisualFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWrapVisualFlags of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetWrapVisualFlags00
static int tolua_luacode_CodeEdit_GetWrapVisualFlags00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWrapVisualFlags'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWrapVisualFlags();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWrapVisualFlags'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWrapVisualFlagsLocation of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWrapVisualFlagsLocation00
static int tolua_luacode_CodeEdit_SetWrapVisualFlagsLocation00(lua_State* tolua_S)
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
  int wrapVisualFlagsLocation = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWrapVisualFlagsLocation'", NULL);
#endif
  {
   self->SetWrapVisualFlagsLocation(wrapVisualFlagsLocation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWrapVisualFlagsLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWrapVisualFlagsLocation of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetWrapVisualFlagsLocation00
static int tolua_luacode_CodeEdit_GetWrapVisualFlagsLocation00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWrapVisualFlagsLocation'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWrapVisualFlagsLocation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWrapVisualFlagsLocation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWrapStartIndent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWrapStartIndent00
static int tolua_luacode_CodeEdit_SetWrapStartIndent00(lua_State* tolua_S)
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
  int indent = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWrapStartIndent'", NULL);
#endif
  {
   self->SetWrapStartIndent(indent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWrapStartIndent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWrapStartIndent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetWrapStartIndent00
static int tolua_luacode_CodeEdit_GetWrapStartIndent00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWrapStartIndent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWrapStartIndent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWrapStartIndent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLayoutCache of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLayoutCache00
static int tolua_luacode_CodeEdit_SetLayoutCache00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLayoutCache'", NULL);
#endif
  {
   self->SetLayoutCache(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLayoutCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLayoutCache of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLayoutCache00
static int tolua_luacode_CodeEdit_GetLayoutCache00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLayoutCache'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLayoutCache();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLayoutCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScrollWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetScrollWidth00
static int tolua_luacode_CodeEdit_SetScrollWidth00(lua_State* tolua_S)
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
  int pixels = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScrollWidth'", NULL);
#endif
  {
   self->SetScrollWidth(pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScrollWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetScrollWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetScrollWidth00
static int tolua_luacode_CodeEdit_GetScrollWidth00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScrollWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetScrollWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScrollWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TextWidth of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_TextWidth00
static int tolua_luacode_CodeEdit_TextWidth00(lua_State* tolua_S)
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
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TextWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->TextWidth(style,text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TextWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEndAtLastLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetEndAtLastLine00
static int tolua_luacode_CodeEdit_SetEndAtLastLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool endAtLastLine = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEndAtLastLine'", NULL);
#endif
  {
   self->SetEndAtLastLine(endAtLastLine);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEndAtLastLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEndAtLastLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEndAtLastLine00
static int tolua_luacode_CodeEdit_GetEndAtLastLine00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEndAtLastLine'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetEndAtLastLine();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEndAtLastLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TextHeight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_TextHeight00
static int tolua_luacode_CodeEdit_TextHeight00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TextHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->TextHeight(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TextHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUseVerticalScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetUseVerticalScrollBar00
static int tolua_luacode_CodeEdit_SetUseVerticalScrollBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseVerticalScrollBar'", NULL);
#endif
  {
   self->SetUseVerticalScrollBar(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseVerticalScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUseVerticalScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetUseVerticalScrollBar00
static int tolua_luacode_CodeEdit_GetUseVerticalScrollBar00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUseVerticalScrollBar'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetUseVerticalScrollBar();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUseVerticalScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AppendText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AppendText00
static int tolua_luacode_CodeEdit_AppendText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AppendText'", NULL);
#endif
  {
   self->AppendText(text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AppendText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AppendText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AppendText01
static int tolua_luacode_CodeEdit_AppendText01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AppendText'", NULL);
#endif
  {
   self->AppendText(length,text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
tolua_lerror:
 return tolua_luacode_CodeEdit_AppendText00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTwoPhaseDraw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTwoPhaseDraw00
static int tolua_luacode_CodeEdit_GetTwoPhaseDraw00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTwoPhaseDraw'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetTwoPhaseDraw();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTwoPhaseDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTwoPhaseDraw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTwoPhaseDraw00
static int tolua_luacode_CodeEdit_SetTwoPhaseDraw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool twoPhase = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTwoPhaseDraw'", NULL);
#endif
  {
   self->SetTwoPhaseDraw(twoPhase);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTwoPhaseDraw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TargetFromSelection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_TargetFromSelection00
static int tolua_luacode_CodeEdit_TargetFromSelection00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TargetFromSelection'", NULL);
#endif
  {
   self->TargetFromSelection();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TargetFromSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LinesJoin of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LinesJoin00
static int tolua_luacode_CodeEdit_LinesJoin00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LinesJoin'", NULL);
#endif
  {
   self->LinesJoin();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LinesJoin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LinesSplit of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LinesSplit00
static int tolua_luacode_CodeEdit_LinesSplit00(lua_State* tolua_S)
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
  int pixels = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LinesSplit'", NULL);
#endif
  {
   self->LinesSplit(pixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LinesSplit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFoldMarginColour of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetFoldMarginColour00
static int tolua_luacode_CodeEdit_SetFoldMarginColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFoldMarginColour'", NULL);
#endif
  {
   self->SetFoldMarginColour(useSetting,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFoldMarginColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFoldMarginHiColour of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetFoldMarginHiColour00
static int tolua_luacode_CodeEdit_SetFoldMarginHiColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFoldMarginHiColour'", NULL);
#endif
  {
   self->SetFoldMarginHiColour(useSetting,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFoldMarginHiColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineDown00
static int tolua_luacode_CodeEdit_LineDown00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineDown'", NULL);
#endif
  {
   self->LineDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineDownExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineDownExtend00
static int tolua_luacode_CodeEdit_LineDownExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineDownExtend'", NULL);
#endif
  {
   self->LineDownExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineDownExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineUp00
static int tolua_luacode_CodeEdit_LineUp00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineUp'", NULL);
#endif
  {
   self->LineUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineUpExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineUpExtend00
static int tolua_luacode_CodeEdit_LineUpExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineUpExtend'", NULL);
#endif
  {
   self->LineUpExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineUpExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharLeft00
static int tolua_luacode_CodeEdit_CharLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharLeft'", NULL);
#endif
  {
   self->CharLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharLeftExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharLeftExtend00
static int tolua_luacode_CodeEdit_CharLeftExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharLeftExtend'", NULL);
#endif
  {
   self->CharLeftExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharLeftExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharRight00
static int tolua_luacode_CodeEdit_CharRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharRight'", NULL);
#endif
  {
   self->CharRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharRightExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharRightExtend00
static int tolua_luacode_CodeEdit_CharRightExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharRightExtend'", NULL);
#endif
  {
   self->CharRightExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharRightExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordLeft00
static int tolua_luacode_CodeEdit_WordLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordLeft'", NULL);
#endif
  {
   self->WordLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordLeftExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordLeftExtend00
static int tolua_luacode_CodeEdit_WordLeftExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordLeftExtend'", NULL);
#endif
  {
   self->WordLeftExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordLeftExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordRight00
static int tolua_luacode_CodeEdit_WordRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordRight'", NULL);
#endif
  {
   self->WordRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordRightExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordRightExtend00
static int tolua_luacode_CodeEdit_WordRightExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordRightExtend'", NULL);
#endif
  {
   self->WordRightExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordRightExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Home of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Home00
static int tolua_luacode_CodeEdit_Home00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Home'", NULL);
#endif
  {
   self->Home();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Home'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeExtend00
static int tolua_luacode_CodeEdit_HomeExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeExtend'", NULL);
#endif
  {
   self->HomeExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEnd00
static int tolua_luacode_CodeEdit_LineEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEnd'", NULL);
#endif
  {
   self->LineEnd();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndExtend00
static int tolua_luacode_CodeEdit_LineEndExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndExtend'", NULL);
#endif
  {
   self->LineEndExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DocumentStart of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DocumentStart00
static int tolua_luacode_CodeEdit_DocumentStart00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DocumentStart'", NULL);
#endif
  {
   self->DocumentStart();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DocumentStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DocumentStartExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DocumentStartExtend00
static int tolua_luacode_CodeEdit_DocumentStartExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DocumentStartExtend'", NULL);
#endif
  {
   self->DocumentStartExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DocumentStartExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DocumentEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DocumentEnd00
static int tolua_luacode_CodeEdit_DocumentEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DocumentEnd'", NULL);
#endif
  {
   self->DocumentEnd();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DocumentEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DocumentEndExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DocumentEndExtend00
static int tolua_luacode_CodeEdit_DocumentEndExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DocumentEndExtend'", NULL);
#endif
  {
   self->DocumentEndExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DocumentEndExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageUp00
static int tolua_luacode_CodeEdit_PageUp00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageUp'", NULL);
#endif
  {
   self->PageUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageUpExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageUpExtend00
static int tolua_luacode_CodeEdit_PageUpExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageUpExtend'", NULL);
#endif
  {
   self->PageUpExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageUpExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageDown00
static int tolua_luacode_CodeEdit_PageDown00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageDown'", NULL);
#endif
  {
   self->PageDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageDownExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageDownExtend00
static int tolua_luacode_CodeEdit_PageDownExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageDownExtend'", NULL);
#endif
  {
   self->PageDownExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageDownExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: EditToggleOvertype of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_EditToggleOvertype00
static int tolua_luacode_CodeEdit_EditToggleOvertype00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'EditToggleOvertype'", NULL);
#endif
  {
   self->EditToggleOvertype();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'EditToggleOvertype'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Cancel of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Cancel00
static int tolua_luacode_CodeEdit_Cancel00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Cancel'", NULL);
#endif
  {
   self->Cancel();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Cancel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteBack of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DeleteBack00
static int tolua_luacode_CodeEdit_DeleteBack00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteBack'", NULL);
#endif
  {
   self->DeleteBack();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DeleteBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Tab of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Tab00
static int tolua_luacode_CodeEdit_Tab00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Tab'", NULL);
#endif
  {
   self->Tab();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Tab'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BackTab of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_BackTab00
static int tolua_luacode_CodeEdit_BackTab00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BackTab'", NULL);
#endif
  {
   self->BackTab();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BackTab'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: NewLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_NewLine00
static int tolua_luacode_CodeEdit_NewLine00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'NewLine'", NULL);
#endif
  {
   self->NewLine();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'NewLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FormFeed of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_FormFeed00
static int tolua_luacode_CodeEdit_FormFeed00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FormFeed'", NULL);
#endif
  {
   self->FormFeed();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FormFeed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VCHome of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VCHome00
static int tolua_luacode_CodeEdit_VCHome00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VCHome'", NULL);
#endif
  {
   self->VCHome();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VCHome'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VCHomeExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VCHomeExtend00
static int tolua_luacode_CodeEdit_VCHomeExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VCHomeExtend'", NULL);
#endif
  {
   self->VCHomeExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VCHomeExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ZoomIn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ZoomIn00
static int tolua_luacode_CodeEdit_ZoomIn00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ZoomIn'", NULL);
#endif
  {
   self->ZoomIn();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ZoomIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ZoomOut of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ZoomOut00
static int tolua_luacode_CodeEdit_ZoomOut00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ZoomOut'", NULL);
#endif
  {
   self->ZoomOut();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ZoomOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DelWordLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DelWordLeft00
static int tolua_luacode_CodeEdit_DelWordLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DelWordLeft'", NULL);
#endif
  {
   self->DelWordLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DelWordLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DelWordRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DelWordRight00
static int tolua_luacode_CodeEdit_DelWordRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DelWordRight'", NULL);
#endif
  {
   self->DelWordRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DelWordRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineCut of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineCut00
static int tolua_luacode_CodeEdit_LineCut00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineCut'", NULL);
#endif
  {
   self->LineCut();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineCut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineDelete of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineDelete00
static int tolua_luacode_CodeEdit_LineDelete00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineDelete'", NULL);
#endif
  {
   self->LineDelete();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineDelete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineTranspose of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineTranspose00
static int tolua_luacode_CodeEdit_LineTranspose00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineTranspose'", NULL);
#endif
  {
   self->LineTranspose();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineTranspose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineDuplicate of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineDuplicate00
static int tolua_luacode_CodeEdit_LineDuplicate00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineDuplicate'", NULL);
#endif
  {
   self->LineDuplicate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineDuplicate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LowerCase of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LowerCase00
static int tolua_luacode_CodeEdit_LowerCase00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LowerCase'", NULL);
#endif
  {
   self->LowerCase();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LowerCase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpperCase of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_UpperCase00
static int tolua_luacode_CodeEdit_UpperCase00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpperCase'", NULL);
#endif
  {
   self->UpperCase();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpperCase'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineScrollDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineScrollDown00
static int tolua_luacode_CodeEdit_LineScrollDown00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineScrollDown'", NULL);
#endif
  {
   self->LineScrollDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineScrollDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineScrollUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineScrollUp00
static int tolua_luacode_CodeEdit_LineScrollUp00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineScrollUp'", NULL);
#endif
  {
   self->LineScrollUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineScrollUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DeleteBackNotLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DeleteBackNotLine00
static int tolua_luacode_CodeEdit_DeleteBackNotLine00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DeleteBackNotLine'", NULL);
#endif
  {
   self->DeleteBackNotLine();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DeleteBackNotLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeDisplay of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeDisplay00
static int tolua_luacode_CodeEdit_HomeDisplay00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeDisplay'", NULL);
#endif
  {
   self->HomeDisplay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeDisplayExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeDisplayExtend00
static int tolua_luacode_CodeEdit_HomeDisplayExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeDisplayExtend'", NULL);
#endif
  {
   self->HomeDisplayExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeDisplayExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndDisplay of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndDisplay00
static int tolua_luacode_CodeEdit_LineEndDisplay00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndDisplay'", NULL);
#endif
  {
   self->LineEndDisplay();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndDisplayExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndDisplayExtend00
static int tolua_luacode_CodeEdit_LineEndDisplayExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndDisplayExtend'", NULL);
#endif
  {
   self->LineEndDisplayExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndDisplayExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeWrap of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeWrap00
static int tolua_luacode_CodeEdit_HomeWrap00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeWrap'", NULL);
#endif
  {
   self->HomeWrap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeWrap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeWrapExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeWrapExtend00
static int tolua_luacode_CodeEdit_HomeWrapExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeWrapExtend'", NULL);
#endif
  {
   self->HomeWrapExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeWrapExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndWrap of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndWrap00
static int tolua_luacode_CodeEdit_LineEndWrap00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndWrap'", NULL);
#endif
  {
   self->LineEndWrap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndWrap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndWrapExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndWrapExtend00
static int tolua_luacode_CodeEdit_LineEndWrapExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndWrapExtend'", NULL);
#endif
  {
   self->LineEndWrapExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndWrapExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VCHomeWrap of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VCHomeWrap00
static int tolua_luacode_CodeEdit_VCHomeWrap00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VCHomeWrap'", NULL);
#endif
  {
   self->VCHomeWrap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VCHomeWrap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VCHomeWrapExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VCHomeWrapExtend00
static int tolua_luacode_CodeEdit_VCHomeWrapExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VCHomeWrapExtend'", NULL);
#endif
  {
   self->VCHomeWrapExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VCHomeWrapExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineCopy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineCopy00
static int tolua_luacode_CodeEdit_LineCopy00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineCopy'", NULL);
#endif
  {
   self->LineCopy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineCopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MoveCaretInsideView of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_MoveCaretInsideView00
static int tolua_luacode_CodeEdit_MoveCaretInsideView00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MoveCaretInsideView'", NULL);
#endif
  {
   self->MoveCaretInsideView();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MoveCaretInsideView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineLength of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineLength00
static int tolua_luacode_CodeEdit_LineLength00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineLength'", NULL);
#endif
  {
   int tolua_ret = (int)  self->LineLength(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BraceHighlight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_BraceHighlight00
static int tolua_luacode_CodeEdit_BraceHighlight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int pos1 = ((int)  tolua_tonumber(tolua_S,2,0));
  int pos2 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BraceHighlight'", NULL);
#endif
  {
   self->BraceHighlight(pos1,pos2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BraceHighlight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BraceBadLight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_BraceBadLight00
static int tolua_luacode_CodeEdit_BraceBadLight00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BraceBadLight'", NULL);
#endif
  {
   self->BraceBadLight(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BraceBadLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BraceMatch of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_BraceMatch00
static int tolua_luacode_CodeEdit_BraceMatch00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BraceMatch'", NULL);
#endif
  {
   int tolua_ret = (int)  self->BraceMatch(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BraceMatch'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewEOL of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetViewEOL00
static int tolua_luacode_CodeEdit_GetViewEOL00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewEOL'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetViewEOL();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewEOL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetViewEOL of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetViewEOL00
static int tolua_luacode_CodeEdit_SetViewEOL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetViewEOL'", NULL);
#endif
  {
   self->SetViewEOL(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetViewEOL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDocPointer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetDocPointer00
static int tolua_luacode_CodeEdit_GetDocPointer00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDocPointer'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->GetDocPointer();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDocPointer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDocPointer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetDocPointer00
static int tolua_luacode_CodeEdit_SetDocPointer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  void* docPointer = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDocPointer'", NULL);
#endif
  {
   self->SetDocPointer(docPointer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDocPointer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetModEventMask of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetModEventMask00
static int tolua_luacode_CodeEdit_SetModEventMask00(lua_State* tolua_S)
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
  int mask = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetModEventMask'", NULL);
#endif
  {
   self->SetModEventMask(mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetModEventMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEdgeColumn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEdgeColumn00
static int tolua_luacode_CodeEdit_GetEdgeColumn00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEdgeColumn'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetEdgeColumn();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEdgeColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEdgeColumn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetEdgeColumn00
static int tolua_luacode_CodeEdit_SetEdgeColumn00(lua_State* tolua_S)
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
  int column = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEdgeColumn'", NULL);
#endif
  {
   self->SetEdgeColumn(column);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEdgeColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEdgeMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEdgeMode00
static int tolua_luacode_CodeEdit_GetEdgeMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEdgeMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetEdgeMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEdgeMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEdgeMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetEdgeMode00
static int tolua_luacode_CodeEdit_SetEdgeMode00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEdgeMode'", NULL);
#endif
  {
   self->SetEdgeMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEdgeMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetEdgeColour of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetEdgeColour00
static int tolua_luacode_CodeEdit_GetEdgeColour00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetEdgeColour'", NULL);
#endif
  {
   wxColour tolua_ret = (wxColour)  self->GetEdgeColour();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxColour)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxColour));
     tolua_pushusertype(tolua_S,tolua_obj,"wxColour");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetEdgeColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetEdgeColour of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetEdgeColour00
static int tolua_luacode_CodeEdit_SetEdgeColour00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const wxColour* colour = ((const wxColour*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetEdgeColour'", NULL);
#endif
  {
   self->SetEdgeColour(*colour);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetEdgeColour'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SearchAnchor of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SearchAnchor00
static int tolua_luacode_CodeEdit_SearchAnchor00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SearchAnchor'", NULL);
#endif
  {
   self->SearchAnchor();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SearchAnchor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SearchNext of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SearchNext00
static int tolua_luacode_CodeEdit_SearchNext00(lua_State* tolua_S)
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
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SearchNext'", NULL);
#endif
  {
   int tolua_ret = (int)  self->SearchNext(flags,text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SearchNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SearchPrev of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SearchPrev00
static int tolua_luacode_CodeEdit_SearchPrev00(lua_State* tolua_S)
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
  int flags = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SearchPrev'", NULL);
#endif
  {
   int tolua_ret = (int)  self->SearchPrev(flags,text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SearchPrev'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LinesOnScreen of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LinesOnScreen00
static int tolua_luacode_CodeEdit_LinesOnScreen00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LinesOnScreen'", NULL);
#endif
  {
   int tolua_ret = (int)  self->LinesOnScreen();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LinesOnScreen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UsePopUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_UsePopUp00
static int tolua_luacode_CodeEdit_UsePopUp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool allowPopUp = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UsePopUp'", NULL);
#endif
  {
   self->UsePopUp(allowPopUp);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UsePopUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SelectionIsRectangle of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SelectionIsRectangle00
static int tolua_luacode_CodeEdit_SelectionIsRectangle00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SelectionIsRectangle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SelectionIsRectangle();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SelectionIsRectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetZoom of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetZoom00
static int tolua_luacode_CodeEdit_SetZoom00(lua_State* tolua_S)
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
  int zoom = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetZoom'", NULL);
#endif
  {
   self->SetZoom(zoom);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetZoom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetZoom of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetZoom00
static int tolua_luacode_CodeEdit_GetZoom00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetZoom'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetZoom();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetZoom'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateDocument of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CreateDocument00
static int tolua_luacode_CodeEdit_CreateDocument00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateDocument'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->CreateDocument();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateDocument'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddRefDocument of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AddRefDocument00
static int tolua_luacode_CodeEdit_AddRefDocument00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  void* docPointer = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddRefDocument'", NULL);
#endif
  {
   self->AddRefDocument(docPointer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddRefDocument'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReleaseDocument of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ReleaseDocument00
static int tolua_luacode_CodeEdit_ReleaseDocument00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  void* docPointer = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReleaseDocument'", NULL);
#endif
  {
   self->ReleaseDocument(docPointer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReleaseDocument'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModEventMask of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetModEventMask00
static int tolua_luacode_CodeEdit_GetModEventMask00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModEventMask'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetModEventMask();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModEventMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSCIFocus of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSCIFocus00
static int tolua_luacode_CodeEdit_SetSCIFocus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool focus = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSCIFocus'", NULL);
#endif
  {
   self->SetSCIFocus(focus);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSCIFocus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSCIFocus of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSCIFocus00
static int tolua_luacode_CodeEdit_GetSCIFocus00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSCIFocus'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetSCIFocus();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSCIFocus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStatus of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetStatus00
static int tolua_luacode_CodeEdit_SetStatus00(lua_State* tolua_S)
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
  int status = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStatus'", NULL);
#endif
  {
   self->SetStatus(status);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStatus of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetStatus00
static int tolua_luacode_CodeEdit_GetStatus00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStatus'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetStatus();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMouseDownCaptures of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMouseDownCaptures00
static int tolua_luacode_CodeEdit_SetMouseDownCaptures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool captures = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMouseDownCaptures'", NULL);
#endif
  {
   self->SetMouseDownCaptures(captures);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMouseDownCaptures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMouseDownCaptures of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetMouseDownCaptures00
static int tolua_luacode_CodeEdit_GetMouseDownCaptures00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMouseDownCaptures'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetMouseDownCaptures();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMouseDownCaptures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCursorType of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCursorType00
static int tolua_luacode_CodeEdit_SetCursorType00(lua_State* tolua_S)
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
  int cursorType = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCursorType'", NULL);
#endif
  {
   self->SetCursorType(cursorType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCursorType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCursorType of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCursorType00
static int tolua_luacode_CodeEdit_GetCursorType00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCursorType'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCursorType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCursorType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetControlCharSymbol of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetControlCharSymbol00
static int tolua_luacode_CodeEdit_SetControlCharSymbol00(lua_State* tolua_S)
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
  int symbol = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetControlCharSymbol'", NULL);
#endif
  {
   self->SetControlCharSymbol(symbol);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetControlCharSymbol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetControlCharSymbol of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetControlCharSymbol00
static int tolua_luacode_CodeEdit_GetControlCharSymbol00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetControlCharSymbol'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetControlCharSymbol();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetControlCharSymbol'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordPartLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordPartLeft00
static int tolua_luacode_CodeEdit_WordPartLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordPartLeft'", NULL);
#endif
  {
   self->WordPartLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordPartLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordPartLeftExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordPartLeftExtend00
static int tolua_luacode_CodeEdit_WordPartLeftExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordPartLeftExtend'", NULL);
#endif
  {
   self->WordPartLeftExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordPartLeftExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordPartRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordPartRight00
static int tolua_luacode_CodeEdit_WordPartRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordPartRight'", NULL);
#endif
  {
   self->WordPartRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordPartRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordPartRightExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordPartRightExtend00
static int tolua_luacode_CodeEdit_WordPartRightExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordPartRightExtend'", NULL);
#endif
  {
   self->WordPartRightExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordPartRightExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVisiblePolicy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetVisiblePolicy00
static int tolua_luacode_CodeEdit_SetVisiblePolicy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int visiblePolicy = ((int)  tolua_tonumber(tolua_S,2,0));
  int visibleSlop = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVisiblePolicy'", NULL);
#endif
  {
   self->SetVisiblePolicy(visiblePolicy,visibleSlop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVisiblePolicy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DelLineLeft of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DelLineLeft00
static int tolua_luacode_CodeEdit_DelLineLeft00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DelLineLeft'", NULL);
#endif
  {
   self->DelLineLeft();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DelLineLeft'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DelLineRight of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_DelLineRight00
static int tolua_luacode_CodeEdit_DelLineRight00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DelLineRight'", NULL);
#endif
  {
   self->DelLineRight();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DelLineRight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetXOffset of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetXOffset00
static int tolua_luacode_CodeEdit_SetXOffset00(lua_State* tolua_S)
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
  int newOffset = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetXOffset'", NULL);
#endif
  {
   self->SetXOffset(newOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetXOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetXOffset of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetXOffset00
static int tolua_luacode_CodeEdit_GetXOffset00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetXOffset'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetXOffset();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetXOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ChooseCaretX of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ChooseCaretX00
static int tolua_luacode_CodeEdit_ChooseCaretX00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ChooseCaretX'", NULL);
#endif
  {
   self->ChooseCaretX();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ChooseCaretX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetXCaretPolicy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetXCaretPolicy00
static int tolua_luacode_CodeEdit_SetXCaretPolicy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int caretPolicy = ((int)  tolua_tonumber(tolua_S,2,0));
  int caretSlop = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetXCaretPolicy'", NULL);
#endif
  {
   self->SetXCaretPolicy(caretPolicy,caretSlop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetXCaretPolicy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetYCaretPolicy of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetYCaretPolicy00
static int tolua_luacode_CodeEdit_SetYCaretPolicy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int caretPolicy = ((int)  tolua_tonumber(tolua_S,2,0));
  int caretSlop = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetYCaretPolicy'", NULL);
#endif
  {
   self->SetYCaretPolicy(caretPolicy,caretSlop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetYCaretPolicy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPrintWrapMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetPrintWrapMode00
static int tolua_luacode_CodeEdit_SetPrintWrapMode00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPrintWrapMode'", NULL);
#endif
  {
   self->SetPrintWrapMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPrintWrapMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPrintWrapMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPrintWrapMode00
static int tolua_luacode_CodeEdit_GetPrintWrapMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPrintWrapMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetPrintWrapMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPrintWrapMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHotspotActiveForeground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHotspotActiveForeground00
static int tolua_luacode_CodeEdit_SetHotspotActiveForeground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* fore = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHotspotActiveForeground'", NULL);
#endif
  {
   self->SetHotspotActiveForeground(useSetting,*fore);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHotspotActiveForeground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHotspotActiveBackground of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHotspotActiveBackground00
static int tolua_luacode_CodeEdit_SetHotspotActiveBackground00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const wxColour",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useSetting = ((bool)  tolua_toboolean(tolua_S,2,0));
  const wxColour* back = ((const wxColour*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHotspotActiveBackground'", NULL);
#endif
  {
   self->SetHotspotActiveBackground(useSetting,*back);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHotspotActiveBackground'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHotspotActiveUnderline of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHotspotActiveUnderline00
static int tolua_luacode_CodeEdit_SetHotspotActiveUnderline00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool underline = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHotspotActiveUnderline'", NULL);
#endif
  {
   self->SetHotspotActiveUnderline(underline);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHotspotActiveUnderline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHotspotSingleLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHotspotSingleLine00
static int tolua_luacode_CodeEdit_SetHotspotSingleLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool singleLine = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHotspotSingleLine'", NULL);
#endif
  {
   self->SetHotspotSingleLine(singleLine);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHotspotSingleLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ParaDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ParaDown00
static int tolua_luacode_CodeEdit_ParaDown00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ParaDown'", NULL);
#endif
  {
   self->ParaDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ParaDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ParaDownExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ParaDownExtend00
static int tolua_luacode_CodeEdit_ParaDownExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ParaDownExtend'", NULL);
#endif
  {
   self->ParaDownExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ParaDownExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ParaUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ParaUp00
static int tolua_luacode_CodeEdit_ParaUp00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ParaUp'", NULL);
#endif
  {
   self->ParaUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ParaUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ParaUpExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ParaUpExtend00
static int tolua_luacode_CodeEdit_ParaUpExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ParaUpExtend'", NULL);
#endif
  {
   self->ParaUpExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ParaUpExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PositionBefore of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PositionBefore00
static int tolua_luacode_CodeEdit_PositionBefore00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PositionBefore'", NULL);
#endif
  {
   int tolua_ret = (int)  self->PositionBefore(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PositionBefore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PositionAfter of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PositionAfter00
static int tolua_luacode_CodeEdit_PositionAfter00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PositionAfter'", NULL);
#endif
  {
   int tolua_ret = (int)  self->PositionAfter(pos);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PositionAfter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopyRange of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CopyRange00
static int tolua_luacode_CodeEdit_CopyRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopyRange'", NULL);
#endif
  {
   self->CopyRange(startPos,endPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CopyRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CopyText of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CopyText00
static int tolua_luacode_CodeEdit_CopyText00(lua_State* tolua_S)
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
  int length = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CopyText'", NULL);
#endif
  {
   self->CopyText(length,text);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CopyText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSelectionMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetSelectionMode00
static int tolua_luacode_CodeEdit_SetSelectionMode00(lua_State* tolua_S)
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
  int mode = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSelectionMode'", NULL);
#endif
  {
   self->SetSelectionMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSelectionMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectionMode of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelectionMode00
static int tolua_luacode_CodeEdit_GetSelectionMode00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectionMode'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSelectionMode();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectionMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineSelStartPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineSelStartPosition00
static int tolua_luacode_CodeEdit_GetLineSelStartPosition00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineSelStartPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineSelStartPosition(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineSelStartPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineSelEndPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineSelEndPosition00
static int tolua_luacode_CodeEdit_GetLineSelEndPosition00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineSelEndPosition'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLineSelEndPosition(line);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineSelEndPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineDownRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineDownRectExtend00
static int tolua_luacode_CodeEdit_LineDownRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineDownRectExtend'", NULL);
#endif
  {
   self->LineDownRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineDownRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineUpRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineUpRectExtend00
static int tolua_luacode_CodeEdit_LineUpRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineUpRectExtend'", NULL);
#endif
  {
   self->LineUpRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineUpRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharLeftRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharLeftRectExtend00
static int tolua_luacode_CodeEdit_CharLeftRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharLeftRectExtend'", NULL);
#endif
  {
   self->CharLeftRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharLeftRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CharRightRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CharRightRectExtend00
static int tolua_luacode_CodeEdit_CharRightRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CharRightRectExtend'", NULL);
#endif
  {
   self->CharRightRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CharRightRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HomeRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_HomeRectExtend00
static int tolua_luacode_CodeEdit_HomeRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HomeRectExtend'", NULL);
#endif
  {
   self->HomeRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HomeRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: VCHomeRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_VCHomeRectExtend00
static int tolua_luacode_CodeEdit_VCHomeRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'VCHomeRectExtend'", NULL);
#endif
  {
   self->VCHomeRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'VCHomeRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LineEndRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LineEndRectExtend00
static int tolua_luacode_CodeEdit_LineEndRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LineEndRectExtend'", NULL);
#endif
  {
   self->LineEndRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LineEndRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageUpRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageUpRectExtend00
static int tolua_luacode_CodeEdit_PageUpRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageUpRectExtend'", NULL);
#endif
  {
   self->PageUpRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageUpRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PageDownRectExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PageDownRectExtend00
static int tolua_luacode_CodeEdit_PageDownRectExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PageDownRectExtend'", NULL);
#endif
  {
   self->PageDownRectExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PageDownRectExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StutteredPageUp of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StutteredPageUp00
static int tolua_luacode_CodeEdit_StutteredPageUp00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StutteredPageUp'", NULL);
#endif
  {
   self->StutteredPageUp();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StutteredPageUp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StutteredPageUpExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StutteredPageUpExtend00
static int tolua_luacode_CodeEdit_StutteredPageUpExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StutteredPageUpExtend'", NULL);
#endif
  {
   self->StutteredPageUpExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StutteredPageUpExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StutteredPageDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StutteredPageDown00
static int tolua_luacode_CodeEdit_StutteredPageDown00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StutteredPageDown'", NULL);
#endif
  {
   self->StutteredPageDown();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StutteredPageDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StutteredPageDownExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StutteredPageDownExtend00
static int tolua_luacode_CodeEdit_StutteredPageDownExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StutteredPageDownExtend'", NULL);
#endif
  {
   self->StutteredPageDownExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StutteredPageDownExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordLeftEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordLeftEnd00
static int tolua_luacode_CodeEdit_WordLeftEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordLeftEnd'", NULL);
#endif
  {
   self->WordLeftEnd();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordLeftEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordLeftEndExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordLeftEndExtend00
static int tolua_luacode_CodeEdit_WordLeftEndExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordLeftEndExtend'", NULL);
#endif
  {
   self->WordLeftEndExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordLeftEndExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordRightEnd of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordRightEnd00
static int tolua_luacode_CodeEdit_WordRightEnd00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordRightEnd'", NULL);
#endif
  {
   self->WordRightEnd();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordRightEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: WordRightEndExtend of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_WordRightEndExtend00
static int tolua_luacode_CodeEdit_WordRightEndExtend00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'WordRightEndExtend'", NULL);
#endif
  {
   self->WordRightEndExtend();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'WordRightEndExtend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWhitespaceChars of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetWhitespaceChars00
static int tolua_luacode_CodeEdit_SetWhitespaceChars00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string characters = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWhitespaceChars'", NULL);
#endif
  {
   self->SetWhitespaceChars(characters);
   tolua_pushcppstring(tolua_S,(const char*)characters);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWhitespaceChars'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCharsDefault of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetCharsDefault00
static int tolua_luacode_CodeEdit_SetCharsDefault00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCharsDefault'", NULL);
#endif
  {
   self->SetCharsDefault();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCharsDefault'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AutoCompGetCurrent of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AutoCompGetCurrent00
static int tolua_luacode_CodeEdit_AutoCompGetCurrent00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AutoCompGetCurrent'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AutoCompGetCurrent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AutoCompGetCurrent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Allocate of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Allocate00
static int tolua_luacode_CodeEdit_Allocate00(lua_State* tolua_S)
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
  int bytes = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Allocate'", NULL);
#endif
  {
   self->Allocate(bytes);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Allocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StartRecord of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StartRecord00
static int tolua_luacode_CodeEdit_StartRecord00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StartRecord'", NULL);
#endif
  {
   self->StartRecord();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StartRecord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StopRecord of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StopRecord00
static int tolua_luacode_CodeEdit_StopRecord00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StopRecord'", NULL);
#endif
  {
   self->StopRecord();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StopRecord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLexer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLexer01
static int tolua_luacode_CodeEdit_SetLexer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
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
tolua_lerror:
 return tolua_luacode_CodeEdit_SetLexer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLexer of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLexer00
static int tolua_luacode_CodeEdit_GetLexer00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLexer'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetLexer();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLexer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Colourise of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_Colourise00
static int tolua_luacode_CodeEdit_Colourise00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Colourise'", NULL);
#endif
  {
   self->Colourise(startPos,endPos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Colourise'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetProperty of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetProperty00
static int tolua_luacode_CodeEdit_SetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string value = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetProperty'", NULL);
#endif
  {
   self->SetProperty(key,value);
   tolua_pushcppstring(tolua_S,(const char*)key);
   tolua_pushcppstring(tolua_S,(const char*)value);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProperty of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetProperty00
static int tolua_luacode_CodeEdit_GetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProperty'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetProperty(key);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)key);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPropertyExpanded of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPropertyExpanded00
static int tolua_luacode_CodeEdit_GetPropertyExpanded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPropertyExpanded'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetPropertyExpanded(key);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)key);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPropertyExpanded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPropertyInt of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetPropertyInt00
static int tolua_luacode_CodeEdit_GetPropertyInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPropertyInt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetPropertyInt(key);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)key);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPropertyInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStyleBitsNeeded of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetStyleBitsNeeded00
static int tolua_luacode_CodeEdit_GetStyleBitsNeeded00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStyleBitsNeeded'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetStyleBitsNeeded();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStyleBitsNeeded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetKeyWords of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetKeyWords01
static int tolua_luacode_CodeEdit_SetKeyWords01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
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
tolua_lerror:
 return tolua_luacode_CodeEdit_SetKeyWords00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLexerLanguage of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLexerLanguage00
static int tolua_luacode_CodeEdit_SetLexerLanguage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string language = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLexerLanguage'", NULL);
#endif
  {
   self->SetLexerLanguage(language);
   tolua_pushcppstring(tolua_S,(const char*)language);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLexerLanguage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurrentLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCurrentLine00
static int tolua_luacode_CodeEdit_GetCurrentLine00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurrentLine'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetCurrentLine();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurrentLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetSpec of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetSpec00
static int tolua_luacode_CodeEdit_StyleSetSpec00(lua_State* tolua_S)
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
  int styleNum = ((int)  tolua_tonumber(tolua_S,2,0));
  const std::string spec = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetSpec'", NULL);
#endif
  {
   self->StyleSetSpec(styleNum,spec);
   tolua_pushcppstring(tolua_S,(const char*)spec);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetSpec'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetFont of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetFont00
static int tolua_luacode_CodeEdit_StyleSetFont00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wxFont",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int styleNum = ((int)  tolua_tonumber(tolua_S,2,0));
  wxFont* font = ((wxFont*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetFont'", NULL);
#endif
  {
   self->StyleSetFont(styleNum,*font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetFont'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetFontAttr of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetFontAttr00
static int tolua_luacode_CodeEdit_StyleSetFontAttr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,8,&tolua_err) || !tolua_isusertype(tolua_S,8,"wxFontEncoding",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int styleNum = ((int)  tolua_tonumber(tolua_S,2,0));
  int size = ((int)  tolua_tonumber(tolua_S,3,0));
  const std::string faceName = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  bool bold = ((bool)  tolua_toboolean(tolua_S,5,0));
  bool italic = ((bool)  tolua_toboolean(tolua_S,6,0));
  bool underline = ((bool)  tolua_toboolean(tolua_S,7,0));
  wxFontEncoding encoding = *((wxFontEncoding*)  tolua_tousertype(tolua_S,8,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetFontAttr'", NULL);
#endif
  {
   self->StyleSetFontAttr(styleNum,size,faceName,bold,italic,underline,encoding);
   tolua_pushcppstring(tolua_S,(const char*)faceName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetFontAttr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetCharacterSet of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetCharacterSet00
static int tolua_luacode_CodeEdit_StyleSetCharacterSet00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  int characterSet = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetCharacterSet'", NULL);
#endif
  {
   self->StyleSetCharacterSet(style,characterSet);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetCharacterSet'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StyleSetFontEncoding of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_StyleSetFontEncoding00
static int tolua_luacode_CodeEdit_StyleSetFontEncoding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"wxFontEncoding",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int style = ((int)  tolua_tonumber(tolua_S,2,0));
  wxFontEncoding encoding = *((wxFontEncoding*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'StyleSetFontEncoding'", NULL);
#endif
  {
   self->StyleSetFontEncoding(style,encoding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StyleSetFontEncoding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CmdKeyExecute of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CmdKeyExecute00
static int tolua_luacode_CodeEdit_CmdKeyExecute00(lua_State* tolua_S)
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
  int cmd = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CmdKeyExecute'", NULL);
#endif
  {
   self->CmdKeyExecute(cmd);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CmdKeyExecute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMargins of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetMargins00
static int tolua_luacode_CodeEdit_SetMargins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int left = ((int)  tolua_tonumber(tolua_S,2,0));
  int right = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMargins'", NULL);
#endif
  {
   self->SetMargins(left,right);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMargins'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelection of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelection00
static int tolua_luacode_CodeEdit_GetSelection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelection'", NULL);
#endif
  {
   self->GetSelection(&startPos,&endPos);
   tolua_pushnumber(tolua_S,(lua_Number)startPos);
   tolua_pushnumber(tolua_S,(lua_Number)endPos);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PointFromPosition of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_PointFromPosition00
static int tolua_luacode_CodeEdit_PointFromPosition00(lua_State* tolua_S)
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
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PointFromPosition'", NULL);
#endif
  {
   wxPoint tolua_ret = (wxPoint)  self->PointFromPosition(pos);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"wxPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PointFromPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScrollToLine of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ScrollToLine00
static int tolua_luacode_CodeEdit_ScrollToLine00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScrollToLine'", NULL);
#endif
  {
   self->ScrollToLine(line);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScrollToLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ScrollToColumn of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_ScrollToColumn00
static int tolua_luacode_CodeEdit_ScrollToColumn00(lua_State* tolua_S)
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
  int column = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ScrollToColumn'", NULL);
#endif
  {
   self->ScrollToColumn(column);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ScrollToColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SendMsg of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SendMsg00
static int tolua_luacode_CodeEdit_SendMsg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int msg = ((int)  tolua_tonumber(tolua_S,2,0));
  long wp = ((long)  tolua_tonumber(tolua_S,3,0));
  long lp = ((long)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SendMsg'", NULL);
#endif
  {
   long tolua_ret = (long)  self->SendMsg(msg,wp,lp);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SendMsg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetVScrollBar00
static int tolua_luacode_CodeEdit_SetVScrollBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxScrollBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  wxScrollBar* bar = ((wxScrollBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVScrollBar'", NULL);
#endif
  {
   self->SetVScrollBar(bar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetHScrollBar of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetHScrollBar00
static int tolua_luacode_CodeEdit_SetHScrollBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"wxScrollBar",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  wxScrollBar* bar = ((wxScrollBar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetHScrollBar'", NULL);
#endif
  {
   self->SetHScrollBar(bar);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetHScrollBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLastKeydownProcessed of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLastKeydownProcessed00
static int tolua_luacode_CodeEdit_GetLastKeydownProcessed00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLastKeydownProcessed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetLastKeydownProcessed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLastKeydownProcessed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLastKeydownProcessed of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetLastKeydownProcessed00
static int tolua_luacode_CodeEdit_SetLastKeydownProcessed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool val = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLastKeydownProcessed'", NULL);
#endif
  {
   self->SetLastKeydownProcessed(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLastKeydownProcessed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveFile of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SaveFile00
static int tolua_luacode_CodeEdit_SaveFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SaveFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadFile of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_LoadFile00
static int tolua_luacode_CodeEdit_LoadFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->LoadFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUseAntiAliasing of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetUseAntiAliasing00
static int tolua_luacode_CodeEdit_SetUseAntiAliasing00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  bool useAA = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseAntiAliasing'", NULL);
#endif
  {
   self->SetUseAntiAliasing(useAA);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseAntiAliasing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUseAntiAliasing of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetUseAntiAliasing00
static int tolua_luacode_CodeEdit_GetUseAntiAliasing00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUseAntiAliasing'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetUseAntiAliasing();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUseAntiAliasing'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AddTextRaw00
static int tolua_luacode_CodeEdit_AddTextRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTextRaw'", NULL);
#endif
  {
   self->AddTextRaw(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InsertTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_InsertTextRaw00
static int tolua_luacode_CodeEdit_InsertTextRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int pos = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InsertTextRaw'", NULL);
#endif
  {
   self->InsertTextRaw(pos,text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InsertTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLineRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetLineRaw00
static int tolua_luacode_CodeEdit_GetLineRaw00(lua_State* tolua_S)
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
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLineRaw'", NULL);
#endif
  {
   wxCharBuffer tolua_ret = (wxCharBuffer)  self->GetLineRaw(line);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxCharBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxCharBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLineRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectedTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetSelectedTextRaw00
static int tolua_luacode_CodeEdit_GetSelectedTextRaw00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectedTextRaw'", NULL);
#endif
  {
   wxCharBuffer tolua_ret = (wxCharBuffer)  self->GetSelectedTextRaw();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxCharBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxCharBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectedTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTextRangeRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTextRangeRaw00
static int tolua_luacode_CodeEdit_GetTextRangeRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int startPos = ((int)  tolua_tonumber(tolua_S,2,0));
  int endPos = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTextRangeRaw'", NULL);
#endif
  {
   wxCharBuffer tolua_ret = (wxCharBuffer)  self->GetTextRangeRaw(startPos,endPos);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxCharBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxCharBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextRangeRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_SetTextRaw00
static int tolua_luacode_CodeEdit_SetTextRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTextRaw'", NULL);
#endif
  {
   self->SetTextRaw(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetTextRaw00
static int tolua_luacode_CodeEdit_GetTextRaw00(lua_State* tolua_S)
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
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTextRaw'", NULL);
#endif
  {
   wxCharBuffer tolua_ret = (wxCharBuffer)  self->GetTextRaw();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxCharBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxCharBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AppendTextRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_AppendTextRaw00
static int tolua_luacode_CodeEdit_AppendTextRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AppendTextRaw'", NULL);
#endif
  {
   self->AppendTextRaw(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AppendTextRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CursorUpOrDown of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_CursorUpOrDown00
static int tolua_luacode_CodeEdit_CursorUpOrDown00(lua_State* tolua_S)
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
  int dir = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CursorUpOrDown'", NULL);
#endif
  {
   self->CursorUpOrDown(dir);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CursorUpOrDown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCurLineRaw of class  CodeEdit */
#ifndef TOLUA_DISABLE_tolua_luacode_CodeEdit_GetCurLineRaw00
static int tolua_luacode_CodeEdit_GetCurLineRaw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CodeEdit* self = (CodeEdit*)  tolua_tousertype(tolua_S,1,0);
  int linePos = ((int)  tolua_tonumber(tolua_S,2,NULL));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCurLineRaw'", NULL);
#endif
  {
   wxCharBuffer tolua_ret = (wxCharBuffer)  self->GetCurLineRaw(&linePos);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((wxCharBuffer)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(wxCharBuffer));
     tolua_pushusertype(tolua_S,tolua_obj,"wxCharBuffer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
   tolua_pushnumber(tolua_S,(lua_Number)linePos);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCurLineRaw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: selectPage of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_selectPage00
static int tolua_luacode_MainFrame_selectPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'selectPage'", NULL);
#endif
  {
   self->selectPage(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selectPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearCurrentLineMarker of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_ClearCurrentLineMarker00
static int tolua_luacode_MainFrame_ClearCurrentLineMarker00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearCurrentLineMarker'", NULL);
#endif
  {
   self->ClearCurrentLineMarker();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearCurrentLineMarker'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearBreakLineMarker of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_ClearBreakLineMarker00
static int tolua_luacode_MainFrame_ClearBreakLineMarker00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearBreakLineMarker'", NULL);
#endif
  {
   self->ClearBreakLineMarker();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearBreakLineMarker'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GotoNewLine of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GotoNewLine00
static int tolua_luacode_MainFrame_GotoNewLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CodeEdit",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  CodeEdit* edit = ((CodeEdit*)  tolua_tousertype(tolua_S,2,0));
  unsigned int newLine = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  bool center = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GotoNewLine'", NULL);
#endif
  {
   self->GotoNewLine(edit,newLine,center);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GotoNewLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GotoOldLine of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GotoOldLine00
static int tolua_luacode_MainFrame_GotoOldLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  unsigned int scriptIndex = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int newLine = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  bool center = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GotoOldLine'", NULL);
#endif
  {
   OpenFileInfo* tolua_ret = (OpenFileInfo*)  self->GotoOldLine(scriptIndex,newLine,center);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"OpenFileInfo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GotoOldLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseAllFiles of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_CloseAllFiles00
static int tolua_luacode_MainFrame_CloseAllFiles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseAllFiles'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CloseAllFiles();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseAllFiles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveFile of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SaveFile00
static int tolua_luacode_MainFrame_SaveFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* file = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
  bool promptForName = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SaveFile(file,promptForName);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CloseDocument of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_CloseDocument00
static int tolua_luacode_MainFrame_CloseDocument00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int pageIndex = ((int)  tolua_tonumber(tolua_S,2,0));
  bool promptForSave = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CloseDocument'", NULL);
#endif
  {
   self->CloseDocument(pageIndex,promptForSave);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CloseDocument'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveAllFiles of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SaveAllFiles00
static int tolua_luacode_MainFrame_SaveAllFiles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveAllFiles'", NULL);
#endif
  {
   self->SaveAllFiles();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveAllFiles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateEditorOptions of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateEditorOptions00
static int tolua_luacode_MainFrame_UpdateEditorOptions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateEditorOptions'", NULL);
#endif
  {
   self->UpdateEditorOptions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateEditorOptions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindText of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_FindText00
static int tolua_luacode_MainFrame_FindText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* file = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  int flags = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindText'", NULL);
#endif
  {
   self->FindText(file,text,flags);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FindNext of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_FindNext00
static int tolua_luacode_MainFrame_FindNext00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const std::string text = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  int flags = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FindNext'", NULL);
#endif
  {
   self->FindNext(text,flags);
   tolua_pushcppstring(tolua_S,(const char*)text);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FindNext'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDefaultHotKeys of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SetDefaultHotKeys00
static int tolua_luacode_MainFrame_SetDefaultHotKeys00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDefaultHotKeys'", NULL);
#endif
  {
   self->SetDefaultHotKeys();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDefaultHotKeys'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateStatusBarLineAndColumn of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateStatusBarLineAndColumn00
static int tolua_luacode_MainFrame_UpdateStatusBarLineAndColumn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateStatusBarLineAndColumn'", NULL);
#endif
  {
   self->UpdateStatusBarLineAndColumn();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateStatusBarLineAndColumn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CheckReload of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_CheckReload00
static int tolua_luacode_MainFrame_CheckReload00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CheckReload'", NULL);
#endif
  {
   self->CheckReload();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CheckReload'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CheckReload of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_CheckReload01
static int tolua_luacode_MainFrame_CheckReload01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* file = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CheckReload'", NULL);
#endif
  {
   self->CheckReload(file);
  }
 }
 return 0;
tolua_lerror:
 return tolua_luacode_MainFrame_CheckReload00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReloadFile of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_ReloadFile00
static int tolua_luacode_MainFrame_ReloadFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* file = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReloadFile'", NULL);
#endif
  {
   self->ReloadFile(file);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReloadFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadFile of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_loadFile00
static int tolua_luacode_MainFrame_loadFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* file = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
  const char* path = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadFile'", NULL);
#endif
  {
   self->loadFile(file,path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSelectedPage of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GetSelectedPage00
static int tolua_luacode_MainFrame_GetSelectedPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const MainFrame* self = (const MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSelectedPage'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetSelectedPage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSelectedPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveAllLocalBreakpoints of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_RemoveAllLocalBreakpoints00
static int tolua_luacode_MainFrame_RemoveAllLocalBreakpoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Project::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Project::File* file = ((Project::File*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveAllLocalBreakpoints'", NULL);
#endif
  {
   self->RemoveAllLocalBreakpoints(file);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveAllLocalBreakpoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InitializeSourceControl of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_InitializeSourceControl00
static int tolua_luacode_MainFrame_InitializeSourceControl00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InitializeSourceControl'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->InitializeSourceControl();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InitializeSourceControl'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateProjectFileStatus of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateProjectFileStatus00
static int tolua_luacode_MainFrame_UpdateProjectFileStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateProjectFileStatus'", NULL);
#endif
  {
   self->UpdateProjectFileStatus();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateProjectFileStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateProjectFileStatus of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateProjectFileStatus01
static int tolua_luacode_MainFrame_UpdateProjectFileStatus01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Project::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Project::File* file = ((Project::File*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateProjectFileStatus'", NULL);
#endif
  {
   self->UpdateProjectFileStatus(file);
  }
 }
 return 0;
tolua_lerror:
 return tolua_luacode_MainFrame_UpdateProjectFileStatus00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectSelectedFileNames of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GetProjectSelectedFileNames00
static int tolua_luacode_MainFrame_GetProjectSelectedFileNames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const MainFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const MainFrame* self = (const MainFrame*)  tolua_tousertype(tolua_S,1,0);
  std::vector<std::string>* fileNames = ((std::vector<std::string>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectSelectedFileNames'", NULL);
#endif
  {
   self->GetProjectSelectedFileNames(*fileNames);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectSelectedFileNames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNotebookTabSelectedFileNames of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GetNotebookTabSelectedFileNames00
static int tolua_luacode_MainFrame_GetNotebookTabSelectedFileNames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const MainFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"std::vector<std::string>",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const MainFrame* self = (const MainFrame*)  tolua_tousertype(tolua_S,1,0);
  std::vector<std::string>* fileNames = ((std::vector<std::string>*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNotebookTabSelectedFileNames'", NULL);
#endif
  {
   self->GetNotebookTabSelectedFileNames(*fileNames);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNotebookTabSelectedFileNames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMode of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SetMode00
static int tolua_luacode_MainFrame_SetMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Mode",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Mode mode = *((Mode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMode'", NULL);
#endif
  {
   self->SetMode(mode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAppDataDirectory of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GetAppDataDirectory00
static int tolua_luacode_MainFrame_GetAppDataDirectory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const MainFrame* self = (const MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAppDataDirectory'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->GetAppDataDirectory();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAppDataDirectory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShowProjectSettingsDialog of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_ShowProjectSettingsDialog00
static int tolua_luacode_MainFrame_ShowProjectSettingsDialog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShowProjectSettingsDialog'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ShowProjectSettingsDialog();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowProjectSettingsDialog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateDocumentReadOnlyStatus of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateDocumentReadOnlyStatus00
static int tolua_luacode_MainFrame_UpdateDocumentReadOnlyStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateDocumentReadOnlyStatus'", NULL);
#endif
  {
   self->UpdateDocumentReadOnlyStatus();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateDocumentReadOnlyStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateCallback of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateCallback00
static int tolua_luacode_MainFrame_UpdateCallback00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Updater",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Updater* updater = ((Updater*)  tolua_tousertype(tolua_S,2,0));
  void* param = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   MainFrame::UpdateCallback(updater,param);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateCallback'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HandleUpdate of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_HandleUpdate00
static int tolua_luacode_MainFrame_HandleUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HandleUpdate'", NULL);
#endif
  {
   self->HandleUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HandleUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateSyntaxColoring of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateSyntaxColoring00
static int tolua_luacode_MainFrame_UpdateSyntaxColoring00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"OpenFileInfo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  OpenFileInfo* openFile = ((OpenFileInfo*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateSyntaxColoring'", NULL);
#endif
  {
   self->UpdateSyntaxColoring(openFile);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateSyntaxColoring'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PreNotebookPageClose of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_PreNotebookPageClose00
static int tolua_luacode_MainFrame_PreNotebookPageClose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int page = ((int)  tolua_tonumber(tolua_S,2,0));
  bool promptForSave = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PreNotebookPageClose'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->PreNotebookPageClose(page,promptForSave);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PreNotebookPageClose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateStartUpPlacement of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateStartUpPlacement00
static int tolua_luacode_MainFrame_UpdateStartUpPlacement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateStartUpPlacement'", NULL);
#endif
  {
   self->UpdateStartUpPlacement();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateStartUpPlacement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BringToFront of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_BringToFront00
static int tolua_luacode_MainFrame_BringToFront00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BringToFront'", NULL);
#endif
  {
   self->BringToFront();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BringToFront'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFileMatchingSource of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_GetFileMatchingSource00
static int tolua_luacode_MainFrame_GetFileMatchingSource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const MainFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const wxFileName",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const MainFrame* self = (const MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const wxFileName* fileName = ((const wxFileName*)  tolua_tousertype(tolua_S,2,0));
  const std::string source = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFileMatchingSource'", NULL);
#endif
  {
   Project::File* tolua_ret = (Project::File*)  self->GetFileMatchingSource(*fileName,source);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Project::File");
   tolua_pushcppstring(tolua_S,(const char*)source);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFileMatchingSource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateForNewFile of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateForNewFile00
static int tolua_luacode_MainFrame_UpdateForNewFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Project::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Project::File* file = ((Project::File*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateForNewFile'", NULL);
#endif
  {
   self->UpdateForNewFile(file);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateForNewFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateLineMappingIfNecessary of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateLineMappingIfNecessary00
static int tolua_luacode_MainFrame_UpdateLineMappingIfNecessary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Project::File",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Project::File* file = ((Project::File*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateLineMappingIfNecessary'", NULL);
#endif
  {
   self->UpdateLineMappingIfNecessary(file);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateLineMappingIfNecessary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFileStatus of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SetFileStatus00
static int tolua_luacode_MainFrame_SetFileStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Project::File",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"SourceControl::Status",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  Project::File* file = ((Project::File*)  tolua_tousertype(tolua_S,2,0));
  SourceControl::Status status = *((SourceControl::Status*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFileStatus'", NULL);
#endif
  {
   self->SetFileStatus(file,status);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFileStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateScriptLineMappingFromFile of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_UpdateScriptLineMappingFromFile00
static int tolua_luacode_MainFrame_UpdateScriptLineMappingFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Project::File",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"DebugFrontend::Script",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  const Project::File* file = ((const Project::File*)  tolua_tousertype(tolua_S,2,0));
  DebugFrontend::Script* script = ((DebugFrontend::Script*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateScriptLineMappingFromFile'", NULL);
#endif
  {
   self->UpdateScriptLineMappingFromFile(file,script);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateScriptLineMappingFromFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMostRecentlyUsedPage of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_SetMostRecentlyUsedPage00
static int tolua_luacode_MainFrame_SetMostRecentlyUsedPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int pageIndex = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMostRecentlyUsedPage'", NULL);
#endif
  {
   self->SetMostRecentlyUsedPage(pageIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMostRecentlyUsedPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemovePageFromTabOrder of class  MainFrame */
#ifndef TOLUA_DISABLE_tolua_luacode_MainFrame_RemovePageFromTabOrder00
static int tolua_luacode_MainFrame_RemovePageFromTabOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MainFrame",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MainFrame* self = (MainFrame*)  tolua_tousertype(tolua_S,1,0);
  int pageIndex = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemovePageFromTabOrder'", NULL);
#endif
  {
   self->RemovePageFromTabOrder(pageIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemovePageFromTabOrder'.",&tolua_err);
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
  tolua_function(tolua_S,"isalpha",tolua_luacode_isalpha00);
  tolua_function(tolua_S,"isupper",tolua_luacode_isupper00);
  tolua_function(tolua_S,"islower",tolua_luacode_islower00);
  tolua_function(tolua_S,"isdigit",tolua_luacode_isdigit00);
  tolua_function(tolua_S,"ispunct",tolua_luacode_ispunct00);
  tolua_function(tolua_S,"isblank",tolua_luacode_isblank00);
  tolua_function(tolua_S,"isalnum",tolua_luacode_isalnum00);
  tolua_function(tolua_S,"isgraph",tolua_luacode_isgraph00);
  tolua_cclass(tolua_S,"wxKeyEvent","wxKeyEvent","",NULL);
  tolua_beginmodule(tolua_S,"wxKeyEvent");
   tolua_function(tolua_S,"GetModifiers",tolua_luacode_wxKeyEvent_GetModifiers00);
   tolua_function(tolua_S,"ControlDown",tolua_luacode_wxKeyEvent_ControlDown00);
   tolua_function(tolua_S,"ShiftDown",tolua_luacode_wxKeyEvent_ShiftDown00);
   tolua_function(tolua_S,"MetaDown",tolua_luacode_wxKeyEvent_MetaDown00);
   tolua_function(tolua_S,"AltDown",tolua_luacode_wxKeyEvent_AltDown00);
   tolua_function(tolua_S,"CmdDown",tolua_luacode_wxKeyEvent_CmdDown00);
   tolua_function(tolua_S,"isProsessed",tolua_luacode_wxKeyEvent_isProsessed00);
   tolua_function(tolua_S,"setProsessed",tolua_luacode_wxKeyEvent_setProsessed00);
   tolua_function(tolua_S,"HasModifiers",tolua_luacode_wxKeyEvent_HasModifiers00);
   tolua_function(tolua_S,"GetKeyCode",tolua_luacode_wxKeyEvent_GetKeyCode00);
   tolua_function(tolua_S,"GetRawKeyCode",tolua_luacode_wxKeyEvent_GetRawKeyCode00);
   tolua_function(tolua_S,"GetRawKeyFlags",tolua_luacode_wxKeyEvent_GetRawKeyFlags00);
   tolua_function(tolua_S,"GetPosition",tolua_luacode_wxKeyEvent_GetPosition00);
  tolua_endmodule(tolua_S);
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
   tolua_function(tolua_S,"AddText",tolua_luacode_CodeEdit_AddText00);
   tolua_function(tolua_S,"AddText",tolua_luacode_CodeEdit_AddText01);
   tolua_function(tolua_S,"AddStyledText",tolua_luacode_CodeEdit_AddStyledText00);
   tolua_function(tolua_S,"InsertText",tolua_luacode_CodeEdit_InsertText00);
   tolua_function(tolua_S,"ClearAll",tolua_luacode_CodeEdit_ClearAll00);
   tolua_function(tolua_S,"ClearDocumentStyle",tolua_luacode_CodeEdit_ClearDocumentStyle00);
   tolua_function(tolua_S,"GetLength",tolua_luacode_CodeEdit_GetLength00);
   tolua_function(tolua_S,"GetCharAt",tolua_luacode_CodeEdit_GetCharAt00);
   tolua_function(tolua_S,"GetCurrentPos",tolua_luacode_CodeEdit_GetCurrentPos00);
   tolua_function(tolua_S,"GetAnchor",tolua_luacode_CodeEdit_GetAnchor00);
   tolua_function(tolua_S,"GetStyleAt",tolua_luacode_CodeEdit_GetStyleAt00);
   tolua_function(tolua_S,"Redo",tolua_luacode_CodeEdit_Redo00);
   tolua_function(tolua_S,"SetUndoCollection",tolua_luacode_CodeEdit_SetUndoCollection00);
   tolua_function(tolua_S,"SelectAll",tolua_luacode_CodeEdit_SelectAll00);
   tolua_function(tolua_S,"SetSavePoint",tolua_luacode_CodeEdit_SetSavePoint00);
   tolua_function(tolua_S,"GetStyledText",tolua_luacode_CodeEdit_GetStyledText00);
   tolua_function(tolua_S,"CanRedo",tolua_luacode_CodeEdit_CanRedo00);
   tolua_function(tolua_S,"MarkerLineFromHandle",tolua_luacode_CodeEdit_MarkerLineFromHandle00);
   tolua_function(tolua_S,"MarkerDeleteHandle",tolua_luacode_CodeEdit_MarkerDeleteHandle00);
   tolua_function(tolua_S,"GetUndoCollection",tolua_luacode_CodeEdit_GetUndoCollection00);
   tolua_function(tolua_S,"GetViewWhiteSpace",tolua_luacode_CodeEdit_GetViewWhiteSpace00);
   tolua_function(tolua_S,"SetViewWhiteSpace",tolua_luacode_CodeEdit_SetViewWhiteSpace00);
   tolua_function(tolua_S,"PositionFromPoint",tolua_luacode_CodeEdit_PositionFromPoint00);
   tolua_function(tolua_S,"PositionFromPointClose",tolua_luacode_CodeEdit_PositionFromPointClose00);
   tolua_function(tolua_S,"GotoLine",tolua_luacode_CodeEdit_GotoLine00);
   tolua_function(tolua_S,"GotoPos",tolua_luacode_CodeEdit_GotoPos00);
   tolua_function(tolua_S,"SetAnchor",tolua_luacode_CodeEdit_SetAnchor00);
   tolua_function(tolua_S,"GetCurLine",tolua_luacode_CodeEdit_GetCurLine00);
   tolua_function(tolua_S,"GetEndStyled",tolua_luacode_CodeEdit_GetEndStyled00);
   tolua_function(tolua_S,"ConvertEOLs",tolua_luacode_CodeEdit_ConvertEOLs00);
   tolua_function(tolua_S,"GetEOLMode",tolua_luacode_CodeEdit_GetEOLMode00);
   tolua_function(tolua_S,"SetEOLMode",tolua_luacode_CodeEdit_SetEOLMode00);
   tolua_function(tolua_S,"StartStyling",tolua_luacode_CodeEdit_StartStyling00);
   tolua_function(tolua_S,"SetStyling",tolua_luacode_CodeEdit_SetStyling00);
   tolua_function(tolua_S,"GetBufferedDraw",tolua_luacode_CodeEdit_GetBufferedDraw00);
   tolua_function(tolua_S,"SetBufferedDraw",tolua_luacode_CodeEdit_SetBufferedDraw00);
   tolua_function(tolua_S,"SetTabWidth",tolua_luacode_CodeEdit_SetTabWidth00);
   tolua_function(tolua_S,"GetTabWidth",tolua_luacode_CodeEdit_GetTabWidth00);
   tolua_function(tolua_S,"SetCodePage",tolua_luacode_CodeEdit_SetCodePage00);
   tolua_function(tolua_S,"MarkerDefine",tolua_luacode_CodeEdit_MarkerDefine00);
   tolua_function(tolua_S,"MarkerSetForeground",tolua_luacode_CodeEdit_MarkerSetForeground00);
   tolua_function(tolua_S,"MarkerSetBackground",tolua_luacode_CodeEdit_MarkerSetBackground00);
   tolua_function(tolua_S,"MarkerAdd",tolua_luacode_CodeEdit_MarkerAdd00);
   tolua_function(tolua_S,"MarkerDelete",tolua_luacode_CodeEdit_MarkerDelete00);
   tolua_function(tolua_S,"MarkerDeleteAll",tolua_luacode_CodeEdit_MarkerDeleteAll00);
   tolua_function(tolua_S,"MarkerGet",tolua_luacode_CodeEdit_MarkerGet00);
   tolua_function(tolua_S,"MarkerNext",tolua_luacode_CodeEdit_MarkerNext00);
   tolua_function(tolua_S,"MarkerPrevious",tolua_luacode_CodeEdit_MarkerPrevious00);
   tolua_function(tolua_S,"MarkerDefineBitmap",tolua_luacode_CodeEdit_MarkerDefineBitmap00);
   tolua_function(tolua_S,"MarkerAddSet",tolua_luacode_CodeEdit_MarkerAddSet00);
   tolua_function(tolua_S,"MarkerSetAlpha",tolua_luacode_CodeEdit_MarkerSetAlpha00);
   tolua_function(tolua_S,"SetMarginType",tolua_luacode_CodeEdit_SetMarginType00);
   tolua_function(tolua_S,"GetMarginType",tolua_luacode_CodeEdit_GetMarginType00);
   tolua_function(tolua_S,"SetMarginWidth",tolua_luacode_CodeEdit_SetMarginWidth00);
   tolua_function(tolua_S,"GetMarginWidth",tolua_luacode_CodeEdit_GetMarginWidth00);
   tolua_function(tolua_S,"SetMarginMask",tolua_luacode_CodeEdit_SetMarginMask00);
   tolua_function(tolua_S,"GetMarginMask",tolua_luacode_CodeEdit_GetMarginMask00);
   tolua_function(tolua_S,"SetMarginSensitive",tolua_luacode_CodeEdit_SetMarginSensitive00);
   tolua_function(tolua_S,"GetMarginSensitive",tolua_luacode_CodeEdit_GetMarginSensitive00);
   tolua_function(tolua_S,"StyleClearAll",tolua_luacode_CodeEdit_StyleClearAll00);
   tolua_function(tolua_S,"StyleSetForeground",tolua_luacode_CodeEdit_StyleSetForeground00);
   tolua_function(tolua_S,"StyleSetBackground",tolua_luacode_CodeEdit_StyleSetBackground00);
   tolua_function(tolua_S,"StyleSetBold",tolua_luacode_CodeEdit_StyleSetBold00);
   tolua_function(tolua_S,"StyleSetItalic",tolua_luacode_CodeEdit_StyleSetItalic00);
   tolua_function(tolua_S,"StyleSetSize",tolua_luacode_CodeEdit_StyleSetSize00);
   tolua_function(tolua_S,"StyleSetFaceName",tolua_luacode_CodeEdit_StyleSetFaceName00);
   tolua_function(tolua_S,"StyleSetEOLFilled",tolua_luacode_CodeEdit_StyleSetEOLFilled00);
   tolua_function(tolua_S,"StyleResetDefault",tolua_luacode_CodeEdit_StyleResetDefault00);
   tolua_function(tolua_S,"StyleSetUnderline",tolua_luacode_CodeEdit_StyleSetUnderline00);
   tolua_function(tolua_S,"StyleSetCase",tolua_luacode_CodeEdit_StyleSetCase00);
   tolua_function(tolua_S,"StyleSetHotSpot",tolua_luacode_CodeEdit_StyleSetHotSpot00);
   tolua_function(tolua_S,"GetSelAlpha",tolua_luacode_CodeEdit_GetSelAlpha00);
   tolua_function(tolua_S,"SetSelAlpha",tolua_luacode_CodeEdit_SetSelAlpha00);
   tolua_function(tolua_S,"SetSelForeground",tolua_luacode_CodeEdit_SetSelForeground00);
   tolua_function(tolua_S,"SetSelBackground",tolua_luacode_CodeEdit_SetSelBackground00);
   tolua_function(tolua_S,"SetCaretForeground",tolua_luacode_CodeEdit_SetCaretForeground00);
   tolua_function(tolua_S,"CmdKeyAssign",tolua_luacode_CodeEdit_CmdKeyAssign00);
   tolua_function(tolua_S,"CmdKeyClear",tolua_luacode_CodeEdit_CmdKeyClear00);
   tolua_function(tolua_S,"CmdKeyClearAll",tolua_luacode_CodeEdit_CmdKeyClearAll00);
   tolua_function(tolua_S,"SetStyleBytes",tolua_luacode_CodeEdit_SetStyleBytes00);
   tolua_function(tolua_S,"StyleSetVisible",tolua_luacode_CodeEdit_StyleSetVisible00);
   tolua_function(tolua_S,"GetCaretPeriod",tolua_luacode_CodeEdit_GetCaretPeriod00);
   tolua_function(tolua_S,"SetCaretPeriod",tolua_luacode_CodeEdit_SetCaretPeriod00);
   tolua_function(tolua_S,"SetWordChars",tolua_luacode_CodeEdit_SetWordChars00);
   tolua_function(tolua_S,"BeginUndoAction",tolua_luacode_CodeEdit_BeginUndoAction00);
   tolua_function(tolua_S,"EndUndoAction",tolua_luacode_CodeEdit_EndUndoAction00);
   tolua_function(tolua_S,"IndicatorSetStyle",tolua_luacode_CodeEdit_IndicatorSetStyle00);
   tolua_function(tolua_S,"IndicatorGetStyle",tolua_luacode_CodeEdit_IndicatorGetStyle00);
   tolua_function(tolua_S,"IndicatorSetForeground",tolua_luacode_CodeEdit_IndicatorSetForeground00);
   tolua_function(tolua_S,"IndicatorGetForeground",tolua_luacode_CodeEdit_IndicatorGetForeground00);
   tolua_function(tolua_S,"SetWhitespaceForeground",tolua_luacode_CodeEdit_SetWhitespaceForeground00);
   tolua_function(tolua_S,"SetWhitespaceBackground",tolua_luacode_CodeEdit_SetWhitespaceBackground00);
   tolua_function(tolua_S,"SetStyleBits",tolua_luacode_CodeEdit_SetStyleBits00);
   tolua_function(tolua_S,"GetStyleBits",tolua_luacode_CodeEdit_GetStyleBits00);
   tolua_function(tolua_S,"SetLineState",tolua_luacode_CodeEdit_SetLineState00);
   tolua_function(tolua_S,"GetLineState",tolua_luacode_CodeEdit_GetLineState00);
   tolua_function(tolua_S,"GetMaxLineState",tolua_luacode_CodeEdit_GetMaxLineState00);
   tolua_function(tolua_S,"GetCaretLineVisible",tolua_luacode_CodeEdit_GetCaretLineVisible00);
   tolua_function(tolua_S,"SetCaretLineVisible",tolua_luacode_CodeEdit_SetCaretLineVisible00);
   tolua_function(tolua_S,"GetCaretLineBackground",tolua_luacode_CodeEdit_GetCaretLineBackground00);
   tolua_function(tolua_S,"SetCaretLineBackground",tolua_luacode_CodeEdit_SetCaretLineBackground00);
   tolua_function(tolua_S,"StyleSetChangeable",tolua_luacode_CodeEdit_StyleSetChangeable00);
   tolua_function(tolua_S,"AutoCompShow",tolua_luacode_CodeEdit_AutoCompShow00);
   tolua_function(tolua_S,"AutoCompCancel",tolua_luacode_CodeEdit_AutoCompCancel00);
   tolua_function(tolua_S,"AutoCompActive",tolua_luacode_CodeEdit_AutoCompActive00);
   tolua_function(tolua_S,"AutoCompPosStart",tolua_luacode_CodeEdit_AutoCompPosStart00);
   tolua_function(tolua_S,"AutoCompComplete",tolua_luacode_CodeEdit_AutoCompComplete00);
   tolua_function(tolua_S,"AutoCompStops",tolua_luacode_CodeEdit_AutoCompStops00);
   tolua_function(tolua_S,"AutoCompSetSeparator",tolua_luacode_CodeEdit_AutoCompSetSeparator00);
   tolua_function(tolua_S,"AutoCompGetSeparator",tolua_luacode_CodeEdit_AutoCompGetSeparator00);
   tolua_function(tolua_S,"AutoCompSelect",tolua_luacode_CodeEdit_AutoCompSelect00);
   tolua_function(tolua_S,"AutoCompSetCancelAtStart",tolua_luacode_CodeEdit_AutoCompSetCancelAtStart00);
   tolua_function(tolua_S,"AutoCompGetCancelAtStart",tolua_luacode_CodeEdit_AutoCompGetCancelAtStart00);
   tolua_function(tolua_S,"AutoCompSetFillUps",tolua_luacode_CodeEdit_AutoCompSetFillUps00);
   tolua_function(tolua_S,"AutoCompSetChooseSingle",tolua_luacode_CodeEdit_AutoCompSetChooseSingle00);
   tolua_function(tolua_S,"AutoCompGetChooseSingle",tolua_luacode_CodeEdit_AutoCompGetChooseSingle00);
   tolua_function(tolua_S,"AutoCompSetIgnoreCase",tolua_luacode_CodeEdit_AutoCompSetIgnoreCase00);
   tolua_function(tolua_S,"AutoCompGetIgnoreCase",tolua_luacode_CodeEdit_AutoCompGetIgnoreCase00);
   tolua_function(tolua_S,"UserListShow",tolua_luacode_CodeEdit_UserListShow00);
   tolua_function(tolua_S,"AutoCompSetAutoHide",tolua_luacode_CodeEdit_AutoCompSetAutoHide00);
   tolua_function(tolua_S,"AutoCompGetAutoHide",tolua_luacode_CodeEdit_AutoCompGetAutoHide00);
   tolua_function(tolua_S,"AutoCompSetDropRestOfWord",tolua_luacode_CodeEdit_AutoCompSetDropRestOfWord00);
   tolua_function(tolua_S,"AutoCompGetDropRestOfWord",tolua_luacode_CodeEdit_AutoCompGetDropRestOfWord00);
   tolua_function(tolua_S,"RegisterImage",tolua_luacode_CodeEdit_RegisterImage00);
   tolua_function(tolua_S,"ClearRegisteredImages",tolua_luacode_CodeEdit_ClearRegisteredImages00);
   tolua_function(tolua_S,"AutoCompGetTypeSeparator",tolua_luacode_CodeEdit_AutoCompGetTypeSeparator00);
   tolua_function(tolua_S,"AutoCompSetTypeSeparator",tolua_luacode_CodeEdit_AutoCompSetTypeSeparator00);
   tolua_function(tolua_S,"AutoCompSetMaxWidth",tolua_luacode_CodeEdit_AutoCompSetMaxWidth00);
   tolua_function(tolua_S,"AutoCompGetMaxWidth",tolua_luacode_CodeEdit_AutoCompGetMaxWidth00);
   tolua_function(tolua_S,"AutoCompSetMaxHeight",tolua_luacode_CodeEdit_AutoCompSetMaxHeight00);
   tolua_function(tolua_S,"AutoCompGetMaxHeight",tolua_luacode_CodeEdit_AutoCompGetMaxHeight00);
   tolua_function(tolua_S,"SetIndent",tolua_luacode_CodeEdit_SetIndent00);
   tolua_function(tolua_S,"GetIndent",tolua_luacode_CodeEdit_GetIndent00);
   tolua_function(tolua_S,"SetUseTabs",tolua_luacode_CodeEdit_SetUseTabs00);
   tolua_function(tolua_S,"GetUseTabs",tolua_luacode_CodeEdit_GetUseTabs00);
   tolua_function(tolua_S,"SetLineIndentation",tolua_luacode_CodeEdit_SetLineIndentation00);
   tolua_function(tolua_S,"GetLineIndentation",tolua_luacode_CodeEdit_GetLineIndentation00);
   tolua_function(tolua_S,"GetLineIndentPosition",tolua_luacode_CodeEdit_GetLineIndentPosition00);
   tolua_function(tolua_S,"GetColumn",tolua_luacode_CodeEdit_GetColumn00);
   tolua_function(tolua_S,"FindColumn",tolua_luacode_CodeEdit_FindColumn00);
   tolua_function(tolua_S,"GetCaretSticky",tolua_luacode_CodeEdit_GetCaretSticky00);
   tolua_function(tolua_S,"SetCaretSticky",tolua_luacode_CodeEdit_SetCaretSticky00);
   tolua_function(tolua_S,"ToggleCaretSticky",tolua_luacode_CodeEdit_ToggleCaretSticky00);
   tolua_function(tolua_S,"SetPasteConvertEndings",tolua_luacode_CodeEdit_SetPasteConvertEndings00);
   tolua_function(tolua_S,"GetPasteConvertEndings",tolua_luacode_CodeEdit_GetPasteConvertEndings00);
   tolua_function(tolua_S,"SelectionDuplicate",tolua_luacode_CodeEdit_SelectionDuplicate00);
   tolua_function(tolua_S,"GetCaretLineBackroundAlpha",tolua_luacode_CodeEdit_GetCaretLineBackroundAlpha00);
   tolua_function(tolua_S,"SetCaretLineBackgroundAlpha",tolua_luacode_CodeEdit_SetCaretLineBackgroundAlpha00);
   tolua_function(tolua_S,"SetUseHorizontalScrollBar",tolua_luacode_CodeEdit_SetUseHorizontalScrollBar00);
   tolua_function(tolua_S,"GetUseHorizontalScrollBar",tolua_luacode_CodeEdit_GetUseHorizontalScrollBar00);
   tolua_function(tolua_S,"SetIndentationGuides",tolua_luacode_CodeEdit_SetIndentationGuides00);
   tolua_function(tolua_S,"GetIndentationGuides",tolua_luacode_CodeEdit_GetIndentationGuides00);
   tolua_function(tolua_S,"SetHighlightGuide",tolua_luacode_CodeEdit_SetHighlightGuide00);
   tolua_function(tolua_S,"GetHighlightGuide",tolua_luacode_CodeEdit_GetHighlightGuide00);
   tolua_function(tolua_S,"GetLineEndPosition",tolua_luacode_CodeEdit_GetLineEndPosition00);
   tolua_function(tolua_S,"GetCodePage",tolua_luacode_CodeEdit_GetCodePage00);
   tolua_function(tolua_S,"GetCaretForeground",tolua_luacode_CodeEdit_GetCaretForeground00);
   tolua_function(tolua_S,"GetReadOnly",tolua_luacode_CodeEdit_GetReadOnly00);
   tolua_function(tolua_S,"SetCurrentPos",tolua_luacode_CodeEdit_SetCurrentPos00);
   tolua_function(tolua_S,"SetSelectionStart",tolua_luacode_CodeEdit_SetSelectionStart00);
   tolua_function(tolua_S,"GetSelectionStart",tolua_luacode_CodeEdit_GetSelectionStart00);
   tolua_function(tolua_S,"SetSelectionEnd",tolua_luacode_CodeEdit_SetSelectionEnd00);
   tolua_function(tolua_S,"GetSelectionEnd",tolua_luacode_CodeEdit_GetSelectionEnd00);
   tolua_function(tolua_S,"SetPrintMagnification",tolua_luacode_CodeEdit_SetPrintMagnification00);
   tolua_function(tolua_S,"GetPrintMagnification",tolua_luacode_CodeEdit_GetPrintMagnification00);
   tolua_function(tolua_S,"SetPrintColourMode",tolua_luacode_CodeEdit_SetPrintColourMode00);
   tolua_function(tolua_S,"GetPrintColourMode",tolua_luacode_CodeEdit_GetPrintColourMode00);
   tolua_function(tolua_S,"FindText",tolua_luacode_CodeEdit_FindText00);
   tolua_function(tolua_S,"FormatRange",tolua_luacode_CodeEdit_FormatRange00);
   tolua_function(tolua_S,"GetFirstVisibleLine",tolua_luacode_CodeEdit_GetFirstVisibleLine00);
   tolua_function(tolua_S,"GetLine",tolua_luacode_CodeEdit_GetLine00);
   tolua_function(tolua_S,"GetLineCount",tolua_luacode_CodeEdit_GetLineCount00);
   tolua_function(tolua_S,"SetMarginLeft",tolua_luacode_CodeEdit_SetMarginLeft00);
   tolua_function(tolua_S,"GetMarginLeft",tolua_luacode_CodeEdit_GetMarginLeft00);
   tolua_function(tolua_S,"SetMarginRight",tolua_luacode_CodeEdit_SetMarginRight00);
   tolua_function(tolua_S,"GetMarginRight",tolua_luacode_CodeEdit_GetMarginRight00);
   tolua_function(tolua_S,"GetModify",tolua_luacode_CodeEdit_GetModify00);
   tolua_function(tolua_S,"SetSelection",tolua_luacode_CodeEdit_SetSelection00);
   tolua_function(tolua_S,"GetSelectedText",tolua_luacode_CodeEdit_GetSelectedText00);
   tolua_function(tolua_S,"GetTextRange",tolua_luacode_CodeEdit_GetTextRange00);
   tolua_function(tolua_S,"HideSelection",tolua_luacode_CodeEdit_HideSelection00);
   tolua_function(tolua_S,"LineFromPosition",tolua_luacode_CodeEdit_LineFromPosition00);
   tolua_function(tolua_S,"PositionFromLine",tolua_luacode_CodeEdit_PositionFromLine00);
   tolua_function(tolua_S,"LineScroll",tolua_luacode_CodeEdit_LineScroll00);
   tolua_function(tolua_S,"EnsureCaretVisible",tolua_luacode_CodeEdit_EnsureCaretVisible00);
   tolua_function(tolua_S,"ReplaceSelection",tolua_luacode_CodeEdit_ReplaceSelection00);
   tolua_function(tolua_S,"SetReadOnly",tolua_luacode_CodeEdit_SetReadOnly00);
   tolua_function(tolua_S,"CanPaste",tolua_luacode_CodeEdit_CanPaste00);
   tolua_function(tolua_S,"CanUndo",tolua_luacode_CodeEdit_CanUndo00);
   tolua_function(tolua_S,"EmptyUndoBuffer",tolua_luacode_CodeEdit_EmptyUndoBuffer00);
   tolua_function(tolua_S,"Undo",tolua_luacode_CodeEdit_Undo00);
   tolua_function(tolua_S,"Cut",tolua_luacode_CodeEdit_Cut00);
   tolua_function(tolua_S,"Copy",tolua_luacode_CodeEdit_Copy00);
   tolua_function(tolua_S,"Paste",tolua_luacode_CodeEdit_Paste00);
   tolua_function(tolua_S,"Clear",tolua_luacode_CodeEdit_Clear00);
   tolua_function(tolua_S,"SetText",tolua_luacode_CodeEdit_SetText00);
   tolua_function(tolua_S,"GetText",tolua_luacode_CodeEdit_GetText00);
   tolua_function(tolua_S,"GetTextLength",tolua_luacode_CodeEdit_GetTextLength00);
   tolua_function(tolua_S,"SetOvertype",tolua_luacode_CodeEdit_SetOvertype00);
   tolua_function(tolua_S,"GetOvertype",tolua_luacode_CodeEdit_GetOvertype00);
   tolua_function(tolua_S,"SetCaretWidth",tolua_luacode_CodeEdit_SetCaretWidth00);
   tolua_function(tolua_S,"GetCaretWidth",tolua_luacode_CodeEdit_GetCaretWidth00);
   tolua_function(tolua_S,"SetTargetStart",tolua_luacode_CodeEdit_SetTargetStart00);
   tolua_function(tolua_S,"GetTargetStart",tolua_luacode_CodeEdit_GetTargetStart00);
   tolua_function(tolua_S,"SetTargetEnd",tolua_luacode_CodeEdit_SetTargetEnd00);
   tolua_function(tolua_S,"GetTargetEnd",tolua_luacode_CodeEdit_GetTargetEnd00);
   tolua_function(tolua_S,"ReplaceTarget",tolua_luacode_CodeEdit_ReplaceTarget00);
   tolua_function(tolua_S,"ReplaceTargetRE",tolua_luacode_CodeEdit_ReplaceTargetRE00);
   tolua_function(tolua_S,"SearchInTarget",tolua_luacode_CodeEdit_SearchInTarget00);
   tolua_function(tolua_S,"SetSearchFlags",tolua_luacode_CodeEdit_SetSearchFlags00);
   tolua_function(tolua_S,"GetSearchFlags",tolua_luacode_CodeEdit_GetSearchFlags00);
   tolua_function(tolua_S,"CallTipShow",tolua_luacode_CodeEdit_CallTipShow00);
   tolua_function(tolua_S,"CallTipCancel",tolua_luacode_CodeEdit_CallTipCancel00);
   tolua_function(tolua_S,"CallTipActive",tolua_luacode_CodeEdit_CallTipActive00);
   tolua_function(tolua_S,"CallTipPosAtStart",tolua_luacode_CodeEdit_CallTipPosAtStart00);
   tolua_function(tolua_S,"CallTipSetHighlight",tolua_luacode_CodeEdit_CallTipSetHighlight00);
   tolua_function(tolua_S,"CallTipSetBackground",tolua_luacode_CodeEdit_CallTipSetBackground00);
   tolua_function(tolua_S,"CallTipSetForeground",tolua_luacode_CodeEdit_CallTipSetForeground00);
   tolua_function(tolua_S,"CallTipSetForegroundHighlight",tolua_luacode_CodeEdit_CallTipSetForegroundHighlight00);
   tolua_function(tolua_S,"CallTipUseStyle",tolua_luacode_CodeEdit_CallTipUseStyle00);
   tolua_function(tolua_S,"VisibleFromDocLine",tolua_luacode_CodeEdit_VisibleFromDocLine00);
   tolua_function(tolua_S,"DocLineFromVisible",tolua_luacode_CodeEdit_DocLineFromVisible00);
   tolua_function(tolua_S,"WrapCount",tolua_luacode_CodeEdit_WrapCount00);
   tolua_function(tolua_S,"SetFoldLevel",tolua_luacode_CodeEdit_SetFoldLevel00);
   tolua_function(tolua_S,"GetFoldLevel",tolua_luacode_CodeEdit_GetFoldLevel00);
   tolua_function(tolua_S,"GetLastChild",tolua_luacode_CodeEdit_GetLastChild00);
   tolua_function(tolua_S,"GetFoldParent",tolua_luacode_CodeEdit_GetFoldParent00);
   tolua_function(tolua_S,"ShowLines",tolua_luacode_CodeEdit_ShowLines00);
   tolua_function(tolua_S,"HideLines",tolua_luacode_CodeEdit_HideLines00);
   tolua_function(tolua_S,"GetLineVisible",tolua_luacode_CodeEdit_GetLineVisible00);
   tolua_function(tolua_S,"SetFoldExpanded",tolua_luacode_CodeEdit_SetFoldExpanded00);
   tolua_function(tolua_S,"GetFoldExpanded",tolua_luacode_CodeEdit_GetFoldExpanded00);
   tolua_function(tolua_S,"ToggleFold",tolua_luacode_CodeEdit_ToggleFold00);
   tolua_function(tolua_S,"EnsureVisible",tolua_luacode_CodeEdit_EnsureVisible00);
   tolua_function(tolua_S,"SetFoldFlags",tolua_luacode_CodeEdit_SetFoldFlags00);
   tolua_function(tolua_S,"EnsureVisibleEnforcePolicy",tolua_luacode_CodeEdit_EnsureVisibleEnforcePolicy00);
   tolua_function(tolua_S,"SetTabIndents",tolua_luacode_CodeEdit_SetTabIndents00);
   tolua_function(tolua_S,"GetTabIndents",tolua_luacode_CodeEdit_GetTabIndents00);
   tolua_function(tolua_S,"SetBackSpaceUnIndents",tolua_luacode_CodeEdit_SetBackSpaceUnIndents00);
   tolua_function(tolua_S,"GetBackSpaceUnIndents",tolua_luacode_CodeEdit_GetBackSpaceUnIndents00);
   tolua_function(tolua_S,"SetMouseDwellTime",tolua_luacode_CodeEdit_SetMouseDwellTime00);
   tolua_function(tolua_S,"GetMouseDwellTime",tolua_luacode_CodeEdit_GetMouseDwellTime00);
   tolua_function(tolua_S,"WordStartPosition",tolua_luacode_CodeEdit_WordStartPosition00);
   tolua_function(tolua_S,"WordEndPosition",tolua_luacode_CodeEdit_WordEndPosition00);
   tolua_function(tolua_S,"SetWrapMode",tolua_luacode_CodeEdit_SetWrapMode00);
   tolua_function(tolua_S,"GetWrapMode",tolua_luacode_CodeEdit_GetWrapMode00);
   tolua_function(tolua_S,"SetWrapVisualFlags",tolua_luacode_CodeEdit_SetWrapVisualFlags00);
   tolua_function(tolua_S,"GetWrapVisualFlags",tolua_luacode_CodeEdit_GetWrapVisualFlags00);
   tolua_function(tolua_S,"SetWrapVisualFlagsLocation",tolua_luacode_CodeEdit_SetWrapVisualFlagsLocation00);
   tolua_function(tolua_S,"GetWrapVisualFlagsLocation",tolua_luacode_CodeEdit_GetWrapVisualFlagsLocation00);
   tolua_function(tolua_S,"SetWrapStartIndent",tolua_luacode_CodeEdit_SetWrapStartIndent00);
   tolua_function(tolua_S,"GetWrapStartIndent",tolua_luacode_CodeEdit_GetWrapStartIndent00);
   tolua_function(tolua_S,"SetLayoutCache",tolua_luacode_CodeEdit_SetLayoutCache00);
   tolua_function(tolua_S,"GetLayoutCache",tolua_luacode_CodeEdit_GetLayoutCache00);
   tolua_function(tolua_S,"SetScrollWidth",tolua_luacode_CodeEdit_SetScrollWidth00);
   tolua_function(tolua_S,"GetScrollWidth",tolua_luacode_CodeEdit_GetScrollWidth00);
   tolua_function(tolua_S,"TextWidth",tolua_luacode_CodeEdit_TextWidth00);
   tolua_function(tolua_S,"SetEndAtLastLine",tolua_luacode_CodeEdit_SetEndAtLastLine00);
   tolua_function(tolua_S,"GetEndAtLastLine",tolua_luacode_CodeEdit_GetEndAtLastLine00);
   tolua_function(tolua_S,"TextHeight",tolua_luacode_CodeEdit_TextHeight00);
   tolua_function(tolua_S,"SetUseVerticalScrollBar",tolua_luacode_CodeEdit_SetUseVerticalScrollBar00);
   tolua_function(tolua_S,"GetUseVerticalScrollBar",tolua_luacode_CodeEdit_GetUseVerticalScrollBar00);
   tolua_function(tolua_S,"AppendText",tolua_luacode_CodeEdit_AppendText00);
   tolua_function(tolua_S,"AppendText",tolua_luacode_CodeEdit_AppendText01);
   tolua_function(tolua_S,"GetTwoPhaseDraw",tolua_luacode_CodeEdit_GetTwoPhaseDraw00);
   tolua_function(tolua_S,"SetTwoPhaseDraw",tolua_luacode_CodeEdit_SetTwoPhaseDraw00);
   tolua_function(tolua_S,"TargetFromSelection",tolua_luacode_CodeEdit_TargetFromSelection00);
   tolua_function(tolua_S,"LinesJoin",tolua_luacode_CodeEdit_LinesJoin00);
   tolua_function(tolua_S,"LinesSplit",tolua_luacode_CodeEdit_LinesSplit00);
   tolua_function(tolua_S,"SetFoldMarginColour",tolua_luacode_CodeEdit_SetFoldMarginColour00);
   tolua_function(tolua_S,"SetFoldMarginHiColour",tolua_luacode_CodeEdit_SetFoldMarginHiColour00);
   tolua_function(tolua_S,"LineDown",tolua_luacode_CodeEdit_LineDown00);
   tolua_function(tolua_S,"LineDownExtend",tolua_luacode_CodeEdit_LineDownExtend00);
   tolua_function(tolua_S,"LineUp",tolua_luacode_CodeEdit_LineUp00);
   tolua_function(tolua_S,"LineUpExtend",tolua_luacode_CodeEdit_LineUpExtend00);
   tolua_function(tolua_S,"CharLeft",tolua_luacode_CodeEdit_CharLeft00);
   tolua_function(tolua_S,"CharLeftExtend",tolua_luacode_CodeEdit_CharLeftExtend00);
   tolua_function(tolua_S,"CharRight",tolua_luacode_CodeEdit_CharRight00);
   tolua_function(tolua_S,"CharRightExtend",tolua_luacode_CodeEdit_CharRightExtend00);
   tolua_function(tolua_S,"WordLeft",tolua_luacode_CodeEdit_WordLeft00);
   tolua_function(tolua_S,"WordLeftExtend",tolua_luacode_CodeEdit_WordLeftExtend00);
   tolua_function(tolua_S,"WordRight",tolua_luacode_CodeEdit_WordRight00);
   tolua_function(tolua_S,"WordRightExtend",tolua_luacode_CodeEdit_WordRightExtend00);
   tolua_function(tolua_S,"Home",tolua_luacode_CodeEdit_Home00);
   tolua_function(tolua_S,"HomeExtend",tolua_luacode_CodeEdit_HomeExtend00);
   tolua_function(tolua_S,"LineEnd",tolua_luacode_CodeEdit_LineEnd00);
   tolua_function(tolua_S,"LineEndExtend",tolua_luacode_CodeEdit_LineEndExtend00);
   tolua_function(tolua_S,"DocumentStart",tolua_luacode_CodeEdit_DocumentStart00);
   tolua_function(tolua_S,"DocumentStartExtend",tolua_luacode_CodeEdit_DocumentStartExtend00);
   tolua_function(tolua_S,"DocumentEnd",tolua_luacode_CodeEdit_DocumentEnd00);
   tolua_function(tolua_S,"DocumentEndExtend",tolua_luacode_CodeEdit_DocumentEndExtend00);
   tolua_function(tolua_S,"PageUp",tolua_luacode_CodeEdit_PageUp00);
   tolua_function(tolua_S,"PageUpExtend",tolua_luacode_CodeEdit_PageUpExtend00);
   tolua_function(tolua_S,"PageDown",tolua_luacode_CodeEdit_PageDown00);
   tolua_function(tolua_S,"PageDownExtend",tolua_luacode_CodeEdit_PageDownExtend00);
   tolua_function(tolua_S,"EditToggleOvertype",tolua_luacode_CodeEdit_EditToggleOvertype00);
   tolua_function(tolua_S,"Cancel",tolua_luacode_CodeEdit_Cancel00);
   tolua_function(tolua_S,"DeleteBack",tolua_luacode_CodeEdit_DeleteBack00);
   tolua_function(tolua_S,"Tab",tolua_luacode_CodeEdit_Tab00);
   tolua_function(tolua_S,"BackTab",tolua_luacode_CodeEdit_BackTab00);
   tolua_function(tolua_S,"NewLine",tolua_luacode_CodeEdit_NewLine00);
   tolua_function(tolua_S,"FormFeed",tolua_luacode_CodeEdit_FormFeed00);
   tolua_function(tolua_S,"VCHome",tolua_luacode_CodeEdit_VCHome00);
   tolua_function(tolua_S,"VCHomeExtend",tolua_luacode_CodeEdit_VCHomeExtend00);
   tolua_function(tolua_S,"ZoomIn",tolua_luacode_CodeEdit_ZoomIn00);
   tolua_function(tolua_S,"ZoomOut",tolua_luacode_CodeEdit_ZoomOut00);
   tolua_function(tolua_S,"DelWordLeft",tolua_luacode_CodeEdit_DelWordLeft00);
   tolua_function(tolua_S,"DelWordRight",tolua_luacode_CodeEdit_DelWordRight00);
   tolua_function(tolua_S,"LineCut",tolua_luacode_CodeEdit_LineCut00);
   tolua_function(tolua_S,"LineDelete",tolua_luacode_CodeEdit_LineDelete00);
   tolua_function(tolua_S,"LineTranspose",tolua_luacode_CodeEdit_LineTranspose00);
   tolua_function(tolua_S,"LineDuplicate",tolua_luacode_CodeEdit_LineDuplicate00);
   tolua_function(tolua_S,"LowerCase",tolua_luacode_CodeEdit_LowerCase00);
   tolua_function(tolua_S,"UpperCase",tolua_luacode_CodeEdit_UpperCase00);
   tolua_function(tolua_S,"LineScrollDown",tolua_luacode_CodeEdit_LineScrollDown00);
   tolua_function(tolua_S,"LineScrollUp",tolua_luacode_CodeEdit_LineScrollUp00);
   tolua_function(tolua_S,"DeleteBackNotLine",tolua_luacode_CodeEdit_DeleteBackNotLine00);
   tolua_function(tolua_S,"HomeDisplay",tolua_luacode_CodeEdit_HomeDisplay00);
   tolua_function(tolua_S,"HomeDisplayExtend",tolua_luacode_CodeEdit_HomeDisplayExtend00);
   tolua_function(tolua_S,"LineEndDisplay",tolua_luacode_CodeEdit_LineEndDisplay00);
   tolua_function(tolua_S,"LineEndDisplayExtend",tolua_luacode_CodeEdit_LineEndDisplayExtend00);
   tolua_function(tolua_S,"HomeWrap",tolua_luacode_CodeEdit_HomeWrap00);
   tolua_function(tolua_S,"HomeWrapExtend",tolua_luacode_CodeEdit_HomeWrapExtend00);
   tolua_function(tolua_S,"LineEndWrap",tolua_luacode_CodeEdit_LineEndWrap00);
   tolua_function(tolua_S,"LineEndWrapExtend",tolua_luacode_CodeEdit_LineEndWrapExtend00);
   tolua_function(tolua_S,"VCHomeWrap",tolua_luacode_CodeEdit_VCHomeWrap00);
   tolua_function(tolua_S,"VCHomeWrapExtend",tolua_luacode_CodeEdit_VCHomeWrapExtend00);
   tolua_function(tolua_S,"LineCopy",tolua_luacode_CodeEdit_LineCopy00);
   tolua_function(tolua_S,"MoveCaretInsideView",tolua_luacode_CodeEdit_MoveCaretInsideView00);
   tolua_function(tolua_S,"LineLength",tolua_luacode_CodeEdit_LineLength00);
   tolua_function(tolua_S,"BraceHighlight",tolua_luacode_CodeEdit_BraceHighlight00);
   tolua_function(tolua_S,"BraceBadLight",tolua_luacode_CodeEdit_BraceBadLight00);
   tolua_function(tolua_S,"BraceMatch",tolua_luacode_CodeEdit_BraceMatch00);
   tolua_function(tolua_S,"GetViewEOL",tolua_luacode_CodeEdit_GetViewEOL00);
   tolua_function(tolua_S,"SetViewEOL",tolua_luacode_CodeEdit_SetViewEOL00);
   tolua_function(tolua_S,"GetDocPointer",tolua_luacode_CodeEdit_GetDocPointer00);
   tolua_function(tolua_S,"SetDocPointer",tolua_luacode_CodeEdit_SetDocPointer00);
   tolua_function(tolua_S,"SetModEventMask",tolua_luacode_CodeEdit_SetModEventMask00);
   tolua_function(tolua_S,"GetEdgeColumn",tolua_luacode_CodeEdit_GetEdgeColumn00);
   tolua_function(tolua_S,"SetEdgeColumn",tolua_luacode_CodeEdit_SetEdgeColumn00);
   tolua_function(tolua_S,"GetEdgeMode",tolua_luacode_CodeEdit_GetEdgeMode00);
   tolua_function(tolua_S,"SetEdgeMode",tolua_luacode_CodeEdit_SetEdgeMode00);
   tolua_function(tolua_S,"GetEdgeColour",tolua_luacode_CodeEdit_GetEdgeColour00);
   tolua_function(tolua_S,"SetEdgeColour",tolua_luacode_CodeEdit_SetEdgeColour00);
   tolua_function(tolua_S,"SearchAnchor",tolua_luacode_CodeEdit_SearchAnchor00);
   tolua_function(tolua_S,"SearchNext",tolua_luacode_CodeEdit_SearchNext00);
   tolua_function(tolua_S,"SearchPrev",tolua_luacode_CodeEdit_SearchPrev00);
   tolua_function(tolua_S,"LinesOnScreen",tolua_luacode_CodeEdit_LinesOnScreen00);
   tolua_function(tolua_S,"UsePopUp",tolua_luacode_CodeEdit_UsePopUp00);
   tolua_function(tolua_S,"SelectionIsRectangle",tolua_luacode_CodeEdit_SelectionIsRectangle00);
   tolua_function(tolua_S,"SetZoom",tolua_luacode_CodeEdit_SetZoom00);
   tolua_function(tolua_S,"GetZoom",tolua_luacode_CodeEdit_GetZoom00);
   tolua_function(tolua_S,"CreateDocument",tolua_luacode_CodeEdit_CreateDocument00);
   tolua_function(tolua_S,"AddRefDocument",tolua_luacode_CodeEdit_AddRefDocument00);
   tolua_function(tolua_S,"ReleaseDocument",tolua_luacode_CodeEdit_ReleaseDocument00);
   tolua_function(tolua_S,"GetModEventMask",tolua_luacode_CodeEdit_GetModEventMask00);
   tolua_function(tolua_S,"SetSCIFocus",tolua_luacode_CodeEdit_SetSCIFocus00);
   tolua_function(tolua_S,"GetSCIFocus",tolua_luacode_CodeEdit_GetSCIFocus00);
   tolua_function(tolua_S,"SetStatus",tolua_luacode_CodeEdit_SetStatus00);
   tolua_function(tolua_S,"GetStatus",tolua_luacode_CodeEdit_GetStatus00);
   tolua_function(tolua_S,"SetMouseDownCaptures",tolua_luacode_CodeEdit_SetMouseDownCaptures00);
   tolua_function(tolua_S,"GetMouseDownCaptures",tolua_luacode_CodeEdit_GetMouseDownCaptures00);
   tolua_function(tolua_S,"SetCursorType",tolua_luacode_CodeEdit_SetCursorType00);
   tolua_function(tolua_S,"GetCursorType",tolua_luacode_CodeEdit_GetCursorType00);
   tolua_function(tolua_S,"SetControlCharSymbol",tolua_luacode_CodeEdit_SetControlCharSymbol00);
   tolua_function(tolua_S,"GetControlCharSymbol",tolua_luacode_CodeEdit_GetControlCharSymbol00);
   tolua_function(tolua_S,"WordPartLeft",tolua_luacode_CodeEdit_WordPartLeft00);
   tolua_function(tolua_S,"WordPartLeftExtend",tolua_luacode_CodeEdit_WordPartLeftExtend00);
   tolua_function(tolua_S,"WordPartRight",tolua_luacode_CodeEdit_WordPartRight00);
   tolua_function(tolua_S,"WordPartRightExtend",tolua_luacode_CodeEdit_WordPartRightExtend00);
   tolua_function(tolua_S,"SetVisiblePolicy",tolua_luacode_CodeEdit_SetVisiblePolicy00);
   tolua_function(tolua_S,"DelLineLeft",tolua_luacode_CodeEdit_DelLineLeft00);
   tolua_function(tolua_S,"DelLineRight",tolua_luacode_CodeEdit_DelLineRight00);
   tolua_function(tolua_S,"SetXOffset",tolua_luacode_CodeEdit_SetXOffset00);
   tolua_function(tolua_S,"GetXOffset",tolua_luacode_CodeEdit_GetXOffset00);
   tolua_function(tolua_S,"ChooseCaretX",tolua_luacode_CodeEdit_ChooseCaretX00);
   tolua_function(tolua_S,"SetXCaretPolicy",tolua_luacode_CodeEdit_SetXCaretPolicy00);
   tolua_function(tolua_S,"SetYCaretPolicy",tolua_luacode_CodeEdit_SetYCaretPolicy00);
   tolua_function(tolua_S,"SetPrintWrapMode",tolua_luacode_CodeEdit_SetPrintWrapMode00);
   tolua_function(tolua_S,"GetPrintWrapMode",tolua_luacode_CodeEdit_GetPrintWrapMode00);
   tolua_function(tolua_S,"SetHotspotActiveForeground",tolua_luacode_CodeEdit_SetHotspotActiveForeground00);
   tolua_function(tolua_S,"SetHotspotActiveBackground",tolua_luacode_CodeEdit_SetHotspotActiveBackground00);
   tolua_function(tolua_S,"SetHotspotActiveUnderline",tolua_luacode_CodeEdit_SetHotspotActiveUnderline00);
   tolua_function(tolua_S,"SetHotspotSingleLine",tolua_luacode_CodeEdit_SetHotspotSingleLine00);
   tolua_function(tolua_S,"ParaDown",tolua_luacode_CodeEdit_ParaDown00);
   tolua_function(tolua_S,"ParaDownExtend",tolua_luacode_CodeEdit_ParaDownExtend00);
   tolua_function(tolua_S,"ParaUp",tolua_luacode_CodeEdit_ParaUp00);
   tolua_function(tolua_S,"ParaUpExtend",tolua_luacode_CodeEdit_ParaUpExtend00);
   tolua_function(tolua_S,"PositionBefore",tolua_luacode_CodeEdit_PositionBefore00);
   tolua_function(tolua_S,"PositionAfter",tolua_luacode_CodeEdit_PositionAfter00);
   tolua_function(tolua_S,"CopyRange",tolua_luacode_CodeEdit_CopyRange00);
   tolua_function(tolua_S,"CopyText",tolua_luacode_CodeEdit_CopyText00);
   tolua_function(tolua_S,"SetSelectionMode",tolua_luacode_CodeEdit_SetSelectionMode00);
   tolua_function(tolua_S,"GetSelectionMode",tolua_luacode_CodeEdit_GetSelectionMode00);
   tolua_function(tolua_S,"GetLineSelStartPosition",tolua_luacode_CodeEdit_GetLineSelStartPosition00);
   tolua_function(tolua_S,"GetLineSelEndPosition",tolua_luacode_CodeEdit_GetLineSelEndPosition00);
   tolua_function(tolua_S,"LineDownRectExtend",tolua_luacode_CodeEdit_LineDownRectExtend00);
   tolua_function(tolua_S,"LineUpRectExtend",tolua_luacode_CodeEdit_LineUpRectExtend00);
   tolua_function(tolua_S,"CharLeftRectExtend",tolua_luacode_CodeEdit_CharLeftRectExtend00);
   tolua_function(tolua_S,"CharRightRectExtend",tolua_luacode_CodeEdit_CharRightRectExtend00);
   tolua_function(tolua_S,"HomeRectExtend",tolua_luacode_CodeEdit_HomeRectExtend00);
   tolua_function(tolua_S,"VCHomeRectExtend",tolua_luacode_CodeEdit_VCHomeRectExtend00);
   tolua_function(tolua_S,"LineEndRectExtend",tolua_luacode_CodeEdit_LineEndRectExtend00);
   tolua_function(tolua_S,"PageUpRectExtend",tolua_luacode_CodeEdit_PageUpRectExtend00);
   tolua_function(tolua_S,"PageDownRectExtend",tolua_luacode_CodeEdit_PageDownRectExtend00);
   tolua_function(tolua_S,"StutteredPageUp",tolua_luacode_CodeEdit_StutteredPageUp00);
   tolua_function(tolua_S,"StutteredPageUpExtend",tolua_luacode_CodeEdit_StutteredPageUpExtend00);
   tolua_function(tolua_S,"StutteredPageDown",tolua_luacode_CodeEdit_StutteredPageDown00);
   tolua_function(tolua_S,"StutteredPageDownExtend",tolua_luacode_CodeEdit_StutteredPageDownExtend00);
   tolua_function(tolua_S,"WordLeftEnd",tolua_luacode_CodeEdit_WordLeftEnd00);
   tolua_function(tolua_S,"WordLeftEndExtend",tolua_luacode_CodeEdit_WordLeftEndExtend00);
   tolua_function(tolua_S,"WordRightEnd",tolua_luacode_CodeEdit_WordRightEnd00);
   tolua_function(tolua_S,"WordRightEndExtend",tolua_luacode_CodeEdit_WordRightEndExtend00);
   tolua_function(tolua_S,"SetWhitespaceChars",tolua_luacode_CodeEdit_SetWhitespaceChars00);
   tolua_function(tolua_S,"SetCharsDefault",tolua_luacode_CodeEdit_SetCharsDefault00);
   tolua_function(tolua_S,"AutoCompGetCurrent",tolua_luacode_CodeEdit_AutoCompGetCurrent00);
   tolua_function(tolua_S,"Allocate",tolua_luacode_CodeEdit_Allocate00);
   tolua_function(tolua_S,"StartRecord",tolua_luacode_CodeEdit_StartRecord00);
   tolua_function(tolua_S,"StopRecord",tolua_luacode_CodeEdit_StopRecord00);
   tolua_function(tolua_S,"SetLexer",tolua_luacode_CodeEdit_SetLexer01);
   tolua_function(tolua_S,"GetLexer",tolua_luacode_CodeEdit_GetLexer00);
   tolua_function(tolua_S,"Colourise",tolua_luacode_CodeEdit_Colourise00);
   tolua_function(tolua_S,"SetProperty",tolua_luacode_CodeEdit_SetProperty00);
   tolua_function(tolua_S,"GetProperty",tolua_luacode_CodeEdit_GetProperty00);
   tolua_function(tolua_S,"GetPropertyExpanded",tolua_luacode_CodeEdit_GetPropertyExpanded00);
   tolua_function(tolua_S,"GetPropertyInt",tolua_luacode_CodeEdit_GetPropertyInt00);
   tolua_function(tolua_S,"GetStyleBitsNeeded",tolua_luacode_CodeEdit_GetStyleBitsNeeded00);
   tolua_function(tolua_S,"SetKeyWords",tolua_luacode_CodeEdit_SetKeyWords01);
   tolua_function(tolua_S,"SetLexerLanguage",tolua_luacode_CodeEdit_SetLexerLanguage00);
   tolua_function(tolua_S,"GetCurrentLine",tolua_luacode_CodeEdit_GetCurrentLine00);
   tolua_function(tolua_S,"StyleSetSpec",tolua_luacode_CodeEdit_StyleSetSpec00);
   tolua_function(tolua_S,"StyleSetFont",tolua_luacode_CodeEdit_StyleSetFont00);
   tolua_function(tolua_S,"StyleSetFontAttr",tolua_luacode_CodeEdit_StyleSetFontAttr00);
   tolua_function(tolua_S,"StyleSetCharacterSet",tolua_luacode_CodeEdit_StyleSetCharacterSet00);
   tolua_function(tolua_S,"StyleSetFontEncoding",tolua_luacode_CodeEdit_StyleSetFontEncoding00);
   tolua_function(tolua_S,"CmdKeyExecute",tolua_luacode_CodeEdit_CmdKeyExecute00);
   tolua_function(tolua_S,"SetMargins",tolua_luacode_CodeEdit_SetMargins00);
   tolua_function(tolua_S,"GetSelection",tolua_luacode_CodeEdit_GetSelection00);
   tolua_function(tolua_S,"PointFromPosition",tolua_luacode_CodeEdit_PointFromPosition00);
   tolua_function(tolua_S,"ScrollToLine",tolua_luacode_CodeEdit_ScrollToLine00);
   tolua_function(tolua_S,"ScrollToColumn",tolua_luacode_CodeEdit_ScrollToColumn00);
   tolua_function(tolua_S,"SendMsg",tolua_luacode_CodeEdit_SendMsg00);
   tolua_function(tolua_S,"SetVScrollBar",tolua_luacode_CodeEdit_SetVScrollBar00);
   tolua_function(tolua_S,"SetHScrollBar",tolua_luacode_CodeEdit_SetHScrollBar00);
   tolua_function(tolua_S,"GetLastKeydownProcessed",tolua_luacode_CodeEdit_GetLastKeydownProcessed00);
   tolua_function(tolua_S,"SetLastKeydownProcessed",tolua_luacode_CodeEdit_SetLastKeydownProcessed00);
   tolua_function(tolua_S,"SaveFile",tolua_luacode_CodeEdit_SaveFile00);
   tolua_function(tolua_S,"LoadFile",tolua_luacode_CodeEdit_LoadFile00);
   tolua_function(tolua_S,"SetUseAntiAliasing",tolua_luacode_CodeEdit_SetUseAntiAliasing00);
   tolua_function(tolua_S,"GetUseAntiAliasing",tolua_luacode_CodeEdit_GetUseAntiAliasing00);
   tolua_function(tolua_S,"AddTextRaw",tolua_luacode_CodeEdit_AddTextRaw00);
   tolua_function(tolua_S,"InsertTextRaw",tolua_luacode_CodeEdit_InsertTextRaw00);
   tolua_function(tolua_S,"GetLineRaw",tolua_luacode_CodeEdit_GetLineRaw00);
   tolua_function(tolua_S,"GetSelectedTextRaw",tolua_luacode_CodeEdit_GetSelectedTextRaw00);
   tolua_function(tolua_S,"GetTextRangeRaw",tolua_luacode_CodeEdit_GetTextRangeRaw00);
   tolua_function(tolua_S,"SetTextRaw",tolua_luacode_CodeEdit_SetTextRaw00);
   tolua_function(tolua_S,"GetTextRaw",tolua_luacode_CodeEdit_GetTextRaw00);
   tolua_function(tolua_S,"AppendTextRaw",tolua_luacode_CodeEdit_AppendTextRaw00);
   tolua_function(tolua_S,"CursorUpOrDown",tolua_luacode_CodeEdit_CursorUpOrDown00);
   tolua_function(tolua_S,"GetCurLineRaw",tolua_luacode_CodeEdit_GetCurLineRaw00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"MainFrame","MainFrame","",NULL);
  tolua_beginmodule(tolua_S,"MainFrame");
   tolua_function(tolua_S,"selectPage",tolua_luacode_MainFrame_selectPage00);
   tolua_function(tolua_S,"ClearCurrentLineMarker",tolua_luacode_MainFrame_ClearCurrentLineMarker00);
   tolua_function(tolua_S,"ClearBreakLineMarker",tolua_luacode_MainFrame_ClearBreakLineMarker00);
   tolua_function(tolua_S,"GotoNewLine",tolua_luacode_MainFrame_GotoNewLine00);
   tolua_function(tolua_S,"GotoOldLine",tolua_luacode_MainFrame_GotoOldLine00);
   tolua_function(tolua_S,"CloseAllFiles",tolua_luacode_MainFrame_CloseAllFiles00);
   tolua_function(tolua_S,"SaveFile",tolua_luacode_MainFrame_SaveFile00);
   tolua_function(tolua_S,"CloseDocument",tolua_luacode_MainFrame_CloseDocument00);
   tolua_function(tolua_S,"SaveAllFiles",tolua_luacode_MainFrame_SaveAllFiles00);
   tolua_function(tolua_S,"UpdateEditorOptions",tolua_luacode_MainFrame_UpdateEditorOptions00);
   tolua_function(tolua_S,"FindText",tolua_luacode_MainFrame_FindText00);
   tolua_function(tolua_S,"FindNext",tolua_luacode_MainFrame_FindNext00);
   tolua_function(tolua_S,"SetDefaultHotKeys",tolua_luacode_MainFrame_SetDefaultHotKeys00);
   tolua_function(tolua_S,"UpdateStatusBarLineAndColumn",tolua_luacode_MainFrame_UpdateStatusBarLineAndColumn00);
   tolua_function(tolua_S,"CheckReload",tolua_luacode_MainFrame_CheckReload00);
   tolua_function(tolua_S,"CheckReload",tolua_luacode_MainFrame_CheckReload01);
   tolua_function(tolua_S,"ReloadFile",tolua_luacode_MainFrame_ReloadFile00);
   tolua_function(tolua_S,"loadFile",tolua_luacode_MainFrame_loadFile00);
   tolua_function(tolua_S,"GetSelectedPage",tolua_luacode_MainFrame_GetSelectedPage00);
   tolua_function(tolua_S,"RemoveAllLocalBreakpoints",tolua_luacode_MainFrame_RemoveAllLocalBreakpoints00);
   tolua_function(tolua_S,"InitializeSourceControl",tolua_luacode_MainFrame_InitializeSourceControl00);
   tolua_function(tolua_S,"UpdateProjectFileStatus",tolua_luacode_MainFrame_UpdateProjectFileStatus00);
   tolua_function(tolua_S,"UpdateProjectFileStatus",tolua_luacode_MainFrame_UpdateProjectFileStatus01);
   tolua_function(tolua_S,"GetProjectSelectedFileNames",tolua_luacode_MainFrame_GetProjectSelectedFileNames00);
   tolua_function(tolua_S,"GetNotebookTabSelectedFileNames",tolua_luacode_MainFrame_GetNotebookTabSelectedFileNames00);
   tolua_function(tolua_S,"SetMode",tolua_luacode_MainFrame_SetMode00);
   tolua_function(tolua_S,"GetAppDataDirectory",tolua_luacode_MainFrame_GetAppDataDirectory00);
   tolua_function(tolua_S,"ShowProjectSettingsDialog",tolua_luacode_MainFrame_ShowProjectSettingsDialog00);
   tolua_function(tolua_S,"UpdateDocumentReadOnlyStatus",tolua_luacode_MainFrame_UpdateDocumentReadOnlyStatus00);
   tolua_function(tolua_S,"UpdateCallback",tolua_luacode_MainFrame_UpdateCallback00);
   tolua_function(tolua_S,"HandleUpdate",tolua_luacode_MainFrame_HandleUpdate00);
   tolua_function(tolua_S,"UpdateSyntaxColoring",tolua_luacode_MainFrame_UpdateSyntaxColoring00);
   tolua_function(tolua_S,"PreNotebookPageClose",tolua_luacode_MainFrame_PreNotebookPageClose00);
   tolua_function(tolua_S,"UpdateStartUpPlacement",tolua_luacode_MainFrame_UpdateStartUpPlacement00);
   tolua_function(tolua_S,"BringToFront",tolua_luacode_MainFrame_BringToFront00);
   tolua_function(tolua_S,"GetFileMatchingSource",tolua_luacode_MainFrame_GetFileMatchingSource00);
   tolua_function(tolua_S,"UpdateForNewFile",tolua_luacode_MainFrame_UpdateForNewFile00);
   tolua_function(tolua_S,"UpdateLineMappingIfNecessary",tolua_luacode_MainFrame_UpdateLineMappingIfNecessary00);
   tolua_function(tolua_S,"SetFileStatus",tolua_luacode_MainFrame_SetFileStatus00);
   tolua_function(tolua_S,"UpdateScriptLineMappingFromFile",tolua_luacode_MainFrame_UpdateScriptLineMappingFromFile00);
   tolua_function(tolua_S,"SetMostRecentlyUsedPage",tolua_luacode_MainFrame_SetMostRecentlyUsedPage00);
   tolua_function(tolua_S,"RemovePageFromTabOrder",tolua_luacode_MainFrame_RemovePageFromTabOrder00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_luacode (lua_State* tolua_S) {
 return tolua_luacode_open(tolua_S);
};
#endif


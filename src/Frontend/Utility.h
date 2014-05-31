#ifndef _luacode_unility_h_
#define _luacode_unility_h_

#ifdef __cplusplus
extern "C" {
#endif

extern int isseq(const char * p, const char * c);
extern int isseq_ignorecase(const char * p, const char * c);
extern void switch_console();
extern void color_print(const char * s, int color);

#ifdef __cplusplus
} 
#endif

#endif
#include "Utility.h"
#include <Windows.h>
#include <stdio.h>
#include <fcntl.h>

#define MAX_LEN 16 * 1024

int isseq_ignorecase(const char * p, const char * c)
{
	int i = 0;
	int j = 0;
	while (c[i]){
		if (!p[j]){
			return 0;
		}
		char tc = c[i], tp = p[j];
		if (c[i] >= 'A' && c[i] <= 'Z'){
			tc = c[i] + 32;
		}
		if (p[j] >= 'A' && p[j] <= 'Z'){
			tp = p[j] + 32;
		}

		if (tp == tc){
			++i;
			++j;
		} else{
			++j;
		}
	}
	return 1;
}

extern int isseq(const char * p, const char * c)
{
	int i = 0;
	int j = 0;
	while (c[i]){
		if (!p[j]){
			return 0;
		}
		if (p[j] == c[i]){
			++i;
			++j;
		} else{
			++j;
		}
	}
	return 1;
}

extern void switch_console()
{
	static int isConsoleOpened = 0;

	if (isConsoleOpened){
		FreeConsole();
	} else{
		AllocConsole();
		CreateConsoleScreenBuffer(GENERIC_WRITE | GENERIC_READ, 0, 0, CONSOLE_TEXTMODE_BUFFER, 0);

		HANDLE input = GetStdHandle(STD_INPUT_HANDLE);
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		HANDLE eoutput = GetStdHandle(STD_ERROR_HANDLE);

		FILE *fi = _fdopen(_open_osfhandle((long)input, _O_TEXT), "r");  *stdin = *fi;  setvbuf(stdin, NULL, _IONBF, 0);
		FILE *fo = _fdopen(_open_osfhandle((long)output, _O_TEXT), "w"); *stdout = *fo; setvbuf(stdout, NULL, _IONBF, 0);
		FILE *fe = _fdopen(_open_osfhandle((long)eoutput, _O_TEXT), "w"); *stderr = *fe; setvbuf(stderr, NULL, _IONBF, 0);

		SetConsoleMode(input, ENABLE_ECHO_INPUT | ENABLE_PROCESSED_INPUT
			| ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT | ENABLE_PROCESSED_OUTPUT |
			ENABLE_WRAP_AT_EOL_OUTPUT | ENABLE_LINE_INPUT | 0x0004 | 0x0040);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	}
	isConsoleOpened = !isConsoleOpened;
}

void utf8log(const char * pszFormat, ...)
{
	char szBuf[MAX_LEN + 1];

	va_list ap;
	va_start(ap, pszFormat);
	vsnprintf_s(szBuf, MAX_LEN, MAX_LEN, pszFormat, ap);
	va_end(ap);

	WCHAR wszBuf[MAX_LEN] = { 0 };
	MultiByteToWideChar(CP_UTF8, 0, szBuf, -1, wszBuf, sizeof(wszBuf));
	OutputDebugStringW(wszBuf);
	OutputDebugStringA("\n");

	WideCharToMultiByte(CP_ACP, 0, wszBuf, sizeof(wszBuf), szBuf, sizeof(szBuf), NULL, FALSE);
	printf("%s\n", szBuf);
}


typedef struct _color3B
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
} color3B;

static color3B int2color3(unsigned int color)
{
	color3B c;
	int a = (color >> 24);
	c.r = (color >> 16) & 0x000000ff;
	c.g = (color >> 8) & 0x000000ff;
	c.b = color & 0x000000ff;
	return c;
}

extern void color_print(const char * s, int color_)
{
	color3B color = int2color3(color_);
	int c = FOREGROUND_INTENSITY;
	if (color.r){
		c |= FOREGROUND_RED;
	}
	if (color.g){
		c |= FOREGROUND_GREEN;
	}
	if (color.b){
		c |= FOREGROUND_BLUE;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	utf8log(s);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}








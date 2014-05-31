#include <stdio.h>
#include <memory.h>
#include <Windows.h>
// （1）换行，入栈；
// （2）换行，出栈；
// function ... ) （1）
// end （2）
// if ... then （1）
// else （1）
// end （2）
// for ... do （1）

typedef enum State {
	Unknow = 0,	 //
	Punct = 1,	//标点
	Identifier = 2, //字符串
	Digit = 3,	//数字
}State;

typedef struct FormatState {
	const char * buf;
	char * varybuf;
	int curpos;
	int lastpos;
	int curlevel;
	int len;
	char ch;
	State st;
	//out
	char * outbuf;

}FormatState;
typedef struct FormatStateOut {
	char * outbuf;
	int curpos;
}FormatStateOut;

const char * next(FormatState * fs){
	//分隔符，进行分割
	fs->varybuf[fs->curpos] = 0;
	char * s = &(fs->varybuf[fs->lastpos]);
	++fs->curpos;
	fs->lastpos = fs->curpos;
	return s;
}

const char * getToken(FormatState * fs){
	//一次读取一个字符串
	while (fs->curpos < fs->len){
		unsigned char c = fs->buf[fs->curpos];
		fs->ch = 0;
		//是否是空白
		if (c != ' ' && c != '\t' && c != '\n' && c != '\r'){
			++fs->curpos;
		}
		else{
			if (c == '\n'){
				fs->ch = '\n';
			}
			char * s;
			if (c == '_' || isdigit(c) || isalpha(c)){
				if (fs->st == Identifier){
					++fs->curpos;
					continue;
				}
				else{
					s = next(fs);
					fs->st = Identifier;
				}
			}
			else{
				if (fs->st == Punct){
					++fs->curpos;
					continue;
				}
				else{
					s = next(fs);
					fs->st = Punct;
				}
			}
			
			//截取token
			return s;
		}
	}
	return 0;
}

const char * gettoken(FormatState * fs){
	//一次读取一个字符串
	while (fs->curpos < fs->len){
		unsigned char c = fs->buf[fs->curpos];
		//是否是空白
		if (c == '\n'){
			fs->ch = '\n';
		}
		char * s;
		if (c == '_' || isdigit(c) || isalpha(c)){
			if (fs->st == Identifier){
				++fs->curpos;
				continue;
			}
			else{
				s = next(fs);
				fs->st = Identifier;
			}
		}
		else{
			if (fs->st == Punct){
				++fs->curpos;
				continue;
			}
			else{
				s = next(fs);
				fs->st = Punct;
			}
		}

		//截取token
		return s;
	}
	return 0;
}

void writeToken(FormatStateOut * fso, const char * token){
	printf(token);
	char * s = fso->outbuf+fso->curpos;
	while (*s++ = *token++){
		++fso->curpos;
	}
}

int beginToken(const char * token, const char * s){
	if (token[0] == 0){
		return 0;
	}
	while (*token && *s && !(*token - *s)){
		*token++;
		*s++;
	}
	return !*s || !*token;
}

#define ISTOKEN(s) beginToken(token, s)

char * format(const char * buf, int * len){
	FormatState * fs = malloc(sizeof(FormatState));
	FormatStateOut * fso = malloc(sizeof(FormatStateOut));
	memset(fs, 0, sizeof(FormatState));
	memset(fso, 0, sizeof(FormatStateOut));
	fs->buf = buf;
	fs->len = *len;
	fs->varybuf = malloc(*len);
	memcpy(fs->varybuf, buf, *len);

	fso->outbuf = malloc(*len * 2);
	memset(fso->outbuf, 0, *len * 2);
	//一次读取一个字符
	while (1){
		const char * token = getToken(fs);
		if (!token){
			break;
		}

		if (token[0] != 0){
			writeToken(fso, token);
		}
		if (fs->ch == '\r'){
			continue;
		}else if (fs->ch == '\n'){
			writeToken(fso, "\n");
			for (int i = 0; i < fs->curlevel; ++i){
				writeToken(fso, "\t");
			}
		}
		else{
			if (token[0] != 0) {
				writeToken(fso, " ");
			}
			if (ISTOKEN("function") || ISTOKEN("then") || ISTOKEN("do")){
				++fs->curlevel;
			}
			else if (ISTOKEN("end")){
				--fs->curlevel;
			}
		}
		getch();
	}
	*len = fso->curpos;
	return fso->outbuf;
}

void luaformat()
{
	const char * path = "test.lua";
	char * buf;
	char * out;
	FILE * fp = fopen(path, "rb");
	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	rewind(fp);
	buf = malloc(size);
	fread(buf, 1, size, fp);
	fclose(fp);
	//parse
	out = format(buf, &size);
	//write to file
	fp = fopen("test2.lua", "wb");
	fwrite(out, 1, size, fp);
	fclose(fp);
}

int main()
{
	int t = GetTickCount();
	for (int i = 0; i < 100; ++i){
		luaformat();
	}
	printf("%d\n", GetTickCount() - t);
	getch();
	return 0;
}







#include <stdio.h>
#include <memory.h>
#include <assert.h>
#include <Windows.h>
// （1）换行，入栈；
// （2）换行，出栈；
// function ... ) （1）
// end （2）
// if ... then （1）
// else （1）
// end （2）
// for ... do （1）

typedef enum FormatType {
	Unknow = 0,	 //
	Punct,	//标点
	Identifier, //字符串
	Digit,	//数字
	Blank,	//空白
	Comment, //注释
	Newline, //新行
	String, //字符串
}FormatType;

typedef struct string{
	char * s;
	int len;
	int type;
}string;

typedef struct FormatState {
	const char * buf;
	char * varybuf;
	int curpos;
	int lastpos;
	int level;
	int len;
	FormatType st;
	//
	string curstr;
	string laststr;

}FormatState;
typedef struct FormatStateOut {
	char * outbuf;
	int curpos;
}FormatStateOut;

const string * split(FormatState * fs, FormatType type){
	//分隔符，进行分割
	char * s = &(fs->varybuf[fs->lastpos]);
	fs->curstr.s = s;
	fs->curstr.len = fs->curpos - fs->lastpos + 1;
	fs->lastpos = fs->curpos+1;
	fs->curstr.type = type;
	return &(fs->curstr);
}

#define current() fs->buf[fs->curpos]
#define next() fs->buf[++fs->curpos]
#define back() fs->buf[--fs->curpos]
#define peek() fs->buf[fs->curpos+1]

const string * readidentifier(FormatState * fs)
{
	while (fs->curpos < fs->len) {
		unsigned char c = peek();
		if (c == '_' || isdigit(c) || isalpha(c)){
			next();
		}else{
			break;
		}
	}
	return split(fs, Identifier);
}

const string * readdigit(FormatState * fs){
	while (fs->curpos < fs->len) {
		unsigned char c = peek();
		if (isdigit(c) || c == '.'){
			next();
		}else{
			break;
		}
	}
	return split(fs, Digit);
}

const string * readstring(FormatState * fs){
	unsigned char c = current();
	if (c == '\"') {
		while (fs->curpos < fs->len) {
			c = next();
			if (c == '\"') {
				break;
			}
		}
	} else {
		//[[
		while (fs->curpos < fs->len) {
			c = next();
			if (c == ']') {
				if (peek() == ']') {
					break;
				}
			}
		}
	}
	
	return split(fs, String);
}

const string * readblank(FormatState * fs){
	while (fs->curpos < fs->len) {
		unsigned char c = peek();
		if (c == ' ' || c == '\t') {
			next();
		} else {
			break;
		}
	}
	return split(fs, Blank);
}

const string * readnewline(FormatState * fs){
	return split(fs, Newline);
}

const string * readpunct(FormatState * fs){
	while (fs->curpos < fs->len) {
		unsigned char cr = current();
		unsigned char c = peek();
		if (c == '=') {
			if (cr == '<' || c == '>' || c == '=') {
				next();
			} else {
				break;
			}
		} else {
			break;
		}
		
	}
	return split(fs, Punct);
}

const string * readcomment(FormatState * fs){
	int isline = -1;
	while (fs->curpos < fs->len) {
		if (isline == 1) {
			unsigned char c = next();
			if (c == '\n') {
				back();
				break;
			} 
		} else if (isline == 0) {
			unsigned char c = next();
			if (c == ']') {
				if (peek() == ']') {
					next();
					break;
				} 
			} 
		} else {
			unsigned char c = peek();
			if (c == '[') {
				next();
				c = peek();
				if (c == '[') { //block
					isline = 0;
				} else { //line
					isline = 1;
				}
			} else { //line
				isline = 1;
			}
		}
	}
	return split(fs, Comment);
}

const string * lex(FormatState * fs){
	//一次读取一个字符串
	while (fs->curpos+1 < fs->len) {
		unsigned char c = next();
		//是否是空白
		if (c == '_' || isalpha(c)){ //identifier
			return readidentifier(fs);
		}
		else if (isdigit(c)){	//数字
			return readdigit(fs);
		}
		else if (c == '-'){
			if (peek() == '-'){ //注释
				next();
				return readcomment(fs);
			}
			return readpunct(fs);
		} else if (c == '\"') {
			return readstring(fs);
		} else if (c == '[') {
			if (peek() == '[') {
				next();
				return readstring(fs);
			}
		}
		else if (ispunct(c)){ //标点
			return readpunct(fs);
		}
		else if (c == ' ' || c == '\t'){
			return readblank(fs);
		} else if (c == '\r' || c == '\n') {
			return readnewline(fs);
		}
		else {
			assert(0);
		}
	}
	return 0;
}

void backToken(FormatStateOut * fso, int len){
	fso->curpos -= len;
}

void writeToken(FormatStateOut * fso, const char * token, int len){
	char * s = fso->outbuf+fso->curpos;
	char * c = s;
	while (len-- && (*s++ = *token++)) {
		++fso->curpos;
	}
	//printf(c);
}

int isToken(const string * token, const char * s){
	int i = 0;
	for (; (i < token->len) && *s; ) {
		if (token->s[i] - *s++) {
			return 0;
		}
		++i;
	}
	return (*s == 0) && (i == token->len);
}

#define ISTOKEN(s) isToken(token, s)

char * format(const char * buf, int * len){
	FormatState * fs = malloc(sizeof(FormatState));
	FormatStateOut * fso = malloc(sizeof(FormatStateOut));
	memset(fs, 0, sizeof(FormatState));
	memset(fso, 0, sizeof(FormatStateOut));
	fs->buf = buf;
	fs->curpos = -1;
	fs->len = *len;
	fs->varybuf = malloc(*len);
	memcpy(fs->varybuf, buf, *len);

	fso->outbuf = malloc(*len * 2);
	memset(fso->outbuf, 0, *len * 2);
	//一次读取一个字符
	while (1){
		const string * token = lex(fs);
		if (!token){
			break;
		}

		if (token->len == 0){
			continue;
		}

		if (token->type == Newline ){
			if (token->s[0] == '\n') {
				writeToken(fso, "\n", 1);
				for (int i = 0; i < fs->level; ++i) {
					writeToken(fso, "\t", 1);
				}
			}
		} else if (token->type == Blank) {
			//
		} else if (token->type == Punct) {
			if (ISTOKEN("(")) {
				++fs->level;
				writeToken(fso, token->s, token->len);
			} else if (ISTOKEN(")")) {
				--fs->level;
				writeToken(fso, token->s, token->len);
			}else if (ISTOKEN(".") || ISTOKEN(":") || ISTOKEN("{") || ISTOKEN("}") || ISTOKEN("[") || ISTOKEN("]") 
				|| ISTOKEN("#") || ISTOKEN(",")) {
				writeToken(fso, token->s, token->len);
			} else {
				writeToken(fso, " ", 1);
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
			}
		} else {
			if (ISTOKEN("local") || ISTOKEN("if") || ISTOKEN("for") || ISTOKEN("while")) {
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
			} else if (ISTOKEN("function")) {
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
				++fs->level;
			} else if (ISTOKEN("then") || ISTOKEN("do")) {
				writeToken(fso, " ", 1);
				writeToken(fso, token->s, token->len);
				++fs->level;
			} else if (ISTOKEN("end")) {
				backToken(fso, 1);
				writeToken(fso, token->s, token->len);
				--fs->level;
			} else if (ISTOKEN("else")) {
				backToken(fso, 1);
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
			} else if (ISTOKEN("elseif")) {
				backToken(fso, 1);
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
				--fs->level;
			} else if (ISTOKEN("and") || ISTOKEN("or") ) {
				writeToken(fso, " ", 1);
				writeToken(fso, token->s, token->len);
				writeToken(fso, " ", 1);
			} else if (ISTOKEN("function")) {

			} else if (ISTOKEN("function")) {

			} else if (ISTOKEN("function")) {

			} else {
				writeToken(fso, token->s, token->len);
			}
		}
		//getch();
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
	if (!fp) {
		return;
	}
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







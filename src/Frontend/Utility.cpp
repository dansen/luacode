#include "Utility.h"

bool isseq_ignorecase(const char * p, const char * c)
{
	int i = 0;
	int j = 0;
	while (c[i]){
		if (!p[j]){
			return false;
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
	return true;
}

extern bool isseq(const char * p, const char * c)
{
	int i = 0;
	int j = 0;
	while (c[i]){
		if (!p[j]){
			return false;
		}
		if (p[j] == c[i]){
			++i;
			++j;
		} else{
			++j;
		}
	}
	return true;
}








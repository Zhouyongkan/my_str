#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcat(char* dst, const char* src)
{
	assert(dst!=NULL);
	assert(src!= NULL);
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *src++);
	return ret;
}

int main()
{
	char* arr = "world";
	char p[15] = "change";
	my_strcat(p, arr);
	printf("%s\n", p);
	return 0;
}
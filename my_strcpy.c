#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dst, const char* src)
{
	assert(dst);
	assert(src);
	char* ret = dst;
	while (*dst++ = *src++);
	return ret;
}

int main()
{
	char* arr = "Hello";
	char p[10];
	my_strcpy(p, arr);
	printf("%s\n", p);
	return 0;
}
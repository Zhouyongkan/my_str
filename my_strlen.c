#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strlen(const char *src)
{
	assert(src);
	const char *end = src;
	while (*end)
	{
		++end;
	}
	return end - src;
}

int main()
{
	char *arr = "Hello";
	printf("%d\n", my_strlen(arr));
	return 0;
}


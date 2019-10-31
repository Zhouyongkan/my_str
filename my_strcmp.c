#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* dst, const char* src)
{
	assert(dst != NULL);
	assert(src != NULL);
	while (*dst == *src)
	{
		if (*dst == '\0')
		{
			return 0;
		}
		dst++;
		src++;
	}
	if (*dst > *src)
		return 1;
	else
		return -1;
}

int main()
{
	char* arr1 = "world";
	char arr2[] = "worad";
	int ret = my_strcmp(arr1, arr2);
	printf("%d\n", ret);
	return 0;
}
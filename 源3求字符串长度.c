#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	int ret = my_strlen("abc");
	printf("%d", ret);
	return 0;
}

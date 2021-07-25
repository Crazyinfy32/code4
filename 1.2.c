#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "hello world";
	memset(arr1, '*', 5);
	printf("%s\n", arr1);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "frisbee";
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 80;
	int b = 100;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
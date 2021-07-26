#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 60;
	int b = 90;
	Swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
	/*int a = 80;
	int b = 100;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
	return 0;*/
}
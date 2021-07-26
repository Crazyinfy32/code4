#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	scanf("%d", &i);
		for (j = 2; j <i-1; j++)
		{
			if (i % j == 0)
				printf("不是素数");
			else
				printf("是素数");
			return 0;
		}

	return 0;
}

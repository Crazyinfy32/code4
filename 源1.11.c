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
				printf("��������");
			else
				printf("������");
			return 0;
		}

	return 0;
}

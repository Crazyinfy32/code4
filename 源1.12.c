#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			
		
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
		
	}
	
    
	printf("\ncount=%d\n", count);
	return 0;
}
/*scanf("%d", &i);
		for (j = 2; j <i-1; j++)
		{
			if (i % j == 0)
				printf("不是素数");
			else
				printf("是素数");
			return 0;
		}*/
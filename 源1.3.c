#include<stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("ÇëÊäÈëÃÜÂë\n");
	scanf_s("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("ÇëÊäÈëY/N");
	ret = getchar();
	if (ret == 'y')
	{
		printf("»¶Ó­");
	}
	else
	{
		printf("´íÎó");

	}
	return 0;
}
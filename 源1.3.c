#include<stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("����������\n");
	scanf_s("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("������Y/N");
	ret = getchar();
	if (ret == 'y')
	{
		printf("��ӭ");
	}
	else
	{
		printf("����");

	}
	return 0;
}
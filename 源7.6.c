#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Digit_sum(n)//��һ��������ÿһλ���Ȼ�������
{
	if (n > 9)
	{
		return Digit_sum(n / 10) + n % 10;
	}
	else
		return n;
}
int main()
{
	int n = 1234;
	int ret = Digit_sum(n);
	printf("%d", ret);
	return 0;
}
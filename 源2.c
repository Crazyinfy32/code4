#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int num)
{
	if (num % 4 == 0 && num % 100 != 0 || num % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d ", year);
		
	}
	return 0;
}
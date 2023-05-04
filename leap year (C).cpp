#include<stdio.h>
int main()
{
	int year;
	printf("enter a year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("year is leap ");
	}
	else
	{
		printf("not a leap year");
	}
}

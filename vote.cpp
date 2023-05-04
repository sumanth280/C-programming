#include<stdio.h>
int main()
{
	int i,age,num;
	printf("enter your age:");
	scanf("%d",&age);
	if(age<0)
	{
		printf("invalid input");
	}
	else if(age>18)
	{
		printf("you can vote");
	}
	else if(age>0 && age<18)
	{
		printf("you cant vote");
	}
	
}

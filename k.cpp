#include<stdio.h>
int main()
{
	int i,num,n,fact=1;
	printf("enter an integer");
	scanf("%d",&num);
	if(n<0)
	printf("error.negative values for factorial doesnt exist :");
	else
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("the factorial of %d is %d",num,fact);
	}
}

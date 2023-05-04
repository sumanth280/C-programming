#include<stdio.h>
int main()
{
	int num,i,rem,sum=0;
	printf("enter a positive integer");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("the sum of digits is %d",sum);
}
	

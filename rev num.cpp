#include<stdio.h>
int main()
{
	int i,j,rev_num,num,n,remainder;
	printf("enter a number to be reversed :");
	scanf("%d",&n);
	for(;n>0;)
	{
		remainder=num%10;
		rev_num=rev_num*10+remainder;
		num=num/10;
	}
	printf("the reversed of %d is %d",rev_num,num);
	
}

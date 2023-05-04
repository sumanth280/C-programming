#include<stdio.h>
int fib(int n)
{
	if(n==0)
	return(0);
	if(n==1)
	return(1);
	else
	return(fib(n-1)+fib(n-2));
}
int main()
{
	int n;
	printf("enter the numbers ");
	scanf("%d",&n);
	printf("fib series %d ",fib(n));
}

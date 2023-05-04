#include<stdio.h>
int main()
{
	int n,sum=0,r,t;
	printf("enter a number ");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=t;
	if(n==sum)
	printf("it is a palindrome");
	else
	printf("not a polindrome");
	return 0;
}

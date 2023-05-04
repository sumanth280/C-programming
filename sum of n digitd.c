#include<stdio.h>
int main()
{
	int n,sum=0,r,m;
	printf("enter the number of digits:");
	scanf("%d",&m);
	printf("enter the digits:");
	scanf("%d",&n);
	if(m==n)
	{
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digits%d:",sum);
   }
   else
   {
   	printf("enter valid ans");
   }
	return 0;
}

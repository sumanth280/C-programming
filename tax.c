#include<stdio.h>
int main()
{
	int n,tax;
	printf("enter the income:");
	scanf("%d",&n);
	if(n>0&&n<=150000)
	{
		printf("no tax");
	}
	if(n>150000&&n<=300000)
	{
		tax=n*0.1;
    	printf("%d is the tax for %d",tax,n);
   }
   if(n>300001&&n<=500000)
   {
   	tax=n*0.2;
   	printf("%d is the tax for %d",tax,n);
   }
   if(n>500001)
   {
   	tax=n*0.3;
   	printf("%d is the tax for %d",tax,n);
   }
   return 0;
}

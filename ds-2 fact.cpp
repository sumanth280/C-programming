#include<stdio.h>
int main()
{
	int fact=1,i,a;
	printf("enter the number:");
	scanf("%d",&a);
   for(i=1;i<=a;i--)
   {
   	fact=fact*i;
   }
   printf("the factorial of given number = %d",fact);
}

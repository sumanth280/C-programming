#include<stdio.h>
int main()
{
	int n,r;
	printf("enter a number:");
	scanf("%d",&n);
	   r=n%2;
	   if(n<0)
	   {
	       printf("negitive number is not defined");
	   }
	   if(n==1)
	   {
	       printf("neither prime nor composite");
	   }
	   if(n==0)
	   {
	       printf("enter a valid number");
	   }
	   if(n!=0)
	   {
	       if(r==1)
	    {
	        printf("prime number%d",n);
	    }
	
	else
	{
	    printf("composite number%d",n);
	}
	   }
	   
	return 0;
}

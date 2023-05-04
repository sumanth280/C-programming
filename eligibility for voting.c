#include<stdio.h>
int main()
{
	char n;
	
	printf("enter your age");
	scanf("%d",&n);
	
	if(n>=18)
	{
	  printf("you are eligible");
    }
	 else
	 {
	   printf("you are eligible to vote after %d years",18-n);
	 }
	 return 0;
}

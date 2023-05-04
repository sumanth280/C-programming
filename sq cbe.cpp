#include<stdio.h>
int main()
{
	float i,s,c,n;
	printf("enter an integer:");
	scanf("%f",&n);
	if(n<0)
	{
		printf("invalid input");
	}
	else
	{
	s=n*n;
	c=s*n;
	printf("square =%.2f\n cube =%.2f",s,c);
    } 
}

#include<stdio.h>
int main()
{
	int n,i=0,a[10];
	printf("enter the number to convert");
	scanf("%d",&n);
 
	if(n>0)
	{
		for(i=0;n>0;i++)
		{
			a[i]=n%2;
			n=n/2;
		}
	
	printf("binary number");
	for(i=i-1;i>=0;i--)
	
		printf("%d",a[i]);
	
 
 }
	
 else
	{
		printf("decimal value is 0");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:\n");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
	printf("%d is largest number",a);
	} 
	if (b>a) 
	{
	printf("%d is largest number",b);
	}	
	return 0;
	
}

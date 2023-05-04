#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char a[100],b[100];
	printf("enter the string:");
	scanf("%s",&a);
	
	printf("re enter the string:");
	scanf("%s",&b);
	
	value=strcmp(a,b);
	if(value==0)
	{
		printf("valid");
	}
	else
	{
		printf("invalid");
	}
	return 0;
}

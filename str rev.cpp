#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	printf("enter a string to be reversed:");
	scanf("%s",&str);
	printf("after the reverse of a string:%s",strrev(str));
	return 0;
}

#include<stdio.h>
int main()
{
	int a=1,b=0,c,n,i;
	printf("enter the size of the series:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
	printf("%d\t",a);
	c=a-b;
	a=b;
	b=c;
}
return 0;
}

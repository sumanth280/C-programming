#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter number of numbers:");
	scanf("%d",&m);
	if(n>0&&m>0)
	{
		for(i=1;i<=m;i++)
		{
			printf("%dx%d=%d\n",n,i,n*i);
		}
    }
	else
		printf("invalid");
	
}

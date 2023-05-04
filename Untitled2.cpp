#include<stdio.h>
int main()
{
	int n,m,i;
	printf("enter no of numbers:");
	scanf("%d",&n);
	printf("enter the number:\n");
	scanf("%d",&m);
	if(n>0&&m>0)
	{
		for(i=1;i<m;i++)
		{
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
}

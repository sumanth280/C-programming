#include<stdio.h>
main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==1&&j<=n)||(i==n&&j<=n)||(j==1&&i<n)||(j==n&&i<=n))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

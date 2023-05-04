#include<stdio.h>
int main()
{
	int row,i,j;
	printf("enter no of rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=2*(row-i);j++)
		{
			printf(" ");
		}
		for(j=i;j>1;j--)
		{
			printf("%2d",j);
		}
			printf("/n");
	}
	return 0;
}


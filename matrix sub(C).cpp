#include<stdio.h>
int main()
{
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	printf("enter first array value:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter second array value:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("sub of two matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	
	for(i=0;i<2;i++)
	
		for(j=0;j<2;j++)
		printf("%d\t",c[i][j]);
	
	printf("\n");
}

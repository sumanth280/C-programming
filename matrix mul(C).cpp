#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],r1,c1,r2,c2,i,j,k;
	printf("enter row and column of 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("enter row and column of 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	printf("matrix is not possible");
	else
	{
		printf("enter the elements of matrix 1\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the elements of matrix 2\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		{
			c[i][j]=0;
			for(k=0;k<r2;k++)
			{
				c[i][j]=a[i][k]*b[k][j];
			}
		}
	}
	printf("the result matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
	return 0;
}

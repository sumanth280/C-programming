#include<stdio.h>
main()
{
	int r1,r2,c1,c2,i,j,k;
	int a[10][10],b[10][10],c[10][10];
	printf("MATRIX ADDITION\n\n");
	printf("Matrix 1\n");
	printf("How many rows : ");
	scanf("%d",&r1);
	printf("How many columns : ");
	scanf("%d",&c1);
	printf("Matrix 2\n");
	printf("How many rows : ");
	scanf("%d",&r2);
	printf("How many columns : ");
	scanf("%d",&c2);
	if(c1==r2)
	{
		printf("Enter the elements of the first matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}    }
		printf("Enter the elements of the second matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}	}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<r2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}	}
		printf("Result of Multiplication\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}	}
	else
	{
		printf("The matrices cannot be multiplied\n");
	}
}


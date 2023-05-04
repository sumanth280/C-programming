#include<stdio.h>
main()
{
	int rc,i,j,sum=0;
	int a[10][10];
	printf("How many rows & columns in a square matrix : ");
	scanf("%d",&rc);
	printf("Enter the elements of the matrix\n");
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of diagonal elements = %d\n",sum);
}


#include<stdio.h>
int main()
{
	int i,j,sum,arr[20][20],r,c;
	printf("enter the no of coloum:");
	scanf("%d",&c);
	printf("enter no of rows:");;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("enter a number a[%d][%d]",i,j);
		scanf("%d",&arr[i][j]);
	   }
}
	if (r==c)
	{
		printf("diogonal elements");
		{
				for(i=0;i<r;i++)
				{
				for(j=0;j<c;j++)
				{
					if(i==j);
					{
						printf("%d",arr[i][j]);
					sum+=arr[i][j];
				}
				}	
				}
		}
    }
    printf("\nsum of diogonal elements is %d",sum);
    return 0;
}

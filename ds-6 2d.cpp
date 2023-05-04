#include<stdio.h>
int main()
{
	int m1,n1,m2,n2,i,j,k;
	printf("enter the elements of first matrix(rows coloumns):");
	scanf("%d %d",&m1,&n1);
	printf("enter the elements of second matrix(rows coloumns):");
	scanf("%d %d",&m2,&n2);
	if(n1!=m2)
	{
	printf("invalid: the no.of columns in the first matrix shld be equal to no.of rows in second matrix.\n");
	return 0;
    }
    int a[m1][n1],b[m2][n2],c[m1][n2];
    printf("enter the elements of first matrix:\n");
    for(i=0;i<m1;i++)
    {
    	for(j=0;j<n1;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second matrix:\n");
    for(i=0;i<m2;i++)
    {
    	for(j=0;j<n2;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=0;
			for(k=0;k<n1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("resultant matrix:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",c[i][j]);
	}
	printf("\n");
}
return 0;
    
}

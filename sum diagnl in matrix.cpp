#include<stdio.h>
int main()
{
	int i,j,m,n,arr[30][20],sum=0;
	printf("enter no.of rows:");
	scanf("%d",&m);
	printf("\nenter no.of coloumns:");
	printf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;i++)
		{
		printf("\nEnter arr[i]value :",i,j);
		scanf("%d", &arr[i][j]);
	    }
	}
	printf("diagonal elements of matrix is:\n");
	if(m==n)
    {
            
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j){
                        printf("%d", arr[i][j]); 
						sum+=arr[i][j];
						}   
                }
                printf("\n");  
            }
            printf("Sum of diagonal elements: %d",sum);
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }

    return 0;
}



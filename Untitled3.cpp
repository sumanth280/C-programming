#include<stdio.h>
int main()
{
    int i,j,arr[10][10],r,c,sum;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of columns:");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter element a[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    if(r==c)
    {
        printf("the diagonal elements:");
         for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(i==j)
                    {
                        printf("%d ",arr[i][j]);
                        sum+=arr[i][j];
                    }
                }

            }
    printf("\nsum of diagonal elements:%d",sum);
   }
   else
    printf("matrix is not a square matrix.");
}

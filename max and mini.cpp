#include<stdio.h>
int main()
{
    int i,j,k,n,arr[n],x;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
         printf("enter the element:");
         scanf("%d",&arr[i]);
        }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                x=arr[k];
                arr[k]=arr[j];
                arr[j]=x;
            }
        }
    }
    printf("the maximum number is %d",arr[n-1]);
    printf("the minimum number is %d",arr[0]);
}

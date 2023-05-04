#include<stdio.h>
int main()
{
	int arr[100],i,j,n,swap;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter %d integers:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	prin
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			 swap=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}

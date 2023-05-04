#include<stdio.h>
int main()
{
	int i,n,arr[20],largest=arr[0];
	printf("enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter an element :");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	printf("the largest num of array is %d",largest);
	
}

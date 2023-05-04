#include<stdio.h>
int main()
{
	int i,arr[20],count=0,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements\n");
		scanf("%d",&arr[i]);
		if(arr[i]<0)
		{
			count++;
		}
		
	}
	printf("the  total no of negative numbers %d:",count);
	return 0;
	
}

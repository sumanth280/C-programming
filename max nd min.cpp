#include<stdio.h>
int main()
{
	int i,n,max,arr[10];
	printf("enetr the no of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
		{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
	}
		printf("the max valuse is%d",max);
}

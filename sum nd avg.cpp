#include<stdio.h>
int main()
{
	int i,n,arr[30];
	float sum=0,avg=0;
	printf("enter the no.of elements in an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter an elements:\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		avg=sum/n;
	}
	{
		printf("\nsum of elements is %f",sum);
		printf("\navg of elements is %f",avg);
	}
	
}

#include<stdio.h>
int main()
{
	int i,n,arr[20],sum=0,avg;
	printf("enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter an element :");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		avg=sum/n;
	}
	printf("the sum of num in array is %d",sum);
	printf("\n avarage of the given no is %d",avg);
}

#include<stdio.h>
int main()
{
	int n,i,j,temp,a[100];
	printf("enter the num of ele:");
	scanf("%d",&n);
	printf("array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i=n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


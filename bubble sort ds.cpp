#include<stdio.h>
int main()
{
	int n,i,j,temp,a[90];
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
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
	printf("sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

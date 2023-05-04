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
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-1] && j>0)
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
	printf("sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

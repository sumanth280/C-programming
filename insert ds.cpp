#include<stdio.h>
int main()
{
	int n,i,j,num,pos,a[90];
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to insert:");
	scanf("%d",&pos);
	if(pos<n && pos>=0)
	{
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	printf("enter the element to insert:\n");
	scanf("%d",&num);
	a[pos]=num;
	printf("final array:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
	}
	else
	printf("invalid position");
}
	

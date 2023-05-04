#include<stdio.h>
int main()
{
	int n,i,j,num,pos,flag=0,a[90];
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to delete:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
	if(a[i]==num)
	{
		flag=1;
		pos=i;
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	printf("final array:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	}
}
if(flag!=1)
printf("invalid");
}
	

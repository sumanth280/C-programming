#include<stdio.h>
int main()
{
	int key,a[100],i,n,flag=0;
	printf("enter the no.of elements:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is at %d position",key,i);
	}
	else
	{
		printf("not found");
	}
}

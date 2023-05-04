#include<stdio.h>
int main()
{
	int f,l,mid,n,i,key,flag=0,a[90];
	printf("enter the no.of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements to search:");
	scanf("%d",&key);
	f=0;
	l=n-1;
	while(f<=l)
	{
	mid=(f+l)/2;
	if(a[mid]==key)
	{
		flag=1;
		break;
	}
	else if(a[mid]<key)
	f=mid+1;
	else if(a[mid]>key)
	l=mid-1;	
	}
	if(flag==1)
	printf("key is found\n");
	else
	printf("not found");
}

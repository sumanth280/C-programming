#include<stdio.h>
int main()
{
	int a[50],n,i,even_count=0,odd_count=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  if(a[i]%2==0)
	  even_count++;
	  else
	  odd_count++;
	}
	printf("the no.of even numbers is %d\n",even_count);
	printf("the no.of odd numbers is %d",odd_count);
}

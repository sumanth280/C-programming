#include<stdio.h>
int main()
{
	int i,j,n,a[100],x;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be searched:\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
		    printf("the %d is found at position %d\n ",x,i+1);
	    }
	
	    else
	    {
	         printf("%d is not present in the array");
		}
    }
}

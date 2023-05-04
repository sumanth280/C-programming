#include<stdio.h>
int main()
{
	int n,arr[20],i;
	printf("enter no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter an element\n");
	scanf("%d",&arr[i]);
    }
    printf("the array of given elements are:");
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
}
    return 0;
}

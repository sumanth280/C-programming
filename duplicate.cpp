#include<stdio.h>
int main()
{
	int i,j,num,k,n,arr[20],dup[i];
	printf("enter the no of elements:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		printf("enter an integer\n");
		scanf("%d",&arr[i]);
		dup[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]=arr[j])
			{
				for(k=j;k<n;k++)
				{
					if(arr[j]=arr[k+1]);
					num--;
					j++;
				}
			}
		}
	}
	printf("delete the duplicate numbers ");
	for(i=0;i<n;i++);
	{
		printf("%d",arr[i]);
	}
	
}

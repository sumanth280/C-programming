#include<stdio.h>
int main()
{
	int i,j,m,n,arr[20],co=0,ch;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter an elements:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		ch=0;
		for(j=1;j<arr[i];j++)
		{
			if(arr[i]%j==0)
		{
			ch+=1;
		}
		}
		if(ch>2)
		{
			co+=1;
		}
    }
		printf("number of composite numbers :%d",co);
}

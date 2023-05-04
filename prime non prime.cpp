#include<stdio.h>
int prime(int n);
int main()
{
	int n,flag;
	printf("Enter a number : ");
	scanf("%d",&n);
	flag=prime(n);
	if(flag==1)
	{
		printf("PRIME");
	}
	else
	{
		printf("NOT PRIME");
	}
}
int prime(int n)
{
	int i,flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
		}
	}
	return flag;
}


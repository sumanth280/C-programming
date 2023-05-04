#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter an range");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	if(i%2!=0)
	{
		printf("odd numbers %d\n:",i);
    }
    else if(i%2==0)
    printf("even numbers %d\n:",i);
    else
    printf("invalid input");

}

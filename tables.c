#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter the number for required table");
	scanf("%d",&a);
	printf("enter the number for multiplication table");
	scanf("%d",&b);
	if(a>=0&&b>=0)
	{
	printf("the resultant multiplication");
	for(i=0;i<=b;i++)
	printf("%d*%d=%d\n",a,i,a*i);
    }
    else if(a<=0&&b>=0)
    {
    	printf("the resultant multiplication");
    	for(i=0;i<=b;i++)
    	printf("%d*%d=%d\n",a,i,a*i);
	}
	else if(a<=0||a>0&&b<0)
	{
		printf("the resultant multiplication");
		for(i=-1;i>=b;i--)
		printf("%d*%d=%d\n",a,i,a*i);
	}
	return 0;
}

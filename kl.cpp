#include<stdio.h>
#include<conio.h>
int main()
{
	int x,n;
	int result;
	printf("enter the value of base:");
	scanf("%d",&x);
	printf("enter the value of the power:");
	scanf("%d",&n);
	result=pow((double)x,n);
	printf("%d to the pwer of %d is=%d",x,n,result);
	return 0;
}

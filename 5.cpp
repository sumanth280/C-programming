#include<stdio.h>
int main()
{
	int a,b;
	int *x,*y;
	printf("enter any two values:");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	printf("the values before swap is a=%d\t b=%d",*x,*y);
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
	printf("\nthe values after swapping is a=%d\t b=%d",*x,*y);
	return 0;
}

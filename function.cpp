#include<stdio.h>
int multiply(int a,int b);
int main()
{
	int i,j,result;
	printf("enter 2 numbers");
	scanf("%d %d,&i,&j");
	result=multiply(i,j);
	printf("multiplication of %d and %d is %d,i,j,result");
	return 0;
}
    int multiply(int a,int b)
	{
		return a*b;
		
	}

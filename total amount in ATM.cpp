#include<stdio.h>
int main()
{
	int a,b,c,d,a1,b1,c1,d1,A,B,C,D,total;
	printf("enter the 1st denomination:\n");
	scanf("%d",&a);
	printf("enter the 1st denomination number of notes:\n");
	scanf("%d",&a1);
	printf("enter the 2nd denomination:\n");
	scanf("%d",&b);
	printf("enter the 2nd denomination number of notes:\n");
	scanf("%d",&b1);
	printf("enter the 3rd denomination:\n");
	scanf("%d",&c);
	printf("enter the 3rd denomination number of notes:\n");
	scanf("%d",&c1);
	printf("enter the 4th denomination:\n");
	scanf("%d",&d);
	printf("enter the 4th denomination number of notes:\n");
	scanf("%d",&d1);
	A=a*a1;
	B=b*b1;
	C=c*c1;
	D=d*d1;
	total=A+B+C+D;
	printf("total available balance in ATM is:%d\n",total);
}


#include<stdio.h>
int main()
{
int a, b, add, sub, mul, div, rem;
printf("Enter a, b values : ");
scanf("%d%d",&a,&b); 
add=a+b;
sub=a-b;  
mul=a*b; 
div=a/b; 
rem=a%b; 
printf("Result of addition is=%d\n", add);
printf("Result of subtraction=%d\n", sub);
printf("Result of multiplication is=%d\n", mul);
printf("Result of division is=%d\n", div);
printf("Result of remainder=%d\n",rem);
return 0; 
}


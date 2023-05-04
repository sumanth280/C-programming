#include<stdio.h>
int is_perfect(int num)
{
int i,n,sum=0;
for(i=0;i<n;i++)
{
if(num%i==0)
{
sum+=i;
}
}
if(sum==num)
{
	return 1;
}
else
{
	return 0;
}
}
int main()
{
int num;
printf("enter an integer:");
scanf("%d",&num);
if(is_perfect (num))
{
printf("%d is a perfect number");
}
else
{
	printf("%d is not a perfect number");
} 
return 0;
}



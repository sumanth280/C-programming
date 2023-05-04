#include <stdio.h>
#include <math.h>
 
void perfectsquare(int num)
{
    int i,num,rem,sum=0;
	printf("Enter an integer number: ");
    scanf("%d",&num);
	for (int i=1;i<num;i++)
	{
	rem = num%i;
	if(rem == 0)
	{
		sum=sum+i;
	}
    }
    if(sum == num)
	printf("%d is a perfect square.",num);
	else
	printf("%d is not a perfect square.",num);
}

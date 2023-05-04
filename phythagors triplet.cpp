#include<stdio.h>
int main()
{
int final,a,b,c;
printf("enter the range :");
scanf("%d",&final);
printf("the pythogores triplet in a given case are :\n");
for(a=1;a<=final;a++)
{
	for(b=a;b<=final;b++)
	{
		for(c=b;c<=final;c++)
		{
			if(c*c==a*a+b*b)
			{
				printf("%d,%d,%d\n",a,b,c);
			}
		}
	}
	
}
}

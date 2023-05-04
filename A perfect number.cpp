#include<stdio.h>
main()
{
int i,number,sum=0;
printf("\nenter any number\n");
scanf("%d",&number);
for(i=1;i<number;i++)
{
	if(number %i==0)
	sum=sum+i;
}
if(sum==number)
printf("\n%d is a perfect number",number);
else
printf("\n%d is not the perfect number",number);
return 0;
}

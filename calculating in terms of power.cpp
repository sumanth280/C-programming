#include<stdio.h>
#include<math.h>
int main()
{
	int base,x,n,exponent,result,mul,add,div,sub,power=1;
	printf("enter the elements x and n:");
	scanf("%d%d",&x,&n);
	add=x+n;
	sub=x-n;
	mul=x*n;
	div=x/n;
	printf("add=%d\n,sub=%d\n,mul=%d\n,div=%d\n",add,sub,mul,div);
	while(n!=0)
	{
	  power=power*x;
	  --n;
	}
	  printf("power=%d",power);
     
	return 0;
	
}

#include<stdio.h>
#include<math.h>
main()
{
	int bin[10],i,c=0,dec=0;
	printf("Enter a decimal number : ");
	scanf("%d",&dec);
	while(dec>0)
	{
		bin[c]=dec%2;
		dec=dec/2;
		c++;
	}
	printf("Binary equivalent is ");
	for(i=c-1;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
}


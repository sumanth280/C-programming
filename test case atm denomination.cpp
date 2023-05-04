#include<stdio.h>
main()
{
	int i,d,n,total=0;
	for(i=1;i<=4;i++)
	{
		printf("enter %d denomination",i);
		scanf("%d",&d);
		if(d==2000|| d==500|| d==200|| d==100)
		{
			printf("%d denomination of no of notes",i);
			scanf("%d",&n);
			total=total+(d*n);
		}
		else
		{
		printf("enter correct denomination");
		}
	}
	{
		printf("total=%d",total);
	}
}

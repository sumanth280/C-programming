#include<stdio.h>
main()
{
	int i,m,n,choice;
	printf("enter the m value:");
	scanf("%d",m);
	printf("enter the n value:");
	scanf("%d",n);
	printf("1.pow\n2.add\n3.sub\n4.mul\n5.div");
	switch(choice)
	{
		case1:
			for(i=m;i<=n;i++)
			{
				m*m;
			}
			printf("the m to the power of n is %d",i)
	    break;
	    case2:
			printf(" the addition of %d and %d is %d",m,n,m+n);
			break;
	    case 3:
	    		printf("the sub of %d and %d is &d",m,n,m-n);
		break;
		case 4:
				printf("the multiplication of %d and %d is %d",m,n,m*n);
		break;
		case 5:
				printf("the division of %d and %d is %d", m,n,m/n);
		break;		
	}
	

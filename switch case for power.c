#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,y,choice;
	float z;
	printf("enter x value:");
	scanf("%d",&x);
	printf("enter n value");
	scanf("%d",&n);
	
	printf("enter 1 for pow(x,n)\n");
	printf("enter 2 for add(x,n)\n");
	printf("enter 3 for sub(x,n)\n");
	printf("enter 4 for mul(x,n)\n");
	printf("enter 5 for div(x,n)\n");
	
	printf("Enter your choice=");
	scanf("%d",&choice);
	

	switch(choice)
	{
	  case 1:
	  	y=pow(x,n);
	  	printf("Power of %d and %d=%d",x,n,y);
	  	break;
	  	
	 case 2:
	 	printf("add of %d and %d =%d",x,n,x+n);
	 	break;
	case 3:
		printf("sub of %d and %d =%d",x,n,x-n);
		break;
	case 4:
		printf("mul of %d and %d =%d",x,n,x*n);
		break;
	case 5:z=(float)x/n;
		printf("div of %d and %d =%f",x,n,z);
		break;
	}
	return 0;
}

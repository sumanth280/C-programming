#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter any two numbers:");
	scanf("%d%d",&a,&b);
	printf("enter 1 for addion\n");
	printf("enter 2 for subtraction\n");
	printf("enter 3 for multiplication\n");
	printf("enter 4 for division\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	 case 1:
	 	printf("addition=%d",a+b);
		 break;
	 case 2:
	    printf("subtraction =%d",a-b);
		break;
	 case 3:
	     printf("multiplication=%d",a*b);
		 break;
	 case 4:
	     printf("division=%d",a/b);
		 break;
		 
	 default: 	
	      printf("invalid");
	 
	 return 0;
	 
	}
}

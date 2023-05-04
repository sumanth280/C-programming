#include<stdio.h>
int main()
{
	int n,i=0,a[10],j=0,b[10],choice;
	
	printf("\nenter  1 for binary number");
	printf("\nenter 2 for octal number");
	printf("\nenter choice");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("enter the number to convert binary");
          	scanf("%d",&n);
 
         	if(n>0)
        	{
	        	for(i=0;n>0;i++)
	           	{
		         	a[i]=n%2;
			         n=n/2;
	         	}
	
	         printf("binary number");
           	 for(i=i-1;i>=0;i--)
	
			printf("%d",a[i]);
	
 
	 }
	
 		else
			{
				printf("decimal value is 0");
			}
			break;
	case 2:
		printf("enter the number to convert octal");
		scanf("%d",&n);
 
		if(n>8)
		{
			for(j=0;n>0;j++)
			{
				b[j]=n%8;
				n=n/8;
			}
		
		printf("octal number");
		for(j=j-1;j>=0;j--)
	
		printf("%d",b[j]);
	
 
	 }
	
 		else
		{
			printf("octal value is invalid");
		}
		break ;
		default:
			printf("enter valid option");
	}
}
		
	 

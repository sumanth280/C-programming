#include<stdio.h>
int main()
{
	int i,j,r,c,n;
	char s;
	printf("enter the symbol");
	scanf("%c",&s);
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter columns:");
	scanf("%d",&c);
    
	if(r==c)
	
		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
			
				if(i==1||i==r||j==1||j==c)
				{
					printf("%c",s);
				}
				else
				{
					printf(" ");
				}	
			}
			printf("\n");
		}
	
		else
		{
			printf("enter equal rows and columns");
		}
	
	return 0;
 }
 

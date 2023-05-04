#include<stdio.h>
int main()
{
	int i,j,r,c;
	char s;
	printf("enter the symbol");
	scanf("%c",&s);
	printf("enter the number of rows");
	scanf("%d",&r);
	printf("enter the number of columns");
	scanf("%d",&c);
	if(r!=c)
 {	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%c",s);
		}
		printf("\n");
	}
}
 else
 {
 	printf("invalid entry of rows and columns");
 }

	return 0;
}

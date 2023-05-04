#include<stdio.h>
int main()
{
	int r,c,i,j;
	char a;
	
	printf("enter thr symbol");
	scanf("%c",&a);
	printf("enter number of rows");
	scanf("%d",&r);
	printf("enter number of columns");
	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,n;
	float a;
	printf("enter number of rows:");
	scanf("%d",&n);
	printf("enter number ");
	scanf("%f",&a);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%.2f\t",a*a);
			a=a+0.1;
		}
		printf("\n");
	}
	return 0;
}

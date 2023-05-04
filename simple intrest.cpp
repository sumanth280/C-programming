#include<stdio.h>
int main()
{
	int pa,ri,year,a;
	float si;
	printf("enter principle amount:");
	scanf("%d",&pa);
	printf("enter no of years:\n");
	scanf("%d",&year);
	printf("enter citizenship\n 1 for snr citizenship\n 2 for other citizenship:\n");
	scanf("%d",&a);
	if (a==1)
	{
		si=pa*0.12;
		printf("simple intrest is %f",(si*year));
	}
	if (a==2)
	{
		si=pa*0.10;
		printf("simple intrest is %f",(si*year));
	}
}


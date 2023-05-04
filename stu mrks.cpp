#include<stdio.h>
#include<math.h>
int main()
{
	int m1,m2,m3,m4,agg;
	printf("enter the marks in chem :");
	scanf("%d",&m1);
	printf("enter the marks in c prog :");
	scanf("%d",&m2);
	printf("enter the marks in phy :");
	scanf("%d",&m3);
	printf("enter the marks in dbms :");
	scanf("%d",&m4);
	agg=(m1+m2+m3+m4)/4;
	printf("agg=%d\n",agg);
	if(agg>75)
	{
		printf("distinction");
	}
	else if(agg>65&&agg<=75)
	{
		printf("first class");
	}
	else if(agg>55&&agg<=65)
	{
		printf("second class");
	}
	else if(agg>45&&agg<55)
	{
		printf("third class");
	}
	else if(agg<45)
	{
		printf("fail");
	}
}

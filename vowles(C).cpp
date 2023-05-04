
#include<stdio.h>
#include<string.h>
int main()
{
	int vowles=0,i,j,d;
	char a[100];
	char b[5]={'a','i','o','e','u'};
	printf("enter the string");
	scanf("%s",&a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[j]==a[i])
			vowles++;
		}
	}
	printf("vowles %d",vowles);
	return 0;
}

#include<stdio.h>
int main()
{
	char a[10]={'a','e','i','o','u'};
	char b[100];
	int vowels=0,d,i,j;
	printf("enter a string:\n");
	gets(b);
	d=strlen(b);
	for(i=0;i<d;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[i]=a[j])
			printf("string after deletion=%d",b[i]);
			--i;
			
		}
	}
	return 0;
}

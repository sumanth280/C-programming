#include<stdio.h>
#include<string.h>
int main()
{
char a[10]={'a','e','i','o','u','A','E','I','O','U'};
char f[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
char b[100];
char t[1]={' '};
int p=0,h=0,i,j,s=0,k;
printf("enter a string:");
gets(b);
int d=strlen(b);
for(i=0;i<d;i++)
{
	for(j=0;j<20;j++)
	{
		if(b[i]==a[j])
		{
		p++;
		printf("%c is a ovwel located at %d\n",b[i],i+1);
		}
		else if(b[i]==f[j])
		{
			
			printf("%c is a consonant located at:%d\n",b[i],i+1);
			h++;
		continue;	
		}
	}
	
}
for(i=0;i<d;i++)
{
	if(b[i]==' ')
	{
		++s;
	}
}
	printf("total number of vowel are:%d\n",p);
	printf("total number of consonant are:%d\n",h);
	printf("total number of spaces are:%d\n",s);
	return 0;

}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a,vowel,consonent,i;
	printf("enter a string :");
	scanf("%s",&str);
	vowel=0;
	consonent=0;
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'|str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
			   vowel++;
			   else
			   {
			   	consonent++;
			   }
	}
	printf("total number of vowel =%d\n",vowel);
	printf("total number of consonent =%d\n",consonent);
}

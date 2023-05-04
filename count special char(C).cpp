#include<stdio.h>
#include<string.h>
int main()
{
int i;
char s[100];
int d,characters=0,digits=0,alphabets=0;
printf("enter the string:\n");
gets(s);
d=strlen(s);
for(i=0;i<d;i++)
{
if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
alphabets++;
else if(s[i]>=48&&s[i]<=57)
digits++;
else
characters++;
}
printf("no of characters=%d",characters);
}

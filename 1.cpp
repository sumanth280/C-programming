#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a,c,vowel,i,j,length,count;
	printf("enter a string :");
	scanf("%[^\n]s",&str);
	vowel=0;
	a=strlen(str);
	printf("number of characters in the string:%d\n",a);
	for(i=0;i<a;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		vowel++;
	}
	{
	printf("Total number of vowel = %d\n", vowel);
    printf("the repeatative characters are:\n");
	}
    for (int i=0;i<=a; i++)
      {
            int count=1;
            for (j=i+1;str[j]!='0';j++)
            {
                  if (str[i]==str[j])
                  {
                         count++;
                         str[j]=-1;
                  }
            }
            if(count>1 && str[i]!=-1)
           {
                 printf ("'%c' is repeated %d times\n", str[i], count);
			}
	 }
}



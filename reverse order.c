#include<stdio.h>
int main()
{
	char str[1000],rev[1000];
	int i,j,count=0;
	printf("enter the string:%s",str);
	scanf("%s",&str);
	if(str[i]>=48&&str[i]<=57&&str[i]!=32)
 {
	while(str[count]!='\0')
	{
		count++;
	}
	j=count-1;
	for(i=0;i<count;i++)
	{
		rev[i]=str[j];
		j--;
	}
	printf("\nstring after reverse:%s",rev);
 }
    else
    {
    	printf("enter valid input");
	}
	return 0;
}    

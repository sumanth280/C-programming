#include<stdio.h>
int main()
{
	FILE*fp;
	char ch;
	fp=fopen("a simple program.cpp","r");
	if(fp=NULL)
	{
    	printf("unable to open");
    }
    else
    {
    	do
    	{
    		ch=getc(fp);
    		putchar(ch);
		}
		while(ch!=EOF);
	}
	fclose(fp);
	return 0;
}

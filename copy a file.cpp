#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char filename[100],c;
f1=fopen("Desktop\file1.txt","r");
f2=fopen("Desktop\file2.txt","w");
c=fgetc(f1);
while(c!=EOF)
{
fputc(c,f2);
c=fgetc(f1);
}
printf("CONTENTS COPIED SUCCESSFULLY....");
fclose(f1);
fclose(f2);
}


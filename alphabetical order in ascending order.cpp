#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n;
	char str[100][100],s[100];
	printf("enter number of names\n");
	scanf("%d",&n);
	printf("enter names in any order\n");
	for(0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
	printf("\n the sorted order of alphabets are:");
	for(i=0;i<n;i++)
	{
		printf("%s\n",str[i]);
		
	}
}

#include<stdio.h>
int main()
{
	int t,su,so,nt;
	printf("enter total no:of users");
	scanf("%d",&t);
	{
		if(t<=0)
		{
			printf("enter a positive number");
		}
		if(t>0)
		
		{
			printf("enter staff user");
			scanf("%d",&su);
		}
		if(t>su)
		{
			nt=su/3;
			printf("student user=%d",t-su-nt);
		}
		else if(t<=(su+nt))
		{
			printf("enter correct valve");	
		}
		else if(t==su)
		{
			printf("student user=0");
		}
		else
		{
			printf("enter appropriate number");
		}
	
		
	}
}

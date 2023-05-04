#include<stdio.h>
int main()
{
	float pavg,navg,p=0,n=0;
	int z=0,inp=0,sum=0,nsum=0;
	printf("enter an integer (-1 to quit):");
	scanf("%d",&inp);
	while(inp!=-1)
	{
		if(inp>0)
		{
		sum=sum+inp;
		p++;
	    }
	    else if(inp<0)
	    {
	    	nsum=nsum+inp;
	    	n++;
		}
		else
		{
			z++;
		}
		printf("\n enter next integer(-1 to quit)");
		scanf("%d",&inp);
	   }
	   
	   
	   pavg=sum/p;
	   navg=nsum/n;
	   printf("\tavg of positive numbers=%f",pavg);
	   printf("\tavg of negative numbers=%f",navg);
	   printf("\t\tpositive numbers :%f\n",p);
	   printf("\t\tnegative numbers:%f\n",n);
	   printf("\t\t zeros:%d\n",z);
	
}


#include<stdio.h>
  main()
  {
  	int n,a[10],i,j,temp;
  	printf("/n enter size of array");
  	scanf("%d",&n);
  	printf("/n elements of the array are");
  	for(i=0;i<n;++i)
  	scanf("%d\t",&a[i]);
  	{
  		for(i=0;i<n;++i)
  		{
  			for(j=i+1;j<n;++j)
  			{
  				if(a[i]>a[j])
  				{
  				 temp=a[i];
				  a[i]=a[j];
				  a[j]=temp;
			     } 
			  }
		  }
	  }
	  printf("\n sorted array :");
	  for(i=0;i<n;++i)
	  printf("%d\n",a[i]);
  }

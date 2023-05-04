#include <stdio.h>  
 int main()
{
   int marks[7],i,sum=0;
   float avg;
   printf("enter the marks in each subject\n");
   for(i=0;i<7;i++)
   {
   scanf("%d",&marks[i]);
   }
   {
   for(i=0;i<7;i++)
   sum=sum+marks[i];
   avg=sum/7;
   }
   printf("total=%d\n",sum);
   printf("avg=%f",avg);
   return 0;
}


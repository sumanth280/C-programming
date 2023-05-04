#include <stdio.h>

int main()
{
   float area,len,bre;
   printf("length of rectangle:");
   scanf("%f",&len);
   printf("bredth of rectangle:");
   scanf("%f",&bre);
   if(len!=bre)
   {
   area=len*bre;
   printf("area of rectangle:%f",area);
   }
   else
   {
       printf("invalid length and bredth");
   }
   return 0;
}

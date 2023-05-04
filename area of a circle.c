#include <stdio.h>

int main()
{
   float area,radius,pi;
   printf("enter the radius of circle:");
   scanf("%f",&radius);
   pi=3.142;
   area=pi*radius*radius;
   printf("area of the circle:%f",area);
   return 0;
}


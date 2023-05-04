#include <stdio.h>
int main()
{
 int p,c,m1,ps,total,avg;
 
 printf("Marks of the student\n");
 
 printf("Marks awarded in python:");
 scanf("%d",&p);
 
 printf("\nMarks awarded in c programming:");
 scanf("%d",&c);
 
 printf("\nMarks awarde d in mathematics:");
 scanf("%d",&m1);
 
 printf("\nMarks awarded in physics:");
 scanf("%d",&ps);
 
 total=(p+c+m1+ps);
 printf("\nTotal marks awarded to the student:%d",total);
 
 avg=(p+c+m1+ps)/4;
 printf("\nAverage marks rewarded to the students:%d",avg);
 
 if(avg>=75)
  printf("\nGrade obtained:DISTINCTION"); 
  
  if(avg>=60 && avg<75)
  printf("\nGrade obtained:FIST DIVISION");
  
  if(avg>=50 && avg<60)
  printf("\nGrade obtained:SECOND DIVISION");
  
  if(avg<50)
  printf("\nGrade obtained:FAIL");
  
  return 0;
  
}

#include<stdio.h>
int main( )
{
int age,height;
printf("Enter Age of Candidate:\n");
scanf("%d", &age);
printf("Enter Height of Candidate:\n");
scanf("%d", &height);
if ((age>=18) && (height>=5))
printf("he Candidate is Selected");
else
printf("Sorry, Candidate not Selected");
return 0;
}

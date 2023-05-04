#include<stdio.h>
int main()
{
int i,j,date,month,year;
    printf("Enter date (dd/mm/yy): ");
    scanf("%d/%d/%d", &date,&month,&year);
	if(date<=0 && date>31){
		printf("Invalid input...");
	}
	else if(month<=0 && month>12)
	{
		printf("invalid input...");
	}
	else if( year<0)
	{
		printf("invalid input...");
	}
	else if (year % 400 == 0)
		
		 {
      printf("%d is a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
}



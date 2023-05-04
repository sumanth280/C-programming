#include <stdio.h>
#include <conio.h>
main()
{
int i, j, rows;
printf (" Enter a number to define the rows: \n ");
scanf("%d", &rows);
for (i = 1; i <= rows; ++i) 
{
for (j = 1; j <= i; ++j) 
{
printf ("* ");
}
printf ("\n");
} 
}



#include<stdio.h>
int main()
{

int number, i, total = 0;

    printf("Enter a number: ");
    scanf("%i", &number);

    printf("The factors of %i are:\n", number);

    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%i\n", i);
            total += i;
        }

    }
    printf("")


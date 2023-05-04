#include<stdio.h>
int main()
{
    int n,i,b;
    printf("enter a number a:");
    scanf("%d",&n);
    b=n/2;
    for(i=2;i<=b;i++)
    {
        if(n%i!=0)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }
        
    }
    return 0;
}

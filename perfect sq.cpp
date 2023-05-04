#include <math.h>
#include <stdio.h>
void perfectsquare(int N)
{
    for (int i=1;i<N;i++)
        {
            if(i*i==N)
            {
                printf("it is a perfect square");
                return;
            }
        }
    printf("it is not a perfect square");
    return;
}
int main()
{
    int N;
    printf("enter the number:");
    scanf("%d",&N);
    perfectsquare(N);
    return 0;
}

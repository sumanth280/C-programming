#include<stdio.h>
int main()
{
    int M,N,choice,i;
    printf("Enter M:");
    scanf("%d",&M);
    printf("Enter N:");
    scanf("%d",&N);
    printf("Enter choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        for(i=1;i<=N;i++)
        {
            printf("%d*%d=%d\n",i,M,i*M);
        }
    }
    else if(choice==2)
    {
        for(i=1;i<=N;i++)
        {
            printf("%d/%d=%f\n",M,i,(M/i));
        }
    }
    else
    {
        printf("Wrong choice");
    }
    return 0;
}

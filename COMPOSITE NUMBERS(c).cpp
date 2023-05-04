#include<stdio.h>
int main()
{
    int m,n,i,j,z=0;
    printf("enter min amd max values:\n");
    scanf("%d %d",&m,&n);
    printf("composite numbers between %d and %d are:\n",m,n);
    for(i=m;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                z=z+1;
            }
        }
        if(z!=2 && i!=1 && i!=2 && i!=3)
        {
            printf("%d ",i);
            z=0;
        }
    }

}

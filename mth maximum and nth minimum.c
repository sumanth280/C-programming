
#include<stdio.h>
int main()
{
    int a[500],i,n,j,t,M,N;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("M th maximum enter the value of M\n");
    scanf("%d",&M);
    printf("N th minimum enter the value of N\n");
    scanf("%d",&N);
    printf("enter the elements of the array\n");
    for(i=1;i<=n;i++)
{
 scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            
        }
    }
}
for(i=1;i<=n;i++)
{
    printf("%d\t" ,a[i]);
}
printf ("\n the sum of %d th maximum and %d th minimum in the array is =%d\n",M,N,a[n-M+1]+a[N]);
printf ("\n the difference= of %d th maximum and %d th minimum in the array is=%d\n",M,N,a[n-M+1]-a[N]);
return 0;
}

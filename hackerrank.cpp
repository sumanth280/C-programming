#include<stdio.h>
int sumArrayElements(int arr[],  int n)
{
    int sum = 0; 
    int i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[n];
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the values of the array");
    scanf("%d",&arr[n]);
     int sum =  sumArrayElements(arr,n);
    printf("\nSum = %d", sum);
    return 0;
}

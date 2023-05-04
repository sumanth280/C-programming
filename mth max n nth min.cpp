#include <stdio.h>
int main()
{
int arr[10];
int i,n,M,N;
int temp = 0;
printf("no. of elements:");
scanf("%d",n);
printf("array of elements:");
for (i=0;i<n;i++){
	scanf("%d",arr);
}
for (int i = 0; i < n; i++) {
for (int j = i+1; j < n; j++) {
if(arr[i] > arr[j]) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("\n, M=");
scanf("%d",arr);
printf("N= \n");
scanf("%d",arr);
printf("%d maximum number = %d",M,&arr);
printf("%d minimum number = %d",N,&arr);
return 0; }

#include<stdio.h> 
#include<stdlib.h> 
main() 
{ 
int n,i=1,fact=1; 
printf("Enter the value of n : "); 
scanf("%d",&n); 
while(i<=n) 
{ 
fact=fact*i; 
i++; 
} 
printf("%d ! = %d",n,fact); 
} 


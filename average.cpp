#include<stdio.h> 
#include<stdlib.h> 
main() 
{ 
int n,i=0; 
float x,avg,sum=0; 
printf("How many numbers : "); 
scanf("%d",&n); 
printf("Enter the numbers\n"); 
while(i<n) 
{ 
scanf("%f",&x); 
sum=sum+x; 
i++; 
} 
avg=sum/n; 
printf("Average = %f",avg); 
}


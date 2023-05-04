#include <stdio.h>
int main()
{
  int i,j,size;
  printf("enter the no of rows :");
  scanf("%d",&size);
  for (i = 0; i < size; i++) 
{
  for (j = 0; j <= i; j++)
    {
      printf("*");
	}
    printf("\n");
}
return 0;
}

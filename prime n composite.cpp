#include<stdio.h>

main()

{

int i,j;

for(i=2;i<=100;i++)

{

for(j=2;j<i;j++)

{

if(i%j==0)

{

printf(“%d\n”,i);

break;

}

}

}

return 0;

}

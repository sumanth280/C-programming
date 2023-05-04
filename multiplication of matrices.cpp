#include<stdio.h>
main()
{
	int m,n,c,d,first[10][10],second[10][10],multiplication[10][10];
	printf("enter the number ofrows and coloumns of matrix");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&first[c][d]);
	printf("enter the elements of second matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&second[c][d]);
	printf("multiplication of entered matrices\n");
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
			multiplication[c][d]=first[c][d]*second[c][d];
			printf("%d\t",multiplication[c][d]);
		}
		printf("\n");
    }
    return 0;
}

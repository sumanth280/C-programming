#include<stdio.h>
main()
 {
 	int m1,m2,m3,m4,total,average;
 	printf("ener the marks for m1,m2,m3,m4");
 	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
 	total=(m1+m2+m3+m4);
 	printf("the total marks is %d",total);
 	average=((m1+m2+m3+m4)/4);
 	printf("the average is %d",average);
 	if(average>=75)
 	{
 		printf("distinction");
	}
	 else if(average>=60&&average <75)
	 {
	 	printf("first division");
	 }
	 else if(average>=50&&average <60)
	 {
	 	printf("second division");
	 }
	 else if(average>=40&&average<50)
	 {
	 	printf("third division");
	 }
	 else
	 {
	 	printf("fail");
	 }
 }

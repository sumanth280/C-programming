#include<stdio.h>
struct address
{
	int hno;
	char stname[20];
	char city[10];
}eadd;
struct employee
{
	int empid;
	char ename[20];
	struct address eadd;
	int salary;
}E[3];
int main()
{
	struct employee E;
	printf("enter empid =\n");
	scanf("%d",&E.empid);
	printf("enter hno =\n");
	scanf("%d",&E.eadd.hno);
	printf("enter street name=\n");
	scanf("%s",&E.eadd.stname);
	printf("enter employee city =\n");
	scanf("%s",&E.eadd.city);
	printf("enter employee name =\n");
	scanf("%s",&E.ename);
	printf("enter employee salary =\n");
	scanf("%d",&E.salary);
	printf("empid =%d\n",E.empid);
	printf("hno =%d\n",E.eadd.hno);
	printf("street name=%s\n",E.eadd.stname);
	printf("employee salary =%d\n",E.salary);
	return 0;
}

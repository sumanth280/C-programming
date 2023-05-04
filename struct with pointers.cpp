#include<stdio.h>
struct student
{
	int rgno;
	char name[10];
	int  mark;
};
void fun_disp(struct cse);
int main()
{
	struct student cse;
	fun_disp(struct student cse);
	return 0;
}
fun_disp(struct student cse)
{
	printf("enter regno,name,total");
	scanf("%d%s%d",&cse.regno,&cse.name,&cse.mark);
	printf("regno=%d\tname=%s\t total=%d\t",cse.regno,cse.name,cse.mark);
}

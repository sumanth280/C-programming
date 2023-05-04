#include<stdio.h>
struct student
{
	char name[30];
	int total,marks[5];
	float percentage;
};
int main()
{
	struct student std;
	int i;
	printf("enter name:");
	scanf("%s",&std.name);
	printf("enter marks:\n");
	std.total=0;
	for(i=0;i<5;i++)
	{
	printf("marks in subject %d:",i+1);
	scanf("%d",&std.marks[i]);
	std.total+=std.marks[i];
    }
    std.percentage=float(float(std.total)/float(500))*100;
    printf("\nstd.name is %s\ntotal marks is %d\npercentage is %2f",std.name,std.total,std.percentage);
}

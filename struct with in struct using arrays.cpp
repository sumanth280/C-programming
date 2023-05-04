struct employee
{
	int emid;
	char stname[10];
	char city[10];	
};
struct employee
{
	
	char ename[10];
	int salary;
}E[3];
int main()
{
	int i;
	printf("enter emid , stname , city , name,salary for 3 employees");
	for(i=0;i<3;i++)
	{
		printf("enter emid,stname,city,name,salary %d ",i+1);
		scanf("%d %s %s %s %d",&E[i].emid,&E[i].stname,&E[i].city,&E[i].name,&E[i].salary);
		
	}
}

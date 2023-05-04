#include<stdio.h>
int main()
{
	int total_users,staff_users,nt_staff;
	printf("enter total_users:\n");
	scanf("%d",&total_users);
	printf("enter staff_user:\n");
	scanf("%d",&staff_users);
	if(total_users==staff_users||total_users<staff_users)
	{
		printf("invalid input");
	}
	nt_staff=staff_users/3;
	printf("total student users is %d",total_users-(staff_users+nt_staff));
}

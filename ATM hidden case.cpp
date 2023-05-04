#include<stdio.h>
int main()
{
	int amount;
	int note500,note100,note200,note2000;
	note500=note100=note200=note2000=0;
	printf("enter amount:");
	scanf("%d",&amount);
	if(amount>=2000)
	{
		note2000=amount/2000;
		amount-=note2000*2000;
	}
	if(amount>=500)
	{
		note500=amount/500;
		amount-=note500*500;
	}
	if(amount>=200)
	{
		note200=amount/200;
		amount-=note200*200;
	}
	if(amount>=100)
	{
		note100=amount/100;
		amount-=note100*100;
	}
	return 0;
}

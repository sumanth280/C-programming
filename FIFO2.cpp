#include<stdio.h>
#include<conio.h>
#define infinite 1000
int search(int a[],int n,int pageno)	//searching pageno int he array a[]
{
	int i;
	for(i=0;i < n;i++)
		if(a[i]==pageno)
			return(1);
	return(0);
}

int findmax(int a[],int n)
{
	int i,j;
	j=0;
	for(i=1;i < n;i++)
		if(a[i] > a[j])
			j=i;
	return(j);
}

int findempty(int a[],int n)	//finding an empty page frame
{
	int i;
	for(i=0;i < n;i++)
		if(a[i]==-1)
			return(i);
	return(-1);
}

int main()
{
	int fifof[10],trace[30],ntrace,nframes;
	int i,j,loc,fifod[10];
	float fifoh=0.00;
	printf("\n Enter no. of frames:");
	scanf("%d",&nframes);
	printf("\n Enter no.of entries in the page trace:");
	scanf("%d",&ntrace);
	printf("\n Enter page trace:");
	for(i=0;i < ntrace;i++)
		scanf("%d",&trace[i]);
	 /initialize frames/
	for(i=0;i < nframes;i++)
	{
		fifof[i]=-1;
		fifod[i]=0;
	}
	/allocation/
	printf("\n page no.   FIFO Allocation");
	for(i=0;i < ntrace;i++)
	{
		if(!search(fifof,nframes,trace[i]))
		{
			loc=findempty(fifof,nframes);
			if (loc!=-1)
			{	//empty frame
				for(j=0;j < nframes;j++)
					fifod[j]++;
					fifof[loc]=trace[i];
					fifod[loc]=0;
			}
			else
			{	//pagefault,Go for page replacement
				loc=findmax(fifod,nframes);
				fifof[loc]=trace[i];
				for(j=0;j < nframes;j++)
					fifod[j]++;
				fifod[loc]=0;
			}
		}
		else
		{	//Page hit
			for(j=0;j < nframes;j++)
				fifod[j]++;
			fifoh=fifoh+1;
		}
		//Print report
		printf("\n%d    ",trace[i]);
		for(j=0;j < nframes;j++)
			printf("%3d",fifof[j],fifod[j]);
	}
	printf("\n Hit ratio:  %.2f  ",fifoh/ntrace);
	getch();
}

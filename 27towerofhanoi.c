#include<stdio.h>
void towerofhanoi(int n,char src,char dest,char mid)
{
	if(n>0)
	{
		towerofhanoi(n-1,src,mid,dest);
		printf("Move Disk %d from  %c to %c\n",n,src,dest);
		towerofhanoi(n-1,mid,dest,src);
	}
}
int main()
{
	int n;
	printf(" Enter Number of disks :");
	scanf("%d",&n);
	printf(" Solution : \n");
	towerofhanoi(n,'A','C','B');
}

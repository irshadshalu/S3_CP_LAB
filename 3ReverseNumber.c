#include<stdio.h>
int main()
{
	int n,rev,i;
	printf(" Enter a Number : ");
	scanf("%d",&n);
	rev=0;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	printf(" Reverse is %d\n",rev);

}

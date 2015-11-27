#include<stdio.h>
int main()
{
	int n,sum;
	printf(" Enter a number : ");
	scanf("%d",&n);
	sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	printf(" sum of digits is %d\n",sum);
}


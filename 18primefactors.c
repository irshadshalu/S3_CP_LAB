#include<stdio.h>
int main()
{
	int n,i,j;
	printf(" Enter a number : ");
	scanf("%d",&n);
	i=2;
	printf(" Prime Factors are : ");
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			n=n/i;
		}
		else
			i++;
	}
	printf("\n");

}


#include<stdio.h>
int main()
{
	printf(" Enter an year : ");
	int n;
	scanf("%d",&n);
	if(n%400==0||(n%4==0&&n%100!=0))
		printf(" It is a leap year \n");
	else
		printf(" Not a leap year \n");
}	


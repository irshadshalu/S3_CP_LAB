#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q,*temp;
	p=malloc(sizeof(int));
	q=malloc(sizeof(int));
	printf(" Enter two ints a,b : ");
	scanf("%d%d",p,q);
	temp=p;
	p=q;
	q=temp;
	printf(" a= %d, b= %d \n",*p,*q);
}

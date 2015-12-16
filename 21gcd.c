#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main(int args,char **s)

{
	int a,b;
	printf(" Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("gcd(%d,%d) = %d\n",a,b,gcd(a,b));
}

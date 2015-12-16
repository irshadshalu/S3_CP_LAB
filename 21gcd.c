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
	int a=2,b=6;
//	int a,b;
//	printf(" Enter two numbers : ");
//	scanf("%d%d",&a,&b);
	printf("gcd(%d,%s) = %d\n",a,s[2],gcd(a,b));
}

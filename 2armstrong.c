#include<stdio.h>
int main()
{
	int x,temp,sumcube,i;
	printf(" Enter a 3-digit number : ");
	scanf("%d",&x);
	temp=x;
	sumcube=0;
	if(x<100||x>999){
		printf(" Not a  3 digit number\n");
		return 1;
	}
	while(x>0)
	{
		i=x%10;
		sumcube+=i*i*i;	
		x/=10;
	}
	if(temp==sumcube)
		printf(" Yes , it is an armstrong number \n");
	else
		printf(" Not an armstrong number \n");
}


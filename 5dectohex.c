#include<stdio.h>
char convert(int n)
{
	if(n<10)
		return n+'0';
	else 
		return n+'A'-10;
}
int main()
{
	int d,i=0,j;
	char res[100]="0",temp;
	printf("Enter A decimal number\n");
	scanf("%d",&d);
	while(d>0)
	{
		res[i]=convert(d%16);
		d/=16;
		i++;
	}
	for(j=0;j<i/2;j++)
	{
		temp=res[j];
		res[j]=res[i-j-1];
		res[i-j-1]=temp;
	}
	res[i>1?i:1]='\0';
	printf(" Hexadecimal is %s\n",res);
}



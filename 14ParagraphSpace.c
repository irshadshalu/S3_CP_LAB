#include<stdio.h>
int main()
{
	char s[1000];
	printf(" Enter String : ");
	fgets(s,1000,stdin);
	int n,count=0;
	for(n=0;s[n]!='\0';n++)
		if(s[n]==' ')
			count++;
	printf("Number of spaces = %d\n",count);

}

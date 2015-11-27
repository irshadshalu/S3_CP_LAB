#include<stdio.h>
int main()
{
	int flag=1,n,i;
	char s[1000];
	printf(" Enter string : ");
	scanf("%s",s);
	for(n=0;s[n]!='\0';n++);
	for(i=0;i<n/2;i++)
		if(s[i]!=s[n-i-1])
			flag=0;
	if(flag)
		printf("%s is a palindrome \n",s);
	else
		printf("%s is not a palindrome \n",s);
}

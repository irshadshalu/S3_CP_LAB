#include<stdio.h>			
int main()
{
	char c;
	printf("Enter A character\n");
	scanf("%c",&c);
	if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf(" It is a vowel ");
	else
		printf(" Not a vowel\n");
}

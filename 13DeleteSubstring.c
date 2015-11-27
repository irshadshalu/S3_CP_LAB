#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int lenstr(char s[])
{
	int r;
	for(r=0;s[r]!='\0';r++);
	return r-1;
}
int search(char s[],char k[])
{
	int n=lenstr(s),m=lenstr(k),i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m&&i+j<n;j++)
		{
			if(s[i+j]!=k[j])
				break;
		}
		if(j==m)
			return i;

	}
	return -1;
}
void delete(char s[],int pos,int k)
{
	int i;
	for(i=pos;i+k<lenstr(s);i++)
		s[i]=s[k+i]; 
    s[i]='\0';
}
int main()
{
	char s[1000],sub[1000];
	printf(" Enter string : ");
	fgets(s,1000,stdin);
	printf("Enter substring : ");
	fgets(sub,1000,stdin);
    if(search(s,sub)==-1)
	{
        printf("Substring not found\n");}
	else{
		delete(s,search(s,sub),lenstr(sub));
		printf("String after deletion : %s\n",s);
	}
}

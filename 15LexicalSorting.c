#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char s[100][1000];
	printf(" Enter Number of strings : ");
	scanf("%d",&n);
	printf(" Enter Strings :");
	for(i=0;i<n;i++)
		scanf("%s",s[i]);
	i=0;
	while(i<n)
	{
		if(i==0 || strcmp(s[i],s[i-1])>=0)
			i++;
		else
		{
			char temp[1000];
			strcpy(temp,s[i]);
			strcpy(s[i],s[i-1]);
			strcpy(s[i-1],temp);
			i--;
		}
	}

	printf(" Sorted strings are : \n");
	char ts[1000];
	strcpy(ts,s[0]);
	//	printf("%s",ts);
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
}

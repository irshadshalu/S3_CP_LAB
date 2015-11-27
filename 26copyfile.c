#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c,filename1[1000],filename2[1000];
	FILE *from,*to;
	printf(" Enter Name of file to copy from : ");
	scanf("%s",filename1);
	from=fopen(filename1,"r");
	if(from==NULL)
	{
		printf("Invalid File \n");
		return 1;
	}
	printf(" File Read Successful, Enter name of file to copy to : ");
	scanf("%s",filename2);
	to=fopen(filename2,"w");
	if(to==NULL)
	{
		printf(" File Read Error ! \n");
		fclose(to);
		return 0;
	}
	while(1)
	{
		c=fgetc(from);
		if(c==EOF)
			break;
		else
			fputc(c,to);
	}
	printf(" Copy Successful \n");
	fclose(to);
	fclose(from);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i,j,a[100][100];
	printf(" Enter n :");
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
			a[i][j]=0;
		a[i][0]=1;
	}
	for(i=1;i<n;i++)
		for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];

	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("%d ",a[i][j]);
		printf("\n");

	}
}

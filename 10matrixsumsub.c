#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],sum[100][100],dif[100][100],m,n,i,j;
	printf(" Enter no of rows and colomns : ");
	scanf("%d%d",&m,&n);
	printf(" Enter matrix A :\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf(" Enter matrix B :\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			dif[i][j]=a[i][j]-b[i][j];
		}
	printf(" A+B =\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
	printf(" A-B =\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",dif[i][j]);
		printf("\n");
	}
}

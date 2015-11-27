#include<stdio.h>
int main()
{
	int m,n,p,q,a[100][100],b[100][100],r[100][100],i,j,k;
	printf(" Enter no of rows and colomns of matrix A : ");
	scanf("%d%d",&m,&n);
	printf(" Enter matrix A :\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf(" Enter no of rows and colomns of matrix B : ");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf(" Multiplication not possible \n");
		return 0;
	}
	printf(" Enter matrix B :\n");
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
		{
			r[i][j]=0;
			for(k=0;k<p;k++)
				r[i][j]+=a[i][k]*b[k][j];
		}
	printf(" A x B=\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
			printf(" %d",r[i][j]);
		printf("\n");
	}
}

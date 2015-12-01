#include<stdio.h>
int sol[100][100]; // final solution matrix + to check visited
int p,q,maze[100][100];
int solve(int m,int n);
int main(){
	int i,j;
	printf(" Enter dimension of maze : ");
	scanf("%d%d",&p,&q);
	printf(" Enter input  maze : \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&maze[i][j]);
			sol[i][j]=0;
		}
	}
	solve(0,0);
	for(i=0;i<p;i++){
		for(j=0;j<q;j++)
			printf("%d ",sol[i][j]);
		printf("\n");
	}
}


int solve(int m,int n){
	if(maze[m][n]!=1||m>=p||n>=q||m<0||n<0)
		return 0;
	if(m==p-1&&n==q-1){
		sol[m][n]=1;
		return 1;
	}
	sol[m][n]=1;
	if(n!=q-1&&sol[m][n+1]!=2&&solve(m,n+1)==1)
		return 1;
	if(m!=p-1&&sol[m+1][n]!=2&&solve(m+1,n)==1)
		return 1;
/*	if(m!=0&&sol[m-1][n]!=2&&solve(m-1,n)==1)
		return 1;
	if(n!=0&&sol[m][n-1]!=2&&solve(m,n-1)==1)
		return 1;
		*/

	sol[m][n]=2;
	return 0;
}


			

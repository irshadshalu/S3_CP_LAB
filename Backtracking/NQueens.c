#include<stdio.h>
int n;
int isSafe(int rows[],int row,int col){
	int i;
	for(i=0;i<row;i++)
		if(rows[i]==col||rows[i]==col+row-i||rows[i]==col-row+i)
			return 0;
	return 1;
}
void print(int rows[]){
	int i,j;
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==rows[i])
				printf("| Q ");
			else
				printf("| - ");
		}
		printf("|\n");
	}
}
void nQueens(int rows[],int row){
	int col;
	for(col=0;col<n;col++){
		if(isSafe(rows,row,col)){
			rows[row]=col;
			if(row==n-1)
				print(rows);
			else
				nQueens(rows,row+1);
		}
	}
}
int main(){
	int rows[100];
	scanf("%d",&n);
	nQueens(rows,0);
}



//	Program to find determinant of a given NxN matrix by recursion
#include<stdio.h>

int determinant(int mat[20][20],int n){
	// We assume this function is gonna give a determinant value as an integer,
	// if we pass a matrix and order of it (N).
	
	// We start from the base case, if  matrix is of single element, determinant is element itself,
	if(n==1)
		return mat[0][0];
	// Otherwise, we set det as 0, sign = 1 take first row of matrix,
	// and multiply each element with determinant of minor matrix with alternating signs.
	int det=0,sign=1,k,i,j,minor[20][20];
	for(k=0;k<n;k++){	// Iterating through initial row
		for(i=0;i<n-1;i++){	// Generating minor matrix
			for(j=0;j<n-1;j++){
				if(j<k)
					minor[i][j]=mat[i+1][j];
				else
					minor[i][j]=mat[i+1][j+1];
			}
		}
		det=det+sign*mat[0][k]*determinant(minor,n-1);
		sign=sign*-1;
	}
	return det;
}
int main(){
	int n,matrix[20][20],i,j;
	printf(" Enter Order : ");
	scanf("%d",&n);
	printf(" Enter Matrix :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&matrix[i][j]);
	printf(" Determinant is  %d ",determinant(matrix,n));
}


//	Program to find invers of a given NxN matrix 
#include<stdio.h>
// Refer 2_Determinant.c
float determinant(float mat[20][20],int n){
	if(n==1)
		return mat[0][0];
	float det=0,sign=1,minor[20][20];
	int k,i,j;
	for(k=0;k<n;k++){	
		for(i=0;i<n-1;i++){
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

// Finds adjoint of mat and stores it in adj
void Adjoint(float mat[20][20],float adj[20][20],int n){
	float t1,t2;
	int i,j,k,l,sign=1;
	for(l=0;l<n;l++){
		for(k=0;k<n;k++){	// To find adj[l][k]
			float temp[20][20];// temporary matrix to find determinant of
			for(i=0;i<n-1;i++){
				for(j=0;j<n-1;j++){
					int x,y;
					if(i<l)
						x=i;
					else
						x=i+1;
					if(j<k)
						y=j;
					else
						y=j+1;
					temp[i][j]=mat[x][y];
				}
			}
			sign=(l+k)%2?-1:1;
			adj[k][l]=sign*determinant(temp,n-1); // changed order(k,l) to get transpose, rather than [l][k]

		}
	}
}
int main(){
	int n,i,j;
	float det,mat[20][20],ans[20][20];
	printf(" Enter Order : ");
	scanf("%d",&n);
	printf(" Enter Matrix :\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%g",&mat[i][j]);
	det=determinant(mat,n);
	if(det==0){
		printf(" No inverse, singular matrix \n");
		return 0;
	}

	Adjoint(mat,ans,n);
	printf("Inverse Matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			ans[i][j]=ans[i][j]/det;
			printf("%g ",ans[i][j]);
		}
		printf("\n");
	}
}


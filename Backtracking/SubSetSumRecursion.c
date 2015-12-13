#include<stdio.h>
int a[100]={3,5,1,4,2};

int isSum(int n,int sum){
	if(sum==0)
		return 1;
	if(n==0)
		return 0;
	
	if(isSum(n-1,sum-a[n-1])){
		printf("%d ",a[n-1]);
		return 1;
	}
	return isSum(n-1,sum);
}
int main(){
	
	printf("%d ",isSum(5,7));
}

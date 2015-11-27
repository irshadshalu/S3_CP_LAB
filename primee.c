#include<stdio.h>
int a[100000],primes[1000];
int main(){
	int n,i,j;
	for(i=0;i<100000;i++)
		a[i]=0;
	for(i=2;i<3170;i++){
		if(a[i]==0)
			for(j=i;i*j<100000;j++)
				a[i*j]=1;
	}
	j=0;
	for(i=2;i<100000&&j<1000;i++)
		if(a[i]==0)
			primes[j++]=i;
	printf("Enter n : ");
	scanf("%d",&n);

	if(a[n]==0)
		printf(" Number itself is prime \n");

}

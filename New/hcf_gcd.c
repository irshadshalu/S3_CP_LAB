#include<stdio.h>
int gcd(int a,int b){
	int t;
	while(b!=0){
		t=b;
		b=a%b;
		a=t;
	}
	return a;
}
int hcf(int a,int b){
	return (a*b)/(gcd(a,b));
}
int main(){
	int a,b;
	printf(" Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	printf(" GCD = %d \n HCF = %d\n",gcd(a,b),hcf(a,b));
}

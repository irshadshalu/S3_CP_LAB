#include<stdio.h>
#include<math.h>
void  toBinary(char res[],int bitlength,int number){  // stores binary of a number with certain bitlength to the res string
	int i;
	for(i=0;i<bitlength;i++)
		res[i]='0';
	res[bitlength]='\0';
	i=bitlength-1;
	while(number>0){
		if(number%2==1)
			res[i]='1';
		number=number/2;
		i--;
	}
}
int count(char s[],int n){
	int res=0,i;
	for(i=0;i<n;i++)
		if(s[i]=='1')
			res++;
	return res;
}
int main(){
	int sum,n,k,set[100],i,j,sol,min;
	char s[100];
	printf(" ENter No of elements : ");
	scanf("%d",&n);
	printf(" Enter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&set[i]);
	printf(" Enter K : ");
	scanf("%d",&k);
	sol=-1;
	min=999999;
	for(i=1;i<pow(2,n);i++)
	{
		sum=0;
		toBinary(s,n,i);
		for(j=0;j<n;j++)
			if(s[j]=='1')
				sum+=set[j];
		if(sum==k&&min>count(s,n)){
			min=count(s,n);
			sol=i;
		}
		//	printf("%s\n",s);

	}
	toBinary(s,n,sol);
//	printf("%s\n",s);
	printf(" Optimal Solution is  : ");
	for(j=0;j<n;j++)
		if(s[j]=='1')
			printf("%d ",set[j]);
	printf("\n");
}

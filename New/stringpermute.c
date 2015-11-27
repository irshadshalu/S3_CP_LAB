#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char a[],int l,int r){
	int i;
	if(l==r){
		printf("%s\n",a);
	}
	else {
		for(i=l;i<=r;i++){
			swap(a+l,a+i);
			permute(a,l+1,r);
			swap(a+l,a+i);
		}
	}
}
int main(){
	char s[1000];
	printf(" Enter A String : \n");
	scanf("%s",s);
	permute(s,0,strlen(s)-1);
}


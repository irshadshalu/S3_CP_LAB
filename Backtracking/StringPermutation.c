#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){	// Normal pointer swap function
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void permute(char a[],int l,int r){	// Permutation by backtracking, l=left,r=right(to remember)
	int i;
	if(l==r){	// if we reach end of these series of swaps, this is a permutation.
		printf("%s\n",a);
	}
	else {			// Otherwise,
		for(i=l;i<=r;i++){ // iterate through elements,
			swap(a+l,a+i);	// Swap two adjacent elements.
			permute(a,l+1,r);	// Go this way and checkout this permutation
			swap(a+l,a+i);		// Swap them back,(Backtracking)
		}
	}
}
int main(){
	char s[1000];
	printf(" Enter A String : \n");
	scanf("%s",s);
	permute(s,0,strlen(s)-1);
}


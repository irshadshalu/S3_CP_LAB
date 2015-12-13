#include<stdio.h>
int main(){
	int a[100],n,i,j;
	printf(" Enter no of elements : ");
	scanf("%d",&n);
	printf(" Enter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				int temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
	printf("Sorted array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

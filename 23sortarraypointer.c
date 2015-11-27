#include<stdio.h>
void sort(int *a,int n)
{
	int i=0;
	while(i<n)
	{
		if(i==0||*(a+i)>=*(a+i-1))
			i++;
		else{
			int temp;
			temp=*(a+i);
			*(a+i)=*(a+i-1);
			*(a+i-1)=temp;
			i--;
		}

	}
}
int main()
{
	printf(" Enter N : ");
	int n,a[100],i;
	scanf("%d",&n);
	printf(" Enter elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	printf(" Sorted elements are : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

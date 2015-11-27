#include<stdio.h>
int binarysearch(int a[],int key,int beg,int end)
{
	if(beg>end)
		return -1;
	int mid=(beg+end)/2;

	if(a[mid]==key)
		return mid;
	else if(a[mid]>key)
		return binarysearch(a,key,beg,mid-1);
	else
		return binarysearch(a,key,mid+1,end);
}
int linearsearch(int a[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]==key)
			return i;
	return -1;
}

int main()
{
	int n,i,a[1000],key;
	printf(" Enter number of elements : ");
	scanf("%d",&n);
	printf(" Enter Array in sorted order  : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf(" Enter Element to search : ");
	scanf("%d",&key);
	printf(" Binary search : \n ");
	i=binarysearch(a,key,0,n);
	if(i==-1)
		printf(" Element not found \n");
	else
		printf(" Element found at position %d \n\n",i+1);
	printf(" Linear search : \n");
	i=linearsearch(a,key,n);
	if(i==-1)
		printf(" Element not found \n");
	else
		printf(" Element found at position %d ",i+1);
}


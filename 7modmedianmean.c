#include<stdio.h>
int main()
{
	int n,a[1000],i,j,temp,max,count,k=0,modes[1000];
	float mean=0,median;
	printf(" Enter no of elements : ");
	scanf("%d",&n);
	printf(" Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		mean+=((float)a[i]/n);
	}
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	max=count=1;	
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
			count++;
		else
		{
			if(count>max)
				max=count;
			count=1;
		}
	}
	if(max>1)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
				count++;
			else
			{
				if(count==max)
				{
					modes[k]=a[i];
					k++;
				}
				count=1;
			}
		}
	}
	if(n%2==0)
		median=(float)(a[n/2]+a[n/2-1])/2;
	else
		median=a[n/2]; 
	printf(" Mean is %.2f \n Median is %.2f \n",mean,median);
	if(k==0)
		printf(" No modes \n");
	else
	{
		if(k>1)
			printf(" Modes are : ");
		else
			printf(" Mode is  ");
		for(i=0;i<k;i++)
			printf("%d ",modes[i]);
		printf("\n");
	}

	//	 for(i=0;i<n;i++)printf("%d ",a[i]);
	return 0;

}

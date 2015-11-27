#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int n,i,a,j;
	struct node *first,*cur,*new;
	first=(struct node *) malloc(sizeof(struct node));
	first->next=NULL;
	printf("\nEnter n:");
	scanf("%d",&n);
	printf(" Enter the elements..");
	scanf("%d",&(first->data));
	for(i=1;i<n;i++)
	{
		scanf("%d",&a);
		new=(struct node *) malloc(sizeof(struct node));
		new->next=NULL;
		new->data=a;
		if(a<first->data)
		{
			new->next=first;
			first=new;
		}
		else
		{
			cur=first;
			do
			{
				if(cur->next==NULL)
				{
					cur->next=new;
					break;
				}
				else if(cur->data<=a && (cur->next)->data>=a)
				{
					new->next=cur->next;
					cur->next=new;
					break;
				}
				cur=cur->next;
			}while(1);
		}
	}
	cur=first;
	for(i=0;i<n;i++)
	{
		printf(" %d",cur->data);
		cur=cur->next;
	}
}

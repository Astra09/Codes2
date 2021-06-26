#include<stdio.h>
#include<conio.h>
int bsearch(int [],int ,int,int);
int flag=0;
void main()
{
	int a[10],i,j,n,item,pos,first,last;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Item");
	scanf("%d",&item);
	first=0;
	last=n-1;
	pos=bsearch(a,first,last,item);
	printf("Item found at position %d",pos);
	
}
int bsearch(int a[],int first,int last,int item)
{
	int mid;
	mid=(first+last)/2;
	if(item<a[mid])
	{
		bsearch(a,first,mid-1,item);
	}
	else if(item>a[mid])
	{
		bsearch(a,mid+1,last,item);
	}
	else
	{
		return mid+1;
	}
}

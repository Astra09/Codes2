#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,first,last,a[10],mid,item;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter item to search");
	scanf("%d",&item);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(item==a[mid])
		{
			printf("Item found at position %d",mid+1);
			break;
		}
		else if(item>a[mid])
		{
			first=mid+1;
		}
		else
		{
			last=mid-1;
		}
	}
	
}

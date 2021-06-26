#include<stdio.h>
#include<conio.h>
void mergesort(int,int);
void merge(int,int,int);
int a[100],n,b[100];
void main()
{
	int i,low,high;
	printf("Enter size of array ");
	scanf("%d",&n);
	printf("Enter array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
	mergesort(low,high);
	printf("Sorted Array \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void mergesort(int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(low,mid);
		mergesort(mid+1,high);
		merge(low,mid,high);
	}
	else
	{
		return;
	}
}

void merge(int low,int mid,int high)
{
	int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = a[l1++];

   while(l2 <= high)   
      b[i++] = a[l2++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

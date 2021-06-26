#include<stdio.h>
#include<conio.h>
int partition(int,int);
void quicksort(int,int);
int a[100],n;
void main()
{
	int i,p,q;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter Array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=0;
	q=n-1;
	quicksort(p,q);
	printf("Sorted Array");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void quicksort(int p,int q)
{
	int j;
	if(p<q)
	{
		j=partition(p,q);
		quicksort(p,j-1);
		quicksort(j+1,q);
	}
}

int partition(int lb,int ub)
{
	int i,j,key,temp;
	i=lb;
	j=ub;
	key=a[lb];
	while(i<j)
	{
		while(key>=a[i] && i<ub)
		{
			i=i+1;
		}
		while(key<=a[j])
		{
			j=j-1;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[lb];
	a[lb]=a[j];
	a[j]=temp;
	return j;
}

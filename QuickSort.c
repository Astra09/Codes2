#include<stdio.h>
#include<conio.h>
int partition(int,int);
int quicksort(int,int);
int a[100],n;
int main()
{
	int i,p,q,j;
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
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}

int quicksort(int p,int q)
{
	int j;
	if(p<q)
	{
		j=partition(p,q);
		quicksort(p,j-1);
		quicksort(j+1,q);
	}
	return 0;
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

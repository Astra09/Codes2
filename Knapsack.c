#include<stdio.h>
#include<conio.h>
struct store
{
	int p;
	int w;
	double r;
};
void sort(int);
void knapsack(int,int);
struct store arr[100];
void main()
{
	int n,i,cap;
	printf("Enter No of Items");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter profit and weight");
		scanf("%d %d",&arr[i].p,&arr[i].w);
		arr[i].r=(double)arr[i].p/arr[i].w;
	}
	printf("Enter Capacity");
	scanf("%d",&cap);
	sort(n);
	knapsack(n,cap);
}

void sort(int n)
{
	struct store temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j].r<arr[j+1].r)
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void knapsack(int n,int cap)
{
	int u,i;
	double x[10],tp=0.0;
	u=cap;
	for(i=0;i<n;i++)
	{
		x[i]=0.0;
	}
	for(i=0;i<n;i++)
	{
		if(arr[i].w>u)
		{
			break;
		}
		else
		{
			x[i]=1.0;
			tp=tp+arr[i].p;
			u=u-arr[i].w;
		}
	}
	if(i<n)
	{
		x[i]=(double)u/arr[i].w;
		tp=tp+(x[i]*arr[i].p);
		printf("%f",tp);
	}
}

#include<stdio.h>
#include<conio.h>
int max,min;
int m_m(int [],int,int);
void main()
{
	int i,j,a[10],n;
	printf("Enter size");
	scanf("%d",&n);
	printf("Enter Array");
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	i=0;
	m_m(a,i,n-1);
	printf("Maximum is %d ",max);
	printf("Minimum is %d",min);
}

int m_m(int a[],int i,int n)
{
	int max1,min1,mid;
	if(i==n)
	{
		max=min=a[i];
	}
	else if(i==n-1)
	{
		if(a[i]<=a[n])
		{
			max=a[n];
			min=a[i];
		}
		else
		{
			max=a[i];
			min=a[n];
		}
	}
	else
	{
		mid=(i+n)/2;
		m_m(a,i,mid);
		max1=max;
		min1=min;
		m_m(a,mid+1,n);
		if(max<max1)
		{
			max=max1;
		}
		if(min>min1)
		{
			min=min1;
		}
	}
	return 0;
}

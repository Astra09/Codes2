#include<stdio.h>
#include<conio.h>
void next_color(int);
int x[100],g[100][100],n;
int main()
{
	int i,j;
	printf("Enter no of nodes");
	scanf("%d",&n);
	printf("Enter adjacency matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		next_color(i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d color %d \n",i,x[i]);
	}
}

void next_color(int k)
{
	int i;
	x[k]=1;
	for(i=0;i<n;i++)
	{
		if(g[i][k]!=0 && x[k]==x[i])
		{
			x[k]=x[i]+1;
		}
	}
}

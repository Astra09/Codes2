#include<stdio.h>
int find(int);
int merge(int ,int);
int cost[100][100],p[10],ucomp,vcomp,a,b,u,v,mincost=0,min,n,nn=1,i,j;
int main()
{
	printf("Enter Value of nodes");
	scanf("%d",&n);
	printf("Enter Adjacency matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j]=999;
			}
		}
	}
	while(nn<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					u=a=i;
					v=b=j;
				}
			}
		}
			ucomp=find(u);
			vcomp=find(v);
			if(merge(u,v))
			{
				mincost=mincost+min;
			}
		cost[a][b]=cost[b][a]=999;
		nn++;
	}
	printf("Minimum Cost %d",mincost);
	
	return 0;
}

int find(int i)
{
	while(p[i])
	{
		i=p[i];
	}
	return i;
}

int merge(int i,int j)
{
	if(i!=j)
	{
		p[j]=i;
		return 1;
	}
	else
		return 0;
}

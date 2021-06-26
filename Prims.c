#include<conio.h>
#include<stdio.h>
int visit[20]={0};
void main()
{
	int ne=1,n,i,j,cost[10][10],mincost=0,u=1,v=1,min;
	printf("Enter no of nodes");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			{
				cost[i][j]=32767;
			}
		}
	}
	visit[1]=1;
	while(ne<n)
	{
		for(i=1;i<=n;i++)
		{
			min=32767;
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					if(visit[i]!=0)
					{
						min=cost[i][j];
						u=i;
						v=j;
					}
				}
			}
			if(visit[u]==0 || visit[v]==0)
			{
				visit[v]=1;
				mincost=mincost+min;
			}
		}
		cost[u][v]=cost[v][u]=32767;
		ne++;
	}
	printf("Minimum Cost %d",mincost);
}

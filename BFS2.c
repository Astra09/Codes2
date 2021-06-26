#include<stdio.h>
int BFS(int);
int G[10][10],visited[10]={0},n;
void main()
{
	int i,j;
	printf("Enter vertices");
	scanf("%d",&n);
	printf("Enter adjacency matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	BFS(0);
}

int BFS(int i)
{
	int j;
	printf("\n%d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
	if(visited[j]==0 && G[i][j]==1)
	BFS(j);
}

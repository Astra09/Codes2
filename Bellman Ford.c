#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],d[100][100],i,j,k,v,val,x,y,num,s,rel;
	printf("Enter no of vertices");
	scanf("%d",&v);
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			if(i==j)
			{
				d[i][j]=0;
			}
			else
			{
				d[i][j]=32767;
			}
		}
	}
	printf("Enter no of connections");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Enter  x and y and value");
		scanf("%d %d %d",&x,&y,&val);
		d[x][y]=val;
	}
	printf("Enter source");
	scanf("%d",&s);	
	for(i=1;i<=v;i++)
	{
		a[i]=32767;
	}
	a[s]=0;
	rel=v-1;
	for(i=1;i<=rel;i++)
	{
		for(j=1;j<=v;j++)
		{
			for(k=1;k<=v;k++)
			{
				if(a[j]+d[j][k]<a[k])
				{
					a[k]=a[j]+d[j][k];
				}
			}
		}
	}
	for(i=1;i<=v;i++)
	{
		printf("%d -> %d \n",i,a[i]);
	}
}

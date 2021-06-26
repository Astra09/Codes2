#include<conio.h>
#include<stdio.h>
int floy(int x,int y)
{
	if(x<y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int n,i,j,k,x,y,a[100][100];
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Enter adjacency matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				x=a[i][j];
				y=a[i][k]+a[k][j];
				a[i][j]=floy(x,y);
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
		
}

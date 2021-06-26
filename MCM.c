#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m[100][100],s[100][100],i,j,k,r,d[100],min,q;
	printf("Enter No of Matrix");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		printf("Enter value of d%d",i);
		scanf("%d",&d[i]);
	}
	for(r=1;r<n-1;r++)
	{
		for(i=1;i<n-r;i++)
		{
			j=i+r;
			min=32767;
			for(k=i;k<j;k++)
			{
				q=m[i][k]+m[k+1][j]+(d[i-1]*d[j]*d[k]);
				if(q<min)
				{
					min=q;
					s[i][j]=k;
				}
			}
			m[i][j]=min;
		}
	}
	printf("MMultliplication %d",m[1][n-1]);
}

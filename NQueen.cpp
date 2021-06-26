#include<stdio.h>
#include<conio.h>
#include<math.h>
void nq(int k,int n);
int place(int k,int i);
int x[1000];
int main()
{
	int n;
	scanf("%d",&n);
	nq(1,n);
	return 0;
}

void nq(int k,int n)
{
	int i,j,count=0;
	for(i=1;i<=n;i++)
	{
		if(place(k,i))
		{
			x[k]=i;
			if(k==n)
			{
				if(count==4)
				{
					printf("\n");
				}
				for(j=1;j<=n/2;j++)
				{
					printf("Row %d Place %d \n",j,x[j]);
					count=count+1;
				}
				for(j=(n/2)+1;j<=n;j++)
				{
					printf("Row %d Place %d \n",j,x[j]);
					count=count+1;
				}
			}
			else
			{
				nq(k+1,n);
			}
		}
	}
}

int place(int k,int i)
{
	int j;
	for(j=1;j<k;j++)
	{
		if((x[j]==i) || (abs(x[j]-i)==abs(j-k)))
		{
			return 0;
		}
	}
	return 1;
}

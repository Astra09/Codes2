#include<stdio.h>
void toi(int ,char,char,char);
void main()
{
	int n;
	printf("Enter number of disk");
	scanf("%d",&n);
	toi(n,'A','C','B');
}
void toi(int n,char from,char to,char aux)
{
	if(n==1)
	{
		printf("Move Disk 1 from %c to %c\n",from,to);
		return;
	}
	toi(n-1,from,aux,to);
	printf("Move Disk %d from %c
	 to %c\n",n,from,to);
	toi(n-1,aux,to,from);

}

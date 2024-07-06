#include<stdio.h>
int main()
{
	int i,j,n;	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||j==0||j<i)	a[i][j]=0;
			a[i][j+1]=a[i][j]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

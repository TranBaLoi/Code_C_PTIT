#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)	scanf("%d",&a[i][j]);
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)	printf("%d ",a[i][j]);
		printf("\n");
	}
}

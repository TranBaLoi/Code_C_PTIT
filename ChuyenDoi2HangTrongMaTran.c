#include<stdio.h>
int main()
{
	int n,m,i,j,a,b;
	scanf("%d %d",&n,&m);
	int matrix[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)	scanf("%d",&matrix[i][j]);
	}
	scanf("%d%d",&a,&b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==a-1)	printf("%d ",matrix[b-1][j]);
			else if(i==b-1)	printf("%d ",matrix[a-1][j]);
			else printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int n,m,i,j;	scanf("%d%d",&n,&m);
	int matrix[n][m],a,b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)	scanf("%d",&matrix[i][j]);
	}
	scanf("%d%d",&a,&b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j==a-1)	printf("%d ",matrix[i][b-1]);
			else if(j==b-1)	printf("%d ",matrix[i][a-1]);
			else printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

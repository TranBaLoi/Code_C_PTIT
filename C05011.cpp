#include<stdio.h>
#include<math.h>
int main()
{
	int t,r=1;	scanf("%d",&t);
	while(r<=t)
	{
		int n,m,i,j,k;	scanf("%d%d",&n,&m);
		int a[n][m],b[m][n],matrix[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	scanf("%d",&a[i][j]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)	b[i][j]=a[j][i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				matrix[i][j]=0;
				for(k=0;k<m;k++)	matrix[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("Test %d:\n",r);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	printf("%d ",matrix[i][j]);
			printf("\n");
		}
		printf("\n");
		++r;
	}
}

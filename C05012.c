#include<stdio.h>
#include<math.h>
int main()
{
	int t,r=1;	scanf("%d",&t);
	while(r<=t)
	{
		int n,i,j,k;	scanf("%d",&n);
		int a[100][100]={0},b[n][n],matrix[n][n];
		for(i=0;i<n;i++)
		{
			int ex=1;
			for(j=0;j<=i;j++)
			{
				a[i][j]=ex;
				++ex;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	b[i][j]=a[j][i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				matrix[i][j]=0;
				for(k=0;k<n;k++)	matrix[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("Test %d:\n",r);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	printf("%d ",matrix[i][j]);
			printf("\n");
		}
		++r;
		printf("\n");
	}
}

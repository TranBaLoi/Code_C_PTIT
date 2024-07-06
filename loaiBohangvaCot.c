#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		int m,n,i,j;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	scanf("%d",&a[i][j]);
		}
		printf("Test %d:\n",k);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==0||j==0)	continue;
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}

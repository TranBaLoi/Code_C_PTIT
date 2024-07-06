#include<stdio.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,m,j,i,k;
		scanf("%d%d%d",&n,&m,&k);
		int a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	scanf("%d",&a[i][j]);
		}
		for(i=0;i<n;i++)
		{
			int dao,u=1;
			while(i+u<n)
			{
				if(a[i][k-1]>a[i+u][k-1])
				{
					dao=a[i][k-1];
					a[i][k-1]=a[i+u][k-1];
					a[i+u][k-1]=dao;
				}
				++u;	
			}
			
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	printf("%d ",a[i][j]);
			printf("\n");
		}
	}
}

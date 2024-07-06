#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j,k,r,dao;
		scanf("%d%d%d",&n,&m,&k);
		int a[n][m];
		int b[n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	scanf("%d",&a[i][j]);
		}
		r=0;
		for(i=0;i<n;i++)
		{
			b[r]=a[i][k-1];
			++r;
		}
		for(r=n-1;r>-1;r--)	
		{
			if(b[r]<b[r-1])
			{
				
			}
		}
		
	}
}

#include<stdio.h>
int main()
{
	int t,k=1;	scanf("%d",&t);
	while(k<=t)
	{
		int n,m,i,j,sum=0,max=0,l,r;	scanf("%d%d",&n,&m);
		int a[n][m],b[10000]={0};
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)	scanf("%d",&a[i][j]);
		}
		for(i=0;i<n;i++)
		{
			sum=0;
			for(j=0;j<n;j++)	sum+=a[i][j];
			if(max<sum)
			{
				max=sum;
				l=i;	
			}	
		}
		max=0;
		for(i=0;i<n;i++)
		{
			if(i!=l)
			{
				for(j=0;j<m;j++)
				{
					b[j]=b[j]+a[i][j];
				}
			}
		}
		for(i=0;i<m;i++)
		{
			if(max<b[i])
			{
				max=b[i];
				r=i;
			}
		}
		printf("Test %d:\n",k);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i!=l&&j!=r)	printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		++k;
	}
}

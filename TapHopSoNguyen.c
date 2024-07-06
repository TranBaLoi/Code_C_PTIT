#include<stdio.h>
int main()
{
	int n,m,i,j,dao;	scanf("%d%d",&n,&m);
	int a[n],b[m],cnt1[10000]={0},cnt2[10000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		++cnt1[a[i]];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				dao=a[i];
				a[i]=a[j];
				a[j]=dao;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		++cnt2[b[i]];
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				dao=b[i];
				b[i]=b[j];
				b[j]=dao;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(cnt1[a[i]]>=1&&cnt2[a[i]]>=1)
		{
			printf("%d ",a[i]);
			cnt1[a[i]]=0;
			cnt2[a[i]]=0;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(cnt1[a[i]]>=1)
		{
			printf("%d ",a[i]);
			cnt1[a[i]]=0;
		}
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		if(cnt2[b[i]]>=1 )
		{
			printf("%d ",b[i]);
			cnt2[b[i]]=0;	
		}	
	}
}

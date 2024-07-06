#include<stdio.h>
int main()
{
	int cnt[10000]={0};
	int i,n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		cnt[a[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(cnt[a[i]]==1) ++dem;
	}
		printf("%d\n",dem);
	for(i=0;i<n;i++)
	{
		if(cnt[a[i]]==1)
		{
			printf("%d ",a[i]);
		}
	}}

#include<stdio.h>
int main()
{
	int n,i,j,dem=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	int cnt[100000];
	for(i=0;i<n;i++)	cnt[a[i]]++;
	for(i=0;i<n;i++)
	{
		if(cnt[a[i]]>1)	++dem;
		cnt[a[i]]=0;
	}
	for(i=0;i<n;i++)	cnt[a[i]]++;
	printf("%d\n",dem);
	for(i=0;i<n;i++)
	{
		if(cnt[a[i]]>1)
		{
			printf("%d ",a[i]);
			cnt[a[i]]=0;
		}
	}
	
}

#include<stdio.h>
int main()
{
	int cnt[10000]={0};
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)	cnt[a[i]]++;
	for(i=0;i<n;i++)
	{
		if(cnt[a[i]]!=0)
		{
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]]=0;
		}
	}
}

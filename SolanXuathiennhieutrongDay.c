#include<stdio.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i,max=0;	scanf("%d",&n);
		int a[n],cnt[100000]={0};
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			++cnt[a[i]];
		}
		for(i=0;i<n;i++)
		{
			if(max<cnt[a[i]])	max=cnt[a[i]];
		}
		for(i=0;i<n;i++)
		{
			if(max==cnt[a[i]]&&cnt[a[i]]!=0)
			{
				printf("%d ",a[i]);
				cnt[a[i]]=0;
			}
		}
		printf("\n");
	}
}

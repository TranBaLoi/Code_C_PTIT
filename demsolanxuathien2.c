#include<stdio.h>
int main()
{
	int t,k;
	int a[10000],cnt[10000]={0};
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		int i,n;
		scanf("%d",&n);
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)	cnt[a[i]]++;
		printf("Test %d:\n",k);
		for(i=0;i<n;i++)
		{
			if(cnt[a[i]]!=0)
			{
				printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]);
				cnt[a[i]]=0;
			}
		}
	}
	return 0;
}

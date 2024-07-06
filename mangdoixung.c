#include<stdio.h>
#include<math.h>

int main()
{
	long long a[100000],n,i;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int cnt=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n/2;i++)
		{
			if(a[i]==a[n-1-i])	++cnt;
		}
		if(cnt==n/2)	printf("YES\n");
		else printf("NO\n");
	}
}

#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,i;
		int cnt=0;
		scanf("%lld",&n);
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				if(i%2==0)	++cnt;
			}
		}
		if(n%2==0)	cnt=cnt+1;
		printf("%d\n", cnt);
	}

}


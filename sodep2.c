#include<stdio.h>
#include<math.h>
int check(long long n)
{
	long long m=n,sum=0,dao=0,i;
	while(m>0)
	{
		i=m%10;
		dao=dao*10+i;
		sum+=i;
		m/=10;
	}
	if(sum%10==0 && dao==n)	return 1;
	else return 0;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n;	scanf("%d",&n);
		long long i,cnt=0;
		long long a=pow(10,n-1);
		long long b=pow(10,n);
		for(i=a;i<b;i++)
		{
			if(check(i))	++cnt;
		}
		printf("%lld\n",cnt);
	}
}

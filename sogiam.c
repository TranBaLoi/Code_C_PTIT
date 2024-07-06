#include<stdio.h>
#include<math.h>
long long ktra(long long n)
{
	int m,r;
	while(n>10)
	{
		m=n%10;
		r=(n/10)%10;
		n /=10;
		if(m>=r)	return 0;
	}
	return 1;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long i,a,b;
		int cnt=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(ktra(i)==1)	++cnt;
		}
		printf("%d\n",cnt);
	}
}

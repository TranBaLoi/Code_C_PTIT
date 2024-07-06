#include<stdio.h>
#include<math.h>
long long dao(long long a)
{
	long long b=a;
	long long dao=0;
	while(b>0)
	{
		dao= dao*10 + b%10;
		b /= 10;
	}
	if(dao==a)	return 1;
	else return 0;
}
long long sole(long long a)
{

		int cnt=0;
		int b;
		while(a>0)
		{
			b=a%10;
			if(b%2==0)	return 0;
			cnt	+= b;
			a /=10;
		}	
		if(cnt%2==0)	return 0;
		else return 1;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(sole(n)==1 && dao(n)==1) printf("YES\n");
		else printf("NO\n");
	}
	
}

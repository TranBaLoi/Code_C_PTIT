#include<stdio.h>
#include<math.h>
int dao(long long n)
{
	int m=n;
	int dao=0,r;
	while(m>0)
	{
		r=m%10;
		if(r==4)	return 0;
		dao=dao*10 + r;
		m /=10;
	}
	if(dao==n)	return 1;
	else return 0;
}
int chiahet(long long n)
{
	int cnt=0;
	int m;
	while(n>0)
	{
		m=n%10;
		cnt += m;
		n /= 10;
	}
	if(cnt%10==0)	return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long i,a,b;
		int n;
		scanf("%d",&n);
		a=pow(10,n-1);
		b=pow(10,n);
		for(i=a;i<=b;i++)
		{
			if(dao(i)==1&&chiahet(i)==1)	printf("%lld ",i);
		}
		printf("\n");
	}
	
}

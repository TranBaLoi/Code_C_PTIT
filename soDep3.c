#include<stdio.h>
#include<math.h>
int check(long long n)
{
	long long i,m,cnt=0,sum=0;
	while(n>0)
	{
		m=n%10;
		if(m==6)	++cnt;
		sum+=m;
		n/=10;
	}
	if(cnt>0&&(sum%10)==8)	return 1;
	else return 0;
}
int check1(long long n)
{
	long long dao=0,m=n;
	while(m>0)
	{
		dao=dao*10+m%10;
		m/=10;
	}
	if(dao==n)	return 1;
	else return 0;
}
int main()
{
	long long a,b,c,i;	scanf("%lld%lld",&a,&b);
	if(a>b)
	{
		c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++)
	{
		if(check(i)&&check1(i))	printf("%lld ",i);
	}
}

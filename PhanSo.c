#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a,ll b)
{
	if(b==0)	return a;
	return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
	return a*b/gcd(a,b);
}
int main()
{
	ll t,r=1;	scanf("%lld",&t);
	while(r<=t)
	{
		ll a1,b1,a2,b2;	scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
		ll x=a1,z=a2;
		a1=a1/gcd(a1,b1);
		b1=b1/gcd(x,b1);
		a2=a2/gcd(a2,b2);
		b2=b2/gcd(z,b2);
		ll x1=lcm(b1,b2);
		printf("Case #%lld:\n",r);
		printf("%lld/%lld ",a1*x1/b1,x1);
		printf("%lld/%lld\n",a2*x1/b2,x1);
		printf("%lld/%lld\n",(a1*x1/b1 + a2*x1/b2)/gcd(a1*x1/b1 + a2*x1/b2,x1),x1/gcd(a1*x1/b1 + a2*x1/b2,x1));
		printf("%lld/%lld\n",(a1*b2)/gcd(a1*b2,a2*b1),(b1*a2)/gcd(a1*b2,a2*b1));
		++r;
		
	}
}

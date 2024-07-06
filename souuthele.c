#include<stdio.h>
#include<math.h>
int ktra(long long n)
{
	if(n%2==0)	return 0;
	int chan=0,le=0;
	while(n>0)
	{
		int m;
		m=n%10;
		if(m%2==0)	++chan;
		else ++le;
		n /= 10;
	}
	if(chan>le)	return 0;
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
		if(ktra(n)==1)	printf("YES\n");
		else printf("NO\n");
		
	}
}

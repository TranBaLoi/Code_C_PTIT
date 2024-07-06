#include<stdio.h>
#include<math.h>
int ktra(long long n)
{
	int m;
	
	while(n>0)
	{
		m=n%10;
		n=n/10;
		if(m%2!=0) return 0;
		
	}
	if(m%2==0)	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(ktra(n)==1)	printf("YES\n");
		else printf("NO\n");
	}
}

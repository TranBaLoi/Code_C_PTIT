#include<stdio.h>
long long UCLN(long long a,long long b)
{
	if(b==0)	return a;
	return UCLN(b,a%b);
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i;	scanf("%d",&n);
		long long res=1;
		for(i=2;i<=n;i++)
		{
			res=res*i/UCLN(res,i);
		}
		printf("%lld\n",res);
	}
}

#include<stdio.h>
#include<math.h>
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
		int n,m;	scanf("%d%d",&n,&m);
		int i;
		long long res=1;
		for(i=n;i<=m;i++)
		{
			res=res*i/UCLN(res,i);
		}
		printf("%lld\n",res);
	}
}

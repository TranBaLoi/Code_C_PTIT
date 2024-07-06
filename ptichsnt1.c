#include<stdio.h>
#include<math.h>
void ptich(long long n)
{
	int i,cnt=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n=n/i;
				++cnt;
			}
			if(n==1)	printf("%d^%d",i,cnt);
			if(n!=1)	printf("%d^%d * ",i,cnt);
		}
		cnt=0;
	
	}
	if(n!=1)	printf("%d^1", n);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		printf("%d = ",n);
		ptich(n);
		printf("\n");
	}
}

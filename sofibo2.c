#include<stdio.h>
int check(long long n)
{
		long long a[100];
		int i;
		a[0]=0;a[1]=1;
		for(i=2;i<=92;i++)
		{
			a[i]=a[0]+a[1];
			a[0]=a[1];
			a[1]=a[i];
			if(n==a[i])	return 1;
		}
		
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		long long n;	scanf("%lld",&n);
		if(check(n)==1)	printf("YES\n");
		else printf ("NO\n");
		
	}
}

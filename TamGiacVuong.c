#include<stdio.h>
#include<math.h>
#define ll long long
void sort(ll a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				int dao=a[j];
				a[j]=a[j+1];
				a[j+1]=dao;
			}
		}
	}
}
int check(ll a[],int n)
{
	int i;
	for(i=n-1;i>=2;i--)
	{
		int l=0,r=i-1;
		while(l<r)
		{
			if(a[l]+a[r]==a[i])	return 1;
			else if(a[l]+a[r] > a[i])	--r;
			else ++l;	
		}
	}
	return 0;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i;	scanf("%d",&n);
		ll a[n];
		for(i=0;i<n;i++)
		{
			ll x;	scanf("%lld",&x);
			a[i]=x*x;
		}
		sort(a,n);
		if(check(a,n))	printf("YES\n");
		else printf("NO\n");
	}
}

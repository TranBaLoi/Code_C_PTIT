#include<stdio.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;	scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		long long sum1=0,sum2=-1e9;
		for(i=0;i<n;i++)
		{
			sum1+=a[i];
			if(sum1>sum2)	sum2=sum1;
			if(sum1<0)	sum1=0;
		}
		printf("%lld\n",sum2);
	}
}

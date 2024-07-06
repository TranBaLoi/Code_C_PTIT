#include<stdio.h>
#include<math.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		long long n,i,k=0,max=0,a[10000];	scanf("%lld",&n);
		for(i=2;i<=sqrt(n)+10;i++)
		{
			if(n%i==0)
			{
				while(n%i==0)
				{
					a[k]=i;
					if(max<a[k])	max=a[k];
					++k;
					n/=i;
					
				}
			}
		}
		if(n!=1)
		{
			if(n>max)	max=n;
		}
		
		printf("%lld\n",max);
		
	}
}

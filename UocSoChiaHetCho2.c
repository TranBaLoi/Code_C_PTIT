#include<stdio.h>
#include<math.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		long long a,i,sum=0;	scanf("%lld",&a);
		for(i=1;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				if(i%2==0 && (a/i)%2==0 && i!=(a/i))	sum+=2;
				else if(i%2==0 || (a/i)%2==0)	sum++;
			}
		}
		printf("%lld\n",sum);
	}
}

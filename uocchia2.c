#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
	
		long long n,i;
		scanf("%lld",&n);
		if(n%2!=0)	printf("0\n");
		if(n%2==0)
		{
			int cnt=0;
			for(i=1;i<=sqrt(n);i++)
			{
				if(n%i==0)
				{
					int m=n/i;
					if(m%2==0&&i%2==0&&m!=i)	cnt+=2;
					if(m%2==0&&i%2==0&&m==i)	cnt+=1;
					if(m%2==0&&i%2!=0)	cnt+=1;
					if(m%2!=0&&i%2==0)	cnt+=1;
				}
				
				
			}
			printf("%d\n",cnt);
		}
	}
}

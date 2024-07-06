#include<stdio.h>
#include<math.h>
int main()
{
	long long t,n,m;
	long long a;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &a);
		while(a>=0)
		{
		
		m=a%10;
		a=a/10;
		n=a%10;
		if(n>m)
		{
			printf("NO\n");
			break;
		}
		if(a==0)
		{
			printf("YES\n");
			break;
		}
		
		}
	}
}

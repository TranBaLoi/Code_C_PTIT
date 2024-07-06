#include<stdio.h>
#include<math.h>
int ptich(long long n)
{
	int i,cnt=0;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				if(i==2)	++cnt;
				n/=i;
			}
		}
	}
	return cnt;
}
int main()
{
	int n,m;
	int i;
	int sum=0;
	scanf("%d%d",&n,&m);
	for(i=2;i<=n;i=i+2)
	{
		int a=ptich(i);
		sum += a;
		
	}
	if(sum>=m)	printf("Yes");
	else printf("No");

}

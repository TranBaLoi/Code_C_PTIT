#include<stdio.h>
#include<math.h>
int nto(int a)
{
	int i,cnt=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)	++cnt;
		
	}
	if(cnt==0)	return 1;
	else return 0;
}
int dao(int a)
{
	int b=a;
	int dao=0;
	while(b>0)
	{
		dao=dao*10 + b%10;
		b /= 10;
	}
	if(dao==a)	return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		int i,cnt=0;
		for(i=a;i<=b;i++)
		{
			if(nto(i) && dao(i))	
			{
				printf("%d ",i);
				++cnt;
			if(cnt==10)	
			{
				printf("\n");
				cnt=0;
			}
			}
		}
		printf("\n");	
	}

}

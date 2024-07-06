#include<stdio.h>
#include<math.h>
void str(long long a)
{
	int sum=0;
	long long i,b;
	long long c=a;
	while(c>0)
	{
		b=c%10;
		int temp=1;
		for(i=1;i<=b;i++)
		{
			temp=temp*i;
		}
		sum=sum+temp;
		c=c/10;
	}
	if(sum==a)	printf("%lld ",a);
}
int main()
{
	long long a,b;
	int i;
	scanf("%lld%lld", &a,&b);
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			str(i);
		}
	}
	else
	{
		for(i=b;i<=a;i++)
		{
			str(i);
		}
	}
}

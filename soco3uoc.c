#include<stdio.h>
#include<math.h>
//so co 3 uoc la so chinh phuong co can la snt
int check(long long n)
{
	if(n<2)	return 0;
	long long i;
	int cnt=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long i,a,b;
		int cnt=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i*i<=b;i++)
		{
			if(check(i)==1)	++cnt;
		}
		printf("%d\n",cnt);
	}
}

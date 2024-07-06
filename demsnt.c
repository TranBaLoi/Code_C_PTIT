#include<stdio.h>
#include<math.h>
int nto(int n)
{
	if(n==1)	return 0;
	int i,cnt=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	++cnt;
	}
	if(cnt==0)	return 1;
	return 0;
}
int nto1(int n)
{
	if(n==1)	return 0;
	int m;
	while(n>0)
	{
		m=n%10;
		if(nto(m)==0 || m==0)	return 0;
		n /= 10;
		
	}
	if(nto(n)==0)	return 0;
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		int i;
		for(i=a;i<=b;i++)
		{
			if(nto(i)==1 && nto1(i)==1)	++dem;
		}
		
		printf("%d\n",dem);
	}
}

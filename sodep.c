#include<stdio.h>
#include<math.h>
int nto(int n)
{	if(n==1 || n==0)	return 0;
	int i;
	int cnt=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) ++cnt;
	}
	if(cnt==0)	return 1;
	return 0;
}
int fibo(int n)
{
	if(n==1 || n==0)	return 0;
	if(n==2||n==3||n==5)	return 1;
	int m=n;
	int sum=0;
	while(m>0)
	{
	
		int a=m%10;
		sum=sum+a;
		m=m/10;
	}

	int i;
	int f0=0,f1=1;
	int fn;
	for(i=1;i<50;i++)
	{
		fn=f0+f1;
		if(sum==fn)	return 1;
		f0=f1;
		f1=fn;
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d%d", &a,&b);
	if(a<b)
	{
		int i;
	for(i=a;i<=b;i++)
	{
		if(nto(i)==1 && fibo(i)==1)	printf("%d ", i);
	}
	}
	if(a>b)
	{
		int i;
	for(i=b;i<=a;i++)
	{
		if(nto(i)==1 && fibo(i)==1)	printf("%d ", i);
	}
	}
}

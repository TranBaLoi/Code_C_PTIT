#include<stdio.h>
#include<math.h>
void fibo(long long n)
{
	//cong thuc binet voi n <<
	long long a=5*n*n+4;
	long long b=5*n*n-4;
	long long c=sqrt(a),d=sqrt(b);
	if(c*c==a || d*d==b)	printf("1");
	else printf("0");
}
int fibonaci(int n)
{
	if(n==0 || n==1)	return 1;
	long long f0=0;
	long long f1=1;
	long long fn,i;
	for(i=1;i<92;i++)
	{
		fn=f1+f0;
		if(fn==n)	return 1;
		f0=f1;
		f1=fn;
	}
	return 0;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if(fibonaci(n)) printf("1");
	else	printf("0");
}

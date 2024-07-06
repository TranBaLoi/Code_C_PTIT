#include<stdio.h>
#include<math.h>

int ktra(long long n)
{
	int a,b;
	while(n>0)
	{
		a=n%10;
		b=(n/10) % 10;
		n /= 10;
		if(b>a)	return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	
	int n;
	scanf("%d", &n);
	long long i;
	int a=pow(10,n-1)+1;
	int b=pow(10,n);
	for(i=a;i<b;i++)
	{
		if(ktra(i)==1)	printf("%lld ",i);
	}
	printf("\n");
}
}

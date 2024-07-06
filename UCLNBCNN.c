#include<stdio.h>
#include<math.h>
long long UCLN(long long a, long long b)
{
	if(b==0)	return a;
	if(a==0)	return b;
	while(a>0)
	{
		if(a>b)	a=a-b;
		else if (a==b)	return a;
		else 	b=b-a;
	}

}
int main()
{

	long long a,b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", UCLN(a,b));
	printf("%lld", a*b/UCLN(a,b));
}


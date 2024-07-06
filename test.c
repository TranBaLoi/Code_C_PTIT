#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long
ll gcd(ll a,ll b)
{
	if(b==0)	return a;
	return gcd(b,a%b);
}
int main()
{
	int a=8,b=8;
	printf("%d",gcd(a,b));
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int thuannghich(char a[])
{
	int l=0,r=strlen(a)-1;
	while(l>r)
	{
		if(a[l]!=a[r])	return 0;
		l++;
		r--;
	}
	return 1;
}
int check(long long n)
{
	int i,sum=0;
	while(n>0)
	{
		i=n%10;
		sum+=i;
		n/=10;
	}
	return sum;
}
int main()
{
	int n=pow(10,2);	
	char a[100] = "n";
	printf("%lld",atoll(a));
}

#include<stdio.h>
#include<math.h>
int check1(int a)
{
	int i;
	if(a<2)	return 0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)	return 0;
	}
	return 1;
}
int check2(int n)
{
	int i,m,sum=0;
	while(n>0)
	{
		m=n%10;
		if(check1(m)==0)	return 0;
		sum+=m;
		n/=10;
	}
	if(check1(sum)==0)	return 0;
	return 1;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int a,b,i,cnt=0;	scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(check1(i) && check2(i))	++cnt;
		}
		printf("%d\n",cnt);
	}
	return 0;
}

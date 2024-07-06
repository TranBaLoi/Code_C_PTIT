#include<stdio.h>
#include<math.h>
void uc(int a, int b)
{	int c=a*b;
	while(a>0)
	{
		if(a>b)	a=a-b;
		if(a<b)	b=b-a;
		if(a==b)
		{
			printf("%d %d\n",c/a,a);
			break;
		}
	}
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		uc(a,b);
	}
}

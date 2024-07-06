#include<stdio.h>
#include<math.h>
long long uc(long long a, long long b)
{
	
		while(a>0)
		{
			if(a>b)	a=a-b;
			if(b>a)	b=b-a;
			if(b==a)	return a;
		}
	
		
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b, &c, &d);
		if(uc(a,b)==uc(c,d))	printf("YES\n");
		else	printf("NO\n");
	}
}


#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,tong;
	long long int a,b,c,d;
	scanf("%d",&n);
	tong =0;
	for(i=1; i<=n ; i++)
	{
		scanf("%lld",&a);
		c=sqrt(a);
  	for(b=1;b<=c;b++)
		{
			d=a%b;
			if(d==0)
				tong= tong+1;
		}
	if(tong<2)
		printf("YES\n");
	else
		printf("NO\n");
	tong=0;		
	}
}

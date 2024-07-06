#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,tong,m;
	scanf("%d", &t);
	
	while(t--)
	{
		tong=0;
		scanf("%d", &n);
		while(n>=10)
		{
			m=n%10;
			tong=tong+m;
			n=n/10;
			
		}
		tong=tong+n;
		if(tong%10==0)	printf("YES\n");
		else	printf("NO\n");
		
	}
}

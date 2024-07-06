#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,b;
	int i,a,m;
	scanf("%d", &a);
	
	for(i=1; i<=a ; i++)
	{
		scanf("%lld",&n);
		b=n%10;
		while(n>=10)
		
			n=n/10;
	
	if(b==n)
		printf("YES\n");
	else
		printf("NO\n");	
	}
}

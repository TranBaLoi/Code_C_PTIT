#include<stdio.h>
#include<math.h>
void pt(int n)
{
	int i;
	for(i=2; i<=n/2; i++)
	{
		while(n%i==0 && n>1)
		{
			printf("%d ", i);
			n=n/i;
		}
	}
	if(n!=1)	printf("%d \n",n);
}
int main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%lld",&n);
	
		pt(n);
		printf("\n");
	
	}
}

#include<stdio.h>
#include<math.h>
int check(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(check(i)==1)
		{
			if(check(n-i)==1)	printf("%d %d ",i,n-i);
		}
	}
	printf("\n");
	}
}

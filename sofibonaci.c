#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a[100000];
	int i,n;
	a[0]=1;
	a[1]=1;
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		a[i]=a[0]+a[1];
		a[0]=a[1];
		a[1]=a[i];
		
	}
	printf("%lld\n",a[n-1]);
	}
	
}

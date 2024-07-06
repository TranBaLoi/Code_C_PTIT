#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int i,cnt=0;
	if(n==1)	return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	++cnt;
	}
	if(cnt==0)	return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[10000];
		int i,n;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(snt(a[i])==1) printf("%d ",a[i]);
		}
		printf("\n");
	}
	
}

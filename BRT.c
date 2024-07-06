#include<stdio.h>
#include<math.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i;	scanf("%d",&n);
		int a[n],min=1e9;	
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		int c=abs(a[0]-a[n-1]);
		for(i=1;i<n;i++)
		{
			int b=abs(a[i]-a[i-1]);
			if(min>b)	min=b;
		}
		int cnt=0;
		if(min>c)
		{
			min=c;	++cnt;
		}
		for(i=1;i<n;i++)
		{
			int d=abs(a[i]-a[i-1]);
			if(d==min) ++cnt;
		}
		printf("%d %d\n",min,cnt);
	}
}

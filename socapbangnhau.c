#include<stdio.h>
#include<math.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i,cnt=0;	scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])	++cnt;
		}
		printf("%d\n",cnt);
	}
}

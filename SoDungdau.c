#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;	scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			int cnt=0;
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])	++cnt;
			}
			if(cnt==n-i-1)	printf("%d ",a[i]);
			
			
		}
		printf("\n");
	}
}

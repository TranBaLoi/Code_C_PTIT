#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,a[1000];
		int cnt=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			int j,k=1;
			for(j=0;j<i;j++)
			{
				if(a[i]<a[j])	
				{
					k=0;
					break;
				}
			}
			if(k==1)	++cnt;
		}
		printf("%d\n",cnt);
		
	
	}
}

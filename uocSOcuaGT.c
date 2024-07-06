#include<stdio.h>
#include<math.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,p,x=0,i;	scanf("%d%d",&n,&p);
		for(i=2;i<=n;i++)
		{
			int k=i;
			if(k%p==0)
			{
				while(k%p==0)
				{
					++x;
					k=k/p;
				}
			}
		}
		printf("%d\n",x);
	}
}

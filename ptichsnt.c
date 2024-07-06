#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,t;
	scanf("%d", &t);
	for(i=1;i<=t;i++)
	{
		printf("Test %d: ",i);
		scanf("%d",&n);
		for(j=2;j<=n/2;j++)
		{
			int cnt=0;
			if(n%j==0)
			{
				while(n%j==0)
				{
					n=n/j;
					++cnt;
				}
				printf("%d(%d) ",j,cnt);
			}
			
		}
		if(n!=1)	printf("%d(1)", n);
		printf("\n");
	}
}

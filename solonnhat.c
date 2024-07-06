#include<stdio.h>
#include<math.h>
int main()
{
	int a[10000];
	int n,i,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int max=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>max)	max=a[i];
			
		}
		printf("%d\n",max);
		for(i=0;i<n;i++)
		{
			if(max==a[i])	printf("%d ",i);
		}
		printf("\n");
	}
}

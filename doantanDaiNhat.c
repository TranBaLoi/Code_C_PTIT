#include<stdio.h>
int main()
{
	int t,r=1;	scanf("%d",&t);
	while(r<=t)
	{
		int n,i,j,max=0;	scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			int cnt=0;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>a[j-1])	++cnt;
				else break;
			}
			if(max<cnt)	max=cnt;
		}
		printf("Test %d:\n",r);
		printf("%d\n",max+1);
		for(i=0;i<n;i++)
		{
			int cnt=0;
			for(j=i+1;j<n;j++)
			{
				if(a[j]>a[j-1])	++cnt;
				else break;
			}
			if(max==cnt)
			{
				int k;
				for(k=i;k<i+max+1;k++)	printf("%d ",a[k]);
				printf("\n");
			}
		}
		r++;
	}
}

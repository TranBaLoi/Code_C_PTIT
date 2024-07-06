#include<stdio.h>
int main()
{
	int t,r=1;	scanf("%d",&t);
	while(r<=t)
	{
		int n,i,j;	scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(i=0;i<n;i++)	scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					int dao=a[i];
					a[i]=a[j];
					a[j]=dao;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(b[j]>b[i])
				{
					int dao=b[i];
					b[i]=b[j];
					b[j]=dao;
				}
			}
		}
		int k=0,l=0;
		printf("Test %d:\n",r);
		for(i=0;i<2*n;i++)
		{
			if(i%2==0)	
			{
				printf("%d ",a[k]);
				++k;
			}
			else
			{
				printf("%d ",b[l]);
				++l;
			}
		}
		printf("\n");
		++r;
	}
}

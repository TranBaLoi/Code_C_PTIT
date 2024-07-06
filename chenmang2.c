#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	int k;
	for(k=1;k<=t;k++)
	{
		int n,m,p;
		scanf("%d%d%d",&n,&m,&p);
		int i,j,a[1000],b[1000];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		for(j=0;j<m;j++)	scanf("%d",&b[j]);
		printf("Test %d:\n",k);
		for(i=0;i<p;i++)	printf("%d ",a[i]);
		for(j=0;j<m;j++)	printf("%d ",b[j]);
		for(i=p;i<n;i++)	printf("%d ",a[i]);
		printf("\n");
	}
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,m;
	scanf("%d%d",&n,&m);
	int a[10000],b[10000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)	scanf("%d",&b[j]);
	int c;
	scanf("%d",&c);

	
	
	if(0<c<n)
	{
		for(i=0;i<c;i++)	printf("%d ",a[i]);
		for(j=0;j<m;j++)	printf("%d ",b[j]);
		for(i=c;i<n;i++)	printf("%d ",a[i]);
		
	}
}

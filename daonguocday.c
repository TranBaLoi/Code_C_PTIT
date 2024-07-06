#include<stdio.h>
#include<math.h>
int main()
{
	int a[10000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[n-i-1]);
	}
}

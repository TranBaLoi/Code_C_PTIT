#include<stdio.h>
#include<math.h>

int main()
{
	int n,a[1000];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min1=100000;
	for(i=0;i<n;i++)
	{
		if(min1>a[i])	min1=a[i];
	}
	int x=min1,min2=100000;
	for(i=0;i<n;i++)
	{
		if(min2>a[i] && a[i] != x)
		{
			min2=a[i];
		}	
	}
	printf("%d %d",min1,min2);
	
	
}

#include<stdio.h>
int main()
{
	int n,i;	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int j,dao;
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				dao=a[i];
				a[i]=a[j];
				a[j]=dao;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)	printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)	printf("%d ",a[i]);
	}
}

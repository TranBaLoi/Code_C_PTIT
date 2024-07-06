#include<stdio.h>
int main()
{
	int n,i,j,dao;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				dao=a[j];
				a[j]=a[i];
				a[i]=dao;
			}
		}
	}
	for(i=0;i<n;i++)	printf("%d ",a[i]);
}

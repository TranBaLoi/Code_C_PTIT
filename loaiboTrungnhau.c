#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])	a[j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)	printf("%d ",a[i]);
	}
}

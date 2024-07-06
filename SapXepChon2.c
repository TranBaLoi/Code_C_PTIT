#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	int a[n];	
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int min=a[i],k=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				k=j;	
			}
		}
		int dao=a[i];
		a[i]=min;
		a[k]=dao;
		for(j=0;j<n;j++)	printf("%d ",a[j]);
		printf("\n");
	}
}

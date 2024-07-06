#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			int dao;
			if(a[j]<a[i])
			{
				dao=a[i];
				a[i]=a[j];
				a[j]=dao;
			}
		
		}
		printf("Buoc %d: ",i+1);
		for(j=0;j<n;j++)	printf("%d ",a[j]);
		printf("\n");
	}
}

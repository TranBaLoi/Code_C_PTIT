#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int dao,min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])	min=j;
		}
		dao=a[i];
		a[i]=a[min];
		a[min]=dao;
		printf("Buoc %d: ",i+1);
		for(j=0;j<n;j++)	printf("%d ",a[j]);
		printf("\n");
		
	}
}

#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	int a[n];	
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int min=a[i];
		for(j=0;j<=i;j++)
		{
			int k;
			for(k=j+1;k<=i;k++)
			{
				if(a[k]<a[j])
				{
					int dao=a[j];
					a[j]=a[k];
					a[k]=dao;
				}
			}
		}
		printf("Buoc %d: ",i);
		for(j=0;j<=i;j++)	printf("%d ",a[j]);
		printf("\n");
	}
}

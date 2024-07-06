#include<stdio.h>
int main()
{
	int n;	scanf("%d",&n);
	int a[n],i,j,k=1,dao;
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		int ok=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				dao=a[j+1];
				a[j+1]=a[j];
				a[j]=dao;
				ok=0;
			}
		}
		if(ok==0)
		{
			printf("Buoc %d: ",k++);
			for(j=0;j<n;j++)	printf("%d ",a[j]);
			printf("\n");
		}
		
	}

}

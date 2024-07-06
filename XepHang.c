#include<stdio.h>
int main()
{
	int n;	scanf("%d",&n);
	int i,j,a[101]={0},b[101]={0},time=0;
	for(i=0;i<n;i++)	scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int dao=a[j];
				a[j]=a[i];
				a[i]=dao;
				dao=b[j];
				b[j]=b[i];
				b[i]=dao;
			}
		}
	}
	time=a[0];
	for(i=0;i<n;i++)
	{
		time+=b[i];
		if(time<a[i+1])	time=a[i+1];	
	}
	printf("%d",time);
}	

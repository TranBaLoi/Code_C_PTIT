#include<stdio.h>
#include<math.h>
int check(int n)
{
	int m=n%10;
	n=n/10;
	while(n>0)
	{
		int r=n%10;
		if(m<r)	return 0;
		else m=r;
		n/=10;
	}
	return 1;
}
int main()
{
	int a[100000],b[100000];
	int n,m=0,l=0,j,i;
	while(scanf("%d",&n)==1)
	{
		if(check(n))
		{
			a[m]=n;	
			++m;
		}
	}
	for(i=0;i<m;i++)	b[i]=1;
	for(i=0;i<m-1;i++)
	{
		if(b[i]!=0)
		{
			for(j=i+1;j<m;j++)
			{
				if(a[i]==a[j])
				{
					++b[i];
					b[j]=0;	
				}	
			}
		}
	}
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]<b[j])
			{
				int dao=b[j];
				b[j]=b[i];
				b[i]=dao;
				dao=a[j];
				a[j]=a[i];
				a[i]=dao;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(b[i]!=0)	printf("%d %d\n",a[i],b[i]);
	}
}

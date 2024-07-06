#include<stdio.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int a[10]={1000,500,200,100,50,20,10,5,2,1};
		int n,dem=0,i;	scanf("%d",&n);
		for(i=0;i<10;i++)
		{
			while(n>=a[i])
			{
				dem=dem+1;
				n=n-a[i];
			}
		}
		printf("%d\n",dem);
	}
}

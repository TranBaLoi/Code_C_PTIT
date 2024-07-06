#include<stdio.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,ok=0;	scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)	scanf("%d",&a[i]);		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					printf("%d\n",a[i]);
					ok=1;	break;
				}
			}
			if(ok==1)	break;
		}
		if(ok==0)	printf("NO\n");
	}
}

#include<stdio.h>
#include<math.h>
int tong(int n)
{
	int i,cnt=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				cnt+=i;
				n/=i; 
			}
		}
	}
	if(n!=1)	cnt=cnt+n;
	return cnt;
}
int main()
{
	int i,n,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	
	{
		scanf("%d",&a[i]);
		cnt=cnt+tong(a[i]);
	}
	printf("%d",cnt);
}

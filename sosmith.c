#include<stdio.h>
#include<math.h>
int tong(int n)
{
	int m;
	int tong=0;
	while(n>0)
	{
		m=n%10;
		tong += m;
		n /= 10;
		
	}
	return tong;
}
int snt(int n)
{
	int i;
	int m=n;
	int tong=0;
	for(i=2;i<=sqrt(m);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				int k=i;
					while(k>0)
					{
						int j;
						j=k%10;
						tong +=j;
						k /=10;
					}
				
				n=n/i;
			}
		}
	}
	if(n!=1)
	{
			while(n>0)
		{
			int r=n%10;
			tong += r;
			n/=10;
		}
	}
	return tong;
	
}
int main()
{
	int n;
	scanf("%d",&n);
	if(snt(n)==tong(n))	printf("YES");
	else printf("NO");
	
}

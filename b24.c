#include<stdio.h>
#include<math.h>
int main()
{
	long n,a;
	int sum;
	scanf("%ld", &n);
	while(n--)
	{
		scanf("%ld", &a);
	
		if(a%2==1)	printf("0\n");
		else
		{
			int i;
			sum=1;
			for (i=2;i<=sqrt(a);i++)
			{
				int m=a/i;
				if(a%i==0 && m%2==0)	
				{
					if(m%2!=0 || i%2!=0 || m==i)	sum=sum+1;
					else sum=sum+2;
				}
				if(a%i==0 && m%2!=0)	sum=sum+1;
				
			}
			printf("%d\n", sum);
		}
	
	}
}

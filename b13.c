#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,sum,m;
	int i,a;
	sum=0;
	scanf("%d",&a);
	 
	for(i=1; i<=a; i++)
		{
			scanf("%lld",&n);
			while(n>0)
			{
				
				m=n%10;
				sum=sum+m;
				n=n/10;
				
	
			}
		
		printf("%lld \n", sum);
		sum=0;
		}
	
}

#include<stdio.h>
#include<math.h>
int main()
{
	long n,n1,a;
	scanf("%ld",&n);
	int sum=0,sum1=0;
	while(n--){
	scanf("%d",&n1)	;
	sum=0;sum1=0;
	while(n1>0)
	{
		a = n1%10;
		if(a%2==0) sum=sum+1;
		else	sum1=sum1+1;
		n1=n1/10;
	}
	
	printf("%d %d\n", sum1, sum);
}
}

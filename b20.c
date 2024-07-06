#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	long int tong=0;
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		for(i=b; i<=a; i++)
			tong=tong+i;
		printf("%d",tong);
		
		
	}
	else if (a<b)
	{
		for(i=a; i<=b; i++)
			tong=tong+i;
		printf("%d", tong);
	}
	else
		printf("%d", a);
}

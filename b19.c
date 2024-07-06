#include<stdio.h>
#include<math.h>
int main()
{
	long int a;
	long int m,tich;
	tich=1;
	scanf("%ld", &a);
	while(a>0)
	{
		m=a%10;
		tich=tich*m;
		a=a/10;
	}
	printf("%ld", tich);
	
}

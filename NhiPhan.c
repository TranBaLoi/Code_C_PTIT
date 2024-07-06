#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100000];
	int n,cnt=0;	scanf("%d",&n);
	int m=n;
	if(n==0||n==1)	printf("%d",n);
	while(m>0)
	{
		m=m/2;
		++cnt;
	}
	printf("%d",m);
	
}

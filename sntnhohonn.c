#include<stdio.h>
#include<math.h>
int snt(int a)
{
	int i;
	int cnt=0;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) 
		
			++cnt;
	}
	if (cnt==0)	return 1;
		else return 0;
}
int main()
{
	int i,a;
	int res=0;
	scanf("%d", &a);
	for(i=2;a>0;i++)
	{
		if(snt(i)==1)
		{
			printf("%d \n", i);
			++res;
		}
		if(res==a) break;
	}
}


#include<stdio.h>
#include<math.h>
long long dao(long long n)
{
	long long dao=0;
	int b;
	while(n>0)
	{
		dao=dao*10 +n%10;
		n /=10;
	}
	return dao;
}
void so(long long n)
{
	long long a=n;
	int m;
	int so2=0,so3=0,so5=0,so7=0;
	while(a>0)
	{
		m=a%10;
		if(m==2)	++so2;
		if(m==3)	++so3;
		if(m==5)	++so5;
		if(m==7)	++so7;
		a /= 10;
		
	}
	int b;
	while(n>0)
	{
		b=n%10;
		if(b==2&&so2!=0)	printf("2 %d\n",so2),	so2=0;
		if(b==3&&so3!=0)	printf("3 %d\n",so3),	so3=0;
		if(b==5&&so5!=0)	printf("5 %d\n",so5),	so5=0;
		if(b==7&&so7!=0)	printf("7 %d\n",so7),	so7=0;
		n /= 10;
		
	}
	

}
int main()
{
	long long n;
	scanf("%lld",&n);
	long long m=dao(n);
	so(m);
}

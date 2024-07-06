#include<stdio.h>
#include<math.h>
int ucln(int a, int b)
{
	if(a==0 || b==0) return a+b;
	while(a!=b)
	{
		if(a>b)
			a= a - b;
		else
			b= b - a;
	}
	return a;
}
int main()
{
	int a,b,n,i;
	scanf("%d",&n);
	for(i=1; i<=n;i++){
	
		scanf("%d %d", &a, &b);
		printf("%d\n",ucln(a,b));
	}
}

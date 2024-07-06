#include<stdio.h>
#include<math.h>
int main()
{
	 int n,i;
	 scanf("%d",&n);
	 for (i=1 ; i<=n; i++)
	 {
	 	
	 	long long int a;
	 	scanf("%lld", &a);
	 	int b=sqrt(a);
	 	if(a==b*b)
	 		printf("YES\n");
	 	else
	 		printf("NO\n");
	 }
}

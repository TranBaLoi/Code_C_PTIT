#include<stdio.h>
#include<math.h>
int main()
{
	int s = 0, n;
	 scanf("%d", &n); 
	 int n1 = n;
	  while(n>0) 
	  { int a = n % 10;
	   int m = 1; 
	   n/=10; 
	   for (int i=1; i<=a; ++i) 
	   	m*=i; 
	   s += m; }
	    printf("%d", s);
}

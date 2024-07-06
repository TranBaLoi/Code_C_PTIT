#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;	scanf("%d",&n);
	int a[n],sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%.3f",(float)sum/n);
	
}

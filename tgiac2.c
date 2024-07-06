#include<stdio.h>
int main()
{
	int n;	scanf("%d",&n);
	int i,j;
	int a=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
	
			printf("%c",64+a);
			a=a+2;
		}
		a=1;
		if(i%2==0)	a=a+i+2;
		if(i%2!=0)	a=a+i+1;
		printf("\n");
	}
}

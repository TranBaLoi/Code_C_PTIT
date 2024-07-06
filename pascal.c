#include<stdio.h>
#include<math.h>
int gt(int n)
{
	int i,temp=1;
	for(i=1;i<=n;i++)
	{
		temp *=i;
	}
	return temp;
}
int main()
{
	int n;
	scanf("%d", &n);
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=i;j++)
		{
			//i!/j!*(i-j)!
			printf("%d ",gt(i)/(gt(j)*gt(i-j)));
			
		}
		printf("\n");
	}
}

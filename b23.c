#include<stdio.h>
#include<math.h>
int main()
{
	int rong , cao;
	int i,j;
	scanf("%d %d", &rong, &cao);
	for(i=1;i<=cao;i++)
	{
		for(j=1;j<=rong;j++)
		{
			if(i==1||i==cao||j==rong||j==1)	printf("*");
		
			else printf(" ");
		}
	
		printf("\n");
	
	}
	
	
}

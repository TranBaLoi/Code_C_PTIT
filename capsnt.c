#include<stdio.h>
#include<math.h>
int UCLN(int a, int b){

		while (a>0)
		{
			if(b>a)	b=b-a;
			else if(a==b)	return a;
			else a=a-b;
		}
}
int main()
{
	int a,b;
	int i,j;
	scanf("%d%d", &a,&b);
	for(i=a;i<b; i++)
	{
		for(j=a+1;j <=b; j++)
		{
			if(UCLN(i,j)==1)
			{
				if(i<j)	printf("(%d%d)\n", i,j);
			}	
		}
}
}

#include<stdio.h>
int p[100];
void chen()
{
	p[0]=0,p[1]=1;
	int i=0,cnt=2;
	int b[10];
	b[0]=0;b[1]=1;
	while(cnt<=100)
	{
		p[cnt]=b[0]+b[1];
		b[0]=b[1];
		b[1]=p[cnt];
		++cnt;
	}
}
int main()
{
	chen();
	
	int n,i,j,cnt=0;	scanf("%d",&n);
	int a[n][n];
	int h1=0,c1=0,h2=n-1,c2=n-1;
	while(h1<=h2&&c1<=c2)
	{
		for(i=c1;i<=c2;i++)
		{
			a[h1][i]=p[cnt];
			++cnt;
		}
		++h1;
		for(i=h1;i<=h2;i++)
		{
			a[i][c2]=p[cnt];
			++cnt;
		}
		--c2;
		if(c1<=c2)
		{
			for(i=c2;i>=c1;i--)
			{
				a[h2][i]=p[cnt];
				++cnt;
			}
			--h2;
		}
		if(h1<=h2)
		{
			for(i=h2;i>=h1;i--)
			{
				a[i][c1]=p[cnt];
				++cnt;
			}
			++c1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	printf("%d ",a[i][j]);
		printf("\n");
	}
}

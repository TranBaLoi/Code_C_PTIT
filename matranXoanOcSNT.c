#include<stdio.h>
#include<math.h>
int p[1000];
int nto(int n)
{
	int i;
	if(n==1||n==0)	return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
void chen()
{
	int cnt=0,i=2;
	while(cnt<400)
	{
		if(nto(i))
		{
			p[cnt]=i;
			++cnt;
		}
		++i;
	}
}
int main()
{
	int t,k=1;	scanf("%d",&t);
	while(k<=t)
	{
		chen();
		int n,cnt=0;	scanf("%d",&n);
		int a[n][n],i,j;
		int h1=0,h2=n-1,c1=0,c2=n-1;
		while(h1<=h2&&c1<=c2)
		{
			//xay dung hang tu tren xuong
			for(i=c1;i<=c2;i++)
			{
				a[h1][i]=p[cnt];
				++cnt;
			}
			++h1;
			//xay dung cot o ngoai vao
			for(i=h1;i<=h2;i++)
			{
				a[i][c2]=p[cnt];
				++cnt;
			}
			--c2;
			//xay dung hang cuoi len
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
		printf("Test %d:\n",k);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)	printf("%d ",a[i][j]);
			printf("\n");
		}
		k++;
	}
	
}

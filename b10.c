#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float denta,d,e;
	scanf("%f %f %f",&a, &b, &c);
	if(a==0 && b==0 && c!=0)
		printf("NO");
	else if(a==0 && b!=0 && c!=0)
		printf("%.2f",(float) -c/b);
	else 
	{
		denta=b*b-4*a*c;
		if(denta<0)
			printf("NO");
		else if(denta>0)
		{	d=(-b+sqrt(denta)/(2*a));
			e=(-b-sqrt(denta)/(2*a));
			printf("%.2f %.2f", d,e);
			
		}
		else
			printf("%.2f", (float)-b/(2*a));
	}
}

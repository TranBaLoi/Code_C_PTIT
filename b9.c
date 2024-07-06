#include<stdio.h>
#include<math.h>
int main()
{
	int a,ngay,tuan,nam;
	scanf("%d", &a);

		nam=a/365;
		tuan=(a-nam*365)/7;
		ngay=a-nam*365-7*tuan;
	printf("%d %d %d",nam,tuan,ngay);
	
	
}

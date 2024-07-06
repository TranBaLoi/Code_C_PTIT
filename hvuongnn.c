#include<stdio.h> 
int a[100]={}; 
int b[100]={}; 
int main(){
int i;
int x1,y1,x2,y2, x3, y3, x4, y4; 
scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
scanf("%d %d %d %d", &x3, &y3, &x4, &y4); 
a[0]=x1, a[1]=x2, a[2]=x3, a[3]=x4; 
b[0]=y1,b[1]=y2, b[2]=y3, b[3]=y4; 
int min1 = 101, max1=a[0]; 
for (i=0;i<4;i++){
	if(a[i] < min1) min1 = a[i]; 
	if(a[i] > max1) max1 = a[i];
}

int min2=  101, max2 = b[0]; 
for ( i=0;i<4;i++){
	if(b[i] < min2) min2 = b[i]; 
	if(b[i]> max2) max2 = b[i]; 
}
int s;
if((max1-min1) > (max2-min2)){
	printf("%lld", (max1-min1)*(max1-min1));
}
else if((max2- min2) > (max1 - min1)){ 
	printf("%lld", (max2 - min2)*(max2 - min2));
}
else{

	printf("%lld", (max1-min1)*(max1-min1));
}
return 0;
}


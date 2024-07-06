#include <stdio.h>

int main() {
	int i;
	int m;
	scanf("%d", &m);
    int a[m] ;
  	scanf("%d", a[m]);
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    scanf("%d",&x);
    int positions[n];
    int count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            positions[count] = i;
            count++;
        }
    }
    printf("Vi tri cua gia tri %d trong mang a la: ", x);
    for (i = 0; i < count; i++) {
        printf("%d ", positions[i]);
    }
    return 0;
}

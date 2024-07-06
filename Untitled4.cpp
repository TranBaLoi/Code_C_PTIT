#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>


int a[6];
int pos[6];
int n = 6,k=3,sum=0;
bool ok = false;

void init(){
    for(int i = 1;i<=n;i++){
        pos[i]=i;
    }
}

void display(){
    for(int i =1;i<=k;i++){
        printf("%d ",pos[i]);
    }
    
}

void backTrack(int i){
    for(int j = pos[i-1]+1;j<=n-k+i;j++){
        pos[i]=j;
        if(i==k){
            int s=0;
            for(int i = 1;i<=k;i++){
                s+=a[pos[i]];
            }
            if(s==sum-s){
                ok = true;
                printf("YES");
                return; 
            }
        }
        else backTrack(i+1);
    }
}

int main(){
    int t=3;
    while(t--){
        init();
        for(int i = 1;i<=6;i++){
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        backTrack(1);
        if(!ok) printf("NO");
        ok = false;
        sum = 0;
    }
    return 0;
}

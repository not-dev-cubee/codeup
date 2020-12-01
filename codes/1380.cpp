#include <bits/stdc++.h>

int main(){
    int a, i, n;
    scanf("%d", &a);
    for(i=1;i<=6;i++){
        for(n=1;n<=6;n++){
            if(i+n==a){
                printf("%d %d\n", i, n);
            }
        }
    }
}

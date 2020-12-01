#include <bits/stdc++.h>

int main(){
    int a, i, q, n;
    scanf("%d", &a);
    q=a;
    for(i=1;i<=9;i++){
        for(n=1;n<=q;n++){
            printf("*");
        }
        printf("\n");
        q=q+a;
    }
}

#include <bits/stdc++.h>

int main(){
    int a, i, n, q;
    scanf("%d", &a);
    q=a;
    for(i=1;i<=a;i++){
        for(n=1;n<=q;n++){
            printf("%d ", q);
        }
        printf("\n");
        q=q-1;
    }
}

#include <bits/stdc++.h>

int main(){
    int a, i, n, p;
    scanf("%d", &a);
    p=1;
    for(i=1;i<=a;i++){
       for(n=1;n<=p;n++){
           printf("%d ", n);
       }
       printf("\n"); 
       p=p+1;
    }
}

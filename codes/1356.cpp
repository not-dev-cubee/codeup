#include <bits/stdc++.h>

int main(){
    int a, i, n;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(i==1 || i==a){
            for(n=1;n<=a;n++){
                printf("*");
            }
            printf("\n");
        }
        else{
        printf("*");
        for(n=2;n<a;n++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        }
    }
}

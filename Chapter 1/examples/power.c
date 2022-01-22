#include <stdio.h>

int power(int m, int n);

int power(int base, int n){
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i){
        p = p * base;
    }
    return p;
}

int main(){
    printf("%d %d %d\n", 2, power(2,2), power(2,8));
    return 0;
}
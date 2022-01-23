#include <stdio.h>

int power(int m, int n);

int main(){
    printf("%d\n", power(2, 4));
}

int power(int base, int n){
    int p;

    p = 1;
    for (p = 1; n > 0; --n){
        p = p * base;
    }
    return p;
}


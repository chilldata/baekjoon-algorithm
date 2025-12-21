#include <stdio.h>

int main (void) {
    int a,b;
    scanf("%d %d", &a,&b);
    int A = 0;
    int B = 0;

    int d = 100;
    while (1) {
        int r = a % 10;
        A = A + (r*d);
        a /= 10;
        d /= 10;
        if (d == 0) {
            break;
        }
        
    }

    d = 100;
    while (1) {
        int r = b % 10;
        B = B + (r*d);
        b /= 10;
        d /= 10;
        if (d ==0) {
            break;
        }
        
    }

    if (A >= B) {
        printf("%d", A);
    }
    else {
        printf("%d", B);
    }
    return 0; 
}
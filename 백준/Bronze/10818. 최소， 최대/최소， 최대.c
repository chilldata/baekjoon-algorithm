#include <stdio.h>

int main (void) {
    int N; // 개수 
    scanf("%d", &N);

    int mx = -1000001; // 최댓값 변수
    int mn = 1000001; // 최솟값 변수 

    for (int i=0; i<N; i++) {
        int num;
        scanf("%d", &num);

        if (num > mx) { // 최댓값 구하는 로직 
            mx = num;
        }

        if (num < mn) { // // 최솟값 구하는 로직 
            mn = num;
        }

         
    }

    printf("%d %d", mn, mx);

    return 0;
}
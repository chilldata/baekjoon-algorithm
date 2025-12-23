// 핵심 아이디어: 진짜 약수의 최소 최대를 곱하면 해당 수 N이 항상 나온다. 
#include <stdio.h>

int main (void) {
    int num; // 약수 개수 
    scanf("%d", &num);
    
    int mx = -1; // 최댓값 찾을 변수
    int mn = 10000000; // 최솟값 찾을 변수
    int N; 

    for (int i=0; i<num; i++) {

        int x;
        scanf("%d", &x);

        if (x > mx) {
            mx = x;
        }

        if (x < mn) {
            mn = x;
        }    

        N = mx * mn; // N은 항상 최대 X 최소를 한 값이다. 
    }

    printf("%d", N);

    return 0;
}
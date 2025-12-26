#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int X;
    scanf("%d", &X);

    int arr[N]; // N개의 원소를 가지는 배열 선언. 

    for (int i=0; i<N; i++) { // 배열에 원소를 입력받는다.
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<N; i++) {
        if (arr[i] < X) { // X 보다 작은수이면 출력한다. 
            printf("%d ", arr[i]); 
        } 
    }

    return 0;
}
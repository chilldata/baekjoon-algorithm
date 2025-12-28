#include <stdio.h>

int main(void) {
    int N; // 바구니 개수
    scanf("%d", &N);

    int M; // 공을 바꾸는 횟수 
    scanf("%d", &M);

    int arr[N]; // 배열 선언 

    for(int i=0; i<N; i++) { // 배열에 1부터 N까지 차례대로 넣기
        arr[i] = i+1;
    }


    for (int i=0; i<M; i++) {
        int idx1, idx2;
        scanf("%d %d", &idx1, &idx2);

        idx1--; // 인덱스 기준이라 -1씩 해주어야 한다. 
        idx2--;

        int temp = arr[idx1]; // swap 구조 
        arr[idx1] = arr[idx2];
        arr[idx2] = temp; 
    }

    for (int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
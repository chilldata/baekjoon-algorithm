#include <stdio.h>

int main(void) {
    int N; // 시험본 과목의 개수 
    scanf("%d", &N);

    int arr[N]; // 배열 선언

    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    int M = -1; // 최댓값 변수 초기화
    for (int i=0; i<N; i++) {
        if(arr[i] > M) { // 최댓값을 찾는다.
            M = arr[i];
        }
    }

    double rst[N]; // 결과 배열 변수
    double total=0; // 총합 변수 초기화

    for (int i=0; i<N; i++) {
        double sc = ((double)arr[i] / M) * 100;
        rst[i] = sc; // 결과 배열에 새로 구한 점수를 더해준다.
        total += rst[i]; // 총합을 더해나간다.
    }


    double avg;
    avg = (double)total / N;

    printf("%lf", avg);

    return 0;
}
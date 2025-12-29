#include <stdio.h>

int main(void) {

    int arr[10] = {}; // 10개짜리 배열 0으로 초기화 

    for(int i=0; i<10; i++) {
        int num;
        scanf("%d", &num);
        arr[i] = num % 42;  // 42로 나눈 나머지들을 모두 배열에 담는다. 
    }

    int rst[10]; // 중복을 제거한 배열 선언

    for (int i=0; i<10; i++) { // -1로 모두 초기화 
        rst[i] = -1;
    }

    for (int i=0; i<10; i++) {
        int is_duplicate = 0;
        for(int j=0; j<10; j++) {
            if (arr[i] == rst[j]) { // 하나씩 비교하며 중복이 있으면 break
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate == 0) { // 중복이 없으면 넣는다. 
            rst[i] = arr[i];
        }
    }

    int cnt = 0; // 배열의 개수를 세어줄 변수 
    for (int i=0; i<10; i++) {
        if(rst[i] != -1) { // -1이 아니면 cnt를 올려준다. 
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
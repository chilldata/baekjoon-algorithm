#include <stdio.h>

int main(void) {
    
    int arr[9] = {}; // 9개 원소가 들어갈 수 있는 배열을 만든다. 

    for (int i=0; i<9; i++) { // 원소들을 입력 받는다. 
        scanf("%d", &arr[i]);
    }

    int mx = -1; // 최댓값
    int idxmx = -1; // 최댓값 인덱스 

    for (int i=0; i<9; i++) {
        if (arr[i] > mx) { // 최댓값을 계속 갱신한다.
            mx = arr[i];
            idxmx = i + 1; // 몇번째 수인지는 인간기준으로 +1을 해주어야 한다. 
        }
    }

    printf("%d \n", mx);
    
    printf("%d", idxmx);
    
    return 0;
}
#include <stdio.h>

int main(void) {

    int arr[30]; // 1부터 30까지 가진 배열 선언 및 초기화 
    for (int i=0; i<30; i++) {
        arr[i] = i+1;
    }

    int arr2[28]; // 입력받는 28개의 배열 선언 및 초기화 
    for (int i=0; i<28; i++) {
        int n;
        scanf("%d", &n);
        
        arr2[i] = n;
    }

    int rst[2]; // 없는 출석번호 숫자 2개 받을 결과 배열 
    int is_second = 0; // 결과에 첫번째 들어온 숫자인지 체크하는 변수 

    for(int i=0; i<30; i++) {
        int is_in = 0; // 배열에 있는지 체크하는 변수
        for (int j=0; j<28; j++) { // 만약 이미 그 숫자가 있다면 break
            if (arr[i] == arr2[j]) {
                is_in = 1;
                break;
            }
        }
        
        if (is_in == 0){ // 그 숫자가 없다면 rst 배열에 넣어준다. 
            if (is_second == 0) {
                rst[0] = arr[i];
                is_second = 1;
            }
            else {
                rst[1] = arr[i];
            }
        }
    }

    if (rst[0] > rst[1]) { // 정렬을 앞이 더 작은수가 오도록 swap 해준다. 
        int temp = rst[0];
        rst[0] = rst[1];
        rst[1] = temp;
    }


    for (int i=0; i<2; i++) {
        printf("%d \n", rst[i]);
    }

    return 0; 
}
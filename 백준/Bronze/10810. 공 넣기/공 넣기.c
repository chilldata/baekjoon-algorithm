#include <stdio.h>

int main(void){
    int N; // 바구니 개수
    scanf("%d", &N);

    int M; // M번 넣으려고 한다. 
    scanf("%d", &M);

    int arr[N]; // 배열 선언 

    for (int i=0; i<N; i++) { // 0으로 모두 초기화 
        arr[i] = 0;
    }

    for (int i=0; i<M; i++) {
        int from,to,num; // from부터 to까지 num 공을 넣는다.
        scanf("%d %d %d", &from, &to, &num);

        from --; // 인덱스를 0부터 해주기 위해 -1씩 각각 해준다. 
        to --;

        for (int i=from; i<=to; i++) {
            arr[i] = num;
        }
        
    }

    for (int i=0; i<N; i++) {
            printf("%d ", arr[i]);
        }

    return 0; 
}
#include <stdio.h>

int main (void) {
    int mx = 0; // 평가 점수 최대값
    int num = -1; // 참가자 번호 

    int i = 0;
    for (i=0; i < 5; i++) {
        int total = 0; // 각 참가자의 총점 

        for (int j=0; j<4; j++) {
            int score; 
            scanf("%d", &score);

            total += score; 
        }

        if (total > mx) { // 만약 총점이 mx 보다 크면 교체. 
            mx = total;
            num = i + 1; // 참가자번호는 i + 1 이다. 
        }
        

    }

    printf("%d %d", num, mx);

    return 0;
}
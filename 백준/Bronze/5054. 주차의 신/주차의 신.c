#include <stdio.h>

int main (void) {
    int t; // 테스트 케이스 개수 
    scanf("%d", &t);
    
    int rst = -1; // 최소 거리 

    for (int i=0; i<t; i++) {
        int n; // 상점 개수 
        scanf("%d", &n);

        int mx = -1; // 최소값
        int mn = 100; // 최댓값

        for (int j=0; j<n; j++) {
            int loc; // 각각 상점 좌표 
            scanf("%d", &loc);

            if (loc > mx) {
                mx = loc;
            }
            if (loc < mn) {
                mn = loc;
            }

            rst = 2 * (mx-mn); // 최소거리는 mx - mn 을 왕복한 거리다. 
        }
    
        printf("%d \n", rst);
    
}

    return 0;
}
#include <stdio.h>

int main (void) {
    int mx = 0;
    int num = -1;

    int i = 0;
    for (i=0; i < 5; i++) {
        int total = 0; 

        for (int j=0; j<4; j++) {
            int score; 
            scanf("%d", &score);

            total += score; 
        }

        if (total > mx) {
            mx = total;
            num = i + 1;
        }
        

    }

    printf("%d %d", num, mx);

    return 0;
}
#include <stdio.h>

int main (void) {
    int total = 0;
    int mx = -1;

    for (int i=0; i<10; i++) {
        int off;
        int on;
        scanf("%d %d", &off, &on);

        total = total - off + on; 

        if (total > mx) {
            mx = total;
        }
    }

    printf("%d", mx);

    return 0;
}
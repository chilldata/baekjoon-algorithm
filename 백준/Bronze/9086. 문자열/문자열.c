#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1001] = {};

    int T;
    scanf("%d", &T);

    char rst[3] = {};

    for (int i=0; i<T; i++) {
        scanf("%s", str);

        int len = strlen(str);

        if (len == 1) {
            rst[0] = str[0];
            rst[1] = str[0];
            rst[2] = '\0';
        }

        else {
                rst[0] = str[0];
                rst[1] = str[len - 1];
                rst[2] = '\0';
        }

    printf("%s\n", rst);
    
    }


    return 0;
}
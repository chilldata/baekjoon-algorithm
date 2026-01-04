#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101] = {}; // 단어를 입력 받는다.
    scanf("%s", str);

    int len = strlen(str); // 길이를 잰다. 

    printf("%d", len); // 길이를 출력한다. 

    return 0;
}
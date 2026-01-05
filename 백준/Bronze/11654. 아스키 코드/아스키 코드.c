#include <stdio.h>
#include <string.h>

int main(void) {
    char x; // 문자로 입력받는다.
    scanf("%c", &x);

    printf("%d", x); // 정수형으로 출력하면 아스키 코드 값 출력 가능 

    return 0;
}
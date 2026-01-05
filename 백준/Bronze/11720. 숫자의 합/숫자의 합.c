#include <stdio.h>
#include <string.h>

int main(void) {
    int N; // 숫자의 개수 
    scanf("%d", &N);

    char str[101] = {}; // N은 100이하의 개수이기에 문자열 선언
    scanf("%s", str);

    int total = 0; // 숫자 N개의 합에 대한 변수 

    int idx = 0;
    while (str[idx] != '\0') {
        int num = str[idx] - '0'; // 아스키코드에서 '0'을 빼주면 숫자가 나옴 

        total += num;

        idx++;
    }

    printf("%d", total);

    return 0;
}
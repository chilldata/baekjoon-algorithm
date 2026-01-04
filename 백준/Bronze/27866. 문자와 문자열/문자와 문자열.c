#include <stdio.h>
#include <string.h>

int main (void){

    char S[1001] = {}; // 단어 S 
    scanf("%s", S);

    int i; // 정수 i 
    scanf("%d", &i);

    char rst; // 결과를 담을 rst 문자 변수 선언

    int idx = 0;
    while (S[idx] != '\0') { 
        if (idx+1 == i) { // 만약 idx+1이 i번째 글자와 같다면 rst에 담는다. 
            rst = S[idx]; 
        }

        idx++;
    }

    printf("%c", rst);

    return 0;
}
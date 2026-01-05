#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000001] = {}; // 문자열 길이는 1,000,000을 넘지 않는다.

    gets(str); // 공백 포함 문자를 입력받는다. 

    int cnt = 0; // 문자의 개수를 세는 변수
    int word_cnt = 0; // 단어의 개수를 세는 변수 

    int idx = 0;
    while (str[idx] != '\0') {

        if (str[idx] != ' ') { // 만약 공백이 아니면 cnt를 올려준다. 
            cnt++;
        }

        else {
            if (cnt > 0) { // 만약 공백을 만났는데 cnt가 0보다 크면 
                word_cnt++; // 딘어 개수를 올려주고, cnt 초기화 한다.
                cnt = 0;
            }
        }

        idx++;
    }
    // 마지막 공백이 없는 경우 그냥 while문이 끝날 수 있으므로 
    // cnt >0일때 단어개수를 하나 추가한다. 
    if (cnt > 0) { 
        word_cnt++;
    }

    printf("%d", word_cnt);

    return 0;
}
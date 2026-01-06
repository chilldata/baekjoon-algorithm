#include <stdio.h>
#include <string.h>

int main(void) {

    char *arr[10] = {}; // 포인터를 통해 문자열 주소 10개를 담는다. 

    // 각 배열에 숫자에 맞게 영단어를 매핑한다. 
    arr[2] = "ABC";
    arr[3] = "DEF";
    arr[4] = "GHI";
    arr[5] = "JKL";
    arr[6] = "MNO";
    arr[7] = "PQRS";
    arr[8] = "TUV";
    arr[9] = "WXYZ";


    char str[16] = {}; // 입력되는 알파벳 대문자
    scanf("%s", str);

    int total = 0; // 총 걸리는 시간 

    for (int i=0; str[i] != '\0'; i++) {
        char ch = str[i];

        int found = 0; // for문을 탈출하기 위한 변수 
        
        for(int j=2; j<=9; j++) {

            if(found == 1) { // 이미 그 문자를 찾았으면 for문도 탈출 
                break;
            }

            int k = 0;
            while (arr[j][k] != '\0') {
                if(arr[j][k] == ch) { // 만약 찾으려는 문자가 해당 배열에 있으면
                    total = total + (j+1); // 각 숫자에 +1한것이 시간이기에 total에 더하고
                    found = 1; // found =1 해준다음에 break를 통해 while 문탈출
                    break;
                }
                k++;
            }
        }
    }

    printf("%d", total);

    return 0;
}
#include <stdio.h>

// 1~10까지 반복하면서 짝수만 출력하는 코드 작성

// 짝수 판별: 2로나눠서 나머지가 0이면 짝수

// 1~10까지 값을보고 짝수면 짝수출력 홀수면 홀수 출력
int main(void) {

    for(int i=1; i<=10; i++) {
        // if(0) → False
        // if(1) → True
        if(i % 2 == 0) { // 짝수 판별
            printf("짝수");
        } else {
            printf("홀수");
        }
    }
}
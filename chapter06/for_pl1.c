#include <stdio.h>

// 1~10의 값을 총합 계산
int main(void) {
    int sum = 0;  // 총합 누적

    // 1~10까지 값이 1씩 증가 i 대체
    // for문 활용해서 1~10까지 값을 덧셈하는 코드작성
    
    for(int i=1; i<=10; i++) {
        sum = sum + i;
        // sun += i;
    }
    printf("누적 총합: %d\n", sum);
}
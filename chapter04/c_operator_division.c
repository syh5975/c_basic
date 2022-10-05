#include <stdio.h>

int main(void){
    double apple;
    int banana;
    int orange;

    apple= 5.0/2.0;         // '/' 몫
    banana= 5/2;            
    orange= 5%2;            // '%' 나머지 
    // 짝수 홀수 판별할때 많이 사용, num %2==0; : 짝수 , ==1; : 홀수

    // 실수 연산 실수 : 실수
    // 정수 연산 정수 : 정수
    // 실수 연산 정수 : 실수 (범위가 더 큰 타입으로 출력됨)

    printf("apple: %.1lf\n", apple);
    printf("banana: %d\n", banana);
    printf("orange: %d\n", orange);
}
#include <stdio.h> 


/**
 *  
 * int num = 4; #99번지
 * int *pn = &num;
 * 
 * 
 * num → 4
 * &num → 99번지
 * pn → 99번지
 * *pn → 4
 * 
 * 변수 앞에 const → 상수(값을 고정)
 * 포인터 변수 앞에 const를 붙이면?
 * - 상수 포인터 가능
 *   참조하고 잇는 일반 변수에 값 변경 가능
 *   a=30(o) : 참조하고 있는 일반 변수에 값 변경 가능
 *  pa = &b (o) : 포인터 변수가 참조하는 주소 변경 가능
 * *pa = 20 (x) : 직접 참조하여 값 변경 불가능
 * 
*/

int main(void) {
    int a=10, b=20;          // a(21번지), b(22번지)
    const int *pa = &a;      // 21번지

    printf("변수 a 값: %d\n", *pa);
    pa = &b;
    printf("변수 a값: %d\n", *pa);
    pa = &a;
    a = 20;
    // *pa = 50; // pa → 상수 포인터
              // 포인터를 통해 직접 참조하여 값 변경 불가
    printf("변수 a값: %d\n", *pa);



}
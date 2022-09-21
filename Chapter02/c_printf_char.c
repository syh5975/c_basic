#include <stdio.h>
/**
 * vs code 단축기
 * ctrl + alt + n: c 실행
 * Shift + alt + ↑ or ↓: line 복사
 * Alt + ↑ or ↓: line 이동
 * ctrl + x : line 삭제
 * ctrl + space : 자동완성
*/


//'' : 문자(character) 'A', 'C', '!'
//"" : 문자열(string) "A", "ABC", "A!"

// ※ 문자('')를 사용하는 경우
//  + 키보드 제어를 할 때 사용
int main(void)
{
    /*code*/
    printf("%c\n", 'A');
    printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");
    return 0;
}
#include <stdio.h>

/**
 * ����Լ�(recursive function)
 * - �ڱ��ڽ��� ȣ���ϴ� �Լ�
 * - return(��ȯ��) �� �ٽ� ��
*/

void fruit(void);

int main(void) {
    fruit();
}
// ���� �ݺ� ȣ���ϴ� ����Լ�
//  - ���� ��� ����!
//  - Fata Error;

void fruit(void) {
    printf("apple\n");
    fruit();
}
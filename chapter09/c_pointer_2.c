#include <stdio.h>

/**
 * ������(pointer) �Ǵ� ������ ����
 *  - ������ �޸� �ּҸ� �����ϴ� ����
 * �Ϲ� ����
 *  - ���� ���� �����ϴ� ����
*/

int main(void) {
    int a; // �Ϲ� ����
    int *pa; // ������ ����(���� �տ� *���̸�)
    
    pa = &a; // &a �� a������ ���۹���(10����)
             // pa = a������ ���۹���(10����)
             // pa(10����)
    //pa(10����) �� 10���� �ּҿ� ��(33)�� �Է�
    *pa = 33;         

    // ������ (*)�ǹ� 2��
    // 1. ���� ������ �� (*) ���̸� �� *pa �����ͺ��� ����
    // 2. ���� ������(=) �Բ� ����ϸ� �� *pa �����ּҿ� ���� �ֱ�
    // *pa == a ����

    printf("������ a�� ���: %d\n", *pa);
    printf("�Ϲݺ��� a�� ���: %d\n", a);
    }
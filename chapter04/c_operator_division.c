#include <stdio.h>

int main(void){
    double apple;
    int banana;
    int orange;

    apple= 5.0/2.0;         // '/' ��
    banana= 5/2;            
    orange= 5%2;            // '%' ������ 
    // ¦�� Ȧ�� �Ǻ��Ҷ� ���� ���, num %2==0; : ¦�� , ==1; : Ȧ��

    // �Ǽ� ���� �Ǽ� : �Ǽ�
    // ���� ���� ���� : ����
    // �Ǽ� ���� ���� : �Ǽ� (������ �� ū Ÿ������ ��µ�)

    printf("apple: %.1lf\n", apple);
    printf("banana: %d\n", banana);
    printf("orange: %d\n", orange);
}
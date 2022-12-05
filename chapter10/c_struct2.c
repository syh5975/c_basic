#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];   // char�迭 �� ���ڿ�(string)
    int age;         // ����
    double height;   // ����(Ű)
    char *intro;     // �ڱ�Ұ� �� ������(�ּ�)
};

int main(void) {
    struct profile yuni;  // ������ �ؾ� ����ü ����

    strcpy(yuni.name, "����ȣ");  // <string.h>
    yuni.age = 8;
    yuni.height = 50.8;

    //malloc() �Լ�
    // - �޸� ���� �Ҵ�
    // - ()���� ���� Byte �ǹ�
    // - �ݵ�� free()�� ����

    // ���� �Ҵ�
    // - �ʿ��� �� �������� �޸𸮸� ���
    yuni.intro = (char*)malloc(80); // intro �����Ϳ� 80Byte �Ҵ� �޸��� �����ּ� ����
    printf("�ڱ�Ұ�: ");
    gets(yuni.intro);

    printf("�̸� : %s\n", yuni.name);
    printf("���� : %s\n", yuni.age);
    printf("Ű : %s\n", yuni.height);
    printf("�ڱ�Ұ� : %s\n", yuni.intro);
    free(yuni.intro);  // ���� �Ҵ� �޸� ����
}
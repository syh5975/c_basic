#include <stdio.h>

void printf_line(void);

int main() {
    print_line();
    printf("�й�    �̸�    ����    ����\n");
    print_line();
}

void printf_line(void) {
    for(int i=0; i<50; i++) {
        printf("-");
    }
    printf("\n");
}
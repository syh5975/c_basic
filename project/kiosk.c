#include <stdio.h>
#include <string.h>

// �޴�ǥ ����
char *burger_name[3] = {"���", "����� ����", "���̹���"};
char *side_name[3] = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3] = {"�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ����
char *menu_save[3] = {};  // �ֹ� �޴�
int price_save[3] = {}; // �ֹ� ����

int main() {
    // 1.���� �޴� ���
    print_main_menu();

    // 2. ����� ���� �޴� ����
    int menu_num = 0; // ����ڰ� ������ �޴���ȣ ����]
    puts("�� ���Ͻô� �޴���ȣ�� �������ּ���.");
    while(1) {   // 1.True, 0:False
    printf(">> ��ȣ: ");
    scanf("%d", &menu_num);
    if(menu_num < 1 || menu_num > 4) {  // 1~4 out

        puts("Warling: 1~4�� ��ȣ�� �Է����ּ���.");
    }
    // 1~4 in ��ȣ �� �Ѿ (break)
}

    // 3. ���θ޴� ���
    int choice_num; 
    if(menu_num == 1) {   // �ܹ��� ��Ʈ
    
    } else if(menu_num == 2) {   // �ܹ���
      puts("����������������������������");
      puts("== Burger munu ==");
      for(int i=0; i<3; i++) {
        printf("��� %d \n", i+1) {
            printf("��� %d.%s \n", i+1, burger_name[i], burger_price[i]);
        }
      }
      puts("��� 1. ���(5900��)");
      puts("��� 2. ��������(5500��)");
      puts("��� 3. ���̹���(4300��)");
      puts("����������������������������");

    } else if(menu_num == 3) { // ���̵�

    } else if(menu_num == 4)
    printf(">> ��ȣ:");
    scanf("%d", &menu_num);
 

    // 1~4������ ���� ������ �׳� �Ѿ
    // 1~4 �̿��� ���� ������  "�ùٸ� ���� �Է����ּ���" ���
    if(menu_num >= 1 && menu_num <= 4) {
        
    } else {
        puts("Warling: 1~4�� ��ȣ�� �Է����ּ���.");
    }

    if(menu_num < 1 || menu_num > 4) {
        puts("Warling: 1~4�� ��ȣ�� �Է����ּ���.");
    }

}

// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    puts("����������������������������");
    puts("�� CNU ���� 2022");
    puts("��  - version 1.0");
    puts("��  - develop by cholong02");
    puts("�� date 2022.12.07");
    puts("����������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���.");
    puts("����������������������������");
    puts("�� 1. �ܹ��� ��Ʈ"); // �ܹ���, ���̵�, ����
    puts("�� 2. �ܹ��� �޴�"); // �ܹ���
    puts("�� 3. ���̵� �޴�"); // ���̵�
    puts("�� 4. �帵ũ �޴�"); // ����
    puts("����������������������������");


}

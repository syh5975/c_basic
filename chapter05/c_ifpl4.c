#include<stdio.h>
#include<string.h>
// BMI ����
/**
 *1. ����� ����, ������
 2. ��ȯ : �� ��ȯ  cm(m)
 3. ��� : bmi ���
 4. ���� :bmi �� ���� ��� �ο�
 5. ��� : bmi ��� 
 */

    int main(void){
        int height;     //(cm)
        int weight;     //(kg)

        printf("������ �Է��ϼ���:" );
        scanf("%d", &height);
        printf("�����Ը� �Է��ϼ���:" );
        scanf("%d", &weight);

        //printf("%d cm, %d kg", height,weight);

        // ��ȯ cm -> m
        double height_m = (double)height/100;
        //printf("%.2lf m", height_m);
        // ��� bmi = kg / m^2
        double bmi_value= weight/(height_m*height_m);
        
        char bmi_degree[20];

        if(bmi_value<18.5){
            strcpy(bmi_degree, "��ü��");
        } else if(bmi_value>=18.5&&bmi_value<23){
            strcpy(bmi_degree, "����");
        } else if(bmi_value>=23&&bmi_value<26){
            strcpy(bmi_degree, "��ü��");
        } else if(bmi_value>=26&&bmi_value<30){
            strcpy(bmi_degree, "��");
        } else {
            strcpy(bmi_degree, "�� ��");
        }

        printf("���� %d cm, ������ %d kg ����\n", height, weight);
        printf("����� BMI ������ %.2lf�� %s�Դϴ�", bmi_value, bmi_degree);

    return 0;
    }
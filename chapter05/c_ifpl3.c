#include <stdio.h>

int main (void){
    
    int num1, num2;

    printf(" ù��° �� : ");
    scanf("%d", &num1);

    printf("\n �ι�° �� : ");
    scanf("%d", &num2);

    printf("ù��°�� : %d, �ι�°�� : %d\n", num1, num2);

        if(num1>num2){
            printf("ù��° �� %d�� �ι�° �� %d���� Ů�ϴ�", num1, num2);}
        
        else if (num1==num2)
        {
            printf("ù��° �� %d�� �ι�° �� %d�� �����ϴ�", num1, num2);
        }
        else {
            printf("ù��° �� %d�� �ι�° �� %d���� �۽��ϴ�", num1, num2);
        }

    return 0;
}
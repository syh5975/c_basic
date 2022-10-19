#include <stdio.h>

int main (void){
    
    int num1, num2;

    printf(" 첫번째 수 : ");
    scanf("%d", &num1);

    printf("\n 두번째 수 : ");
    scanf("%d", &num2);

    printf("첫번째수 : %d, 두번째수 : %d\n", num1, num2);

        if(num1>num2){
            printf("첫번째 수 %d가 두번째 수 %d보다 큽니다", num1, num2);}
        
        else if (num1==num2)
        {
            printf("첫번째 수 %d와 두번째 수 %d가 같습니다", num1, num2);
        }
        else {
            printf("첫번째 수 %d가 두번째 수 %d보다 작습니다", num1, num2);
        }

    return 0;
}
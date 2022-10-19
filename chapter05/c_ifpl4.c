#include<stdio.h>
#include<string.h>
// BMI 계산기
/**
 *1. 사용자 신장, 몸무게
 2. 변환 : 값 변환  cm(m)
 3. 계산 : bmi 계산
 4. 조건 :bmi 에 따른 등급 부여
 5. 출력 : bmi 결과 
 */

    int main(void){
        int height;     //(cm)
        int weight;     //(kg)

        printf("신장을 입력하세요:" );
        scanf("%d", &height);
        printf("몸무게를 입력하세요:" );
        scanf("%d", &weight);

        //printf("%d cm, %d kg", height,weight);

        // 변환 cm -> m
        double height_m = (double)height/100;
        //printf("%.2lf m", height_m);
        // 계산 bmi = kg / m^2
        double bmi_value= weight/(height_m*height_m);
        
        char bmi_degree[20];

        if(bmi_value<18.5){
            strcpy(bmi_degree, "저체중");
        } else if(bmi_value>=18.5&&bmi_value<23){
            strcpy(bmi_degree, "정상");
        } else if(bmi_value>=23&&bmi_value<26){
            strcpy(bmi_degree, "과체중");
        } else if(bmi_value>=26&&bmi_value<30){
            strcpy(bmi_degree, "비만");
        } else {
            strcpy(bmi_degree, "고도 비만");
        }

        printf("신장 %d cm, 몸무게 %d kg 으로\n", height, weight);
        printf("당신의 BMI 지수는 %.2lf로 %s입니다", bmi_value, bmi_degree);

    return 0;
    }
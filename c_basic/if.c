#include <stdio.h>

int main (){
    int input;
    
    // printf("아무 숫자나 입력해보세요 \n");
    // scanf("%d", &input);
    if(input == 7){
        printf("행운의 숫자 7을 입력하였습니다");
    }else{
        printf("%d를 입력하셨군요 \n", input);
    }

    double i, j;
    printf("나누고 싶은 두 정수를 입력하세요 : ");
    scanf("%lf %lf", &i, &j);
    if(j==0){
        printf("0으로 나눌 수는 없습니다. \n");
        return 0;
    }else {
        printf("%f 를 %f로 나눈 결과는 : %f입니다.", i, j, i/j);

    }


    return 0;
}
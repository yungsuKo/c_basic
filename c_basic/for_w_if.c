#include <stdio.h>

int main() {
    int userAnswer;
    for(;;){
        printf("컴퓨터가 생각한 숫자를 맞춰 보세요 : ");
        scanf("%d", &userAnswer);
        if(userAnswer == 3){
            printf("right \n");
            break;
        }else{
            printf("wrong \n");
        }
    }

    return 0;
}
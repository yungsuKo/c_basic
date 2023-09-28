#include <stdio.h>

int main(){
    int input;

    printf("마이펫 업그레이드\n");
    printf("1. 밥주기 \n");
    printf("2. 씻기기 \n");
    printf("3. 재우기 \n");
    
    for(;;){
        printf("무엇을 하실 것인지 입력하세요 \n");
        scanf("%d", &input);
        switch(input){
            case 1:
                printf("1111 \n");
                break;

            case 3:
                printf("2222 \n");
                break;

            case 5:
                printf("3333 \n");
                break;
            
            // default:
            //     printf("존재하지 않는 명령어 입니다. \n");
            //     break;
        }
    }

    return 0;
}
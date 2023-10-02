#include <stdio.h>
// 문자열 입력받기
int str_length(char *dest);
int main(){
    char str[30];
    int i;
    char chr;

    printf("숫자를 입력해주세요 : ");
    scanf("%d", &i);

    fflush(stdin);


    printf("문자를 입력해주세요 : ");
    scanf("%c", &chr);

    printf("문자열을 입력해주세요 : ");
    scanf("%s", str);

    printf("문자열의 길이는 %d 입니다.", str_length(str));
    // 띄어쓰기를 받아오지 못하는데 이를 이해하기 위해서는 버퍼에 대한 이해가 필요함.
    return 0;
}

int str_length(char *dest){
    int i = 0;
    while(*(dest+i)){
        i ++;
    }
    return i;
}
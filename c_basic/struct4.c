#include <stdio.h>
// 문자열 다루기, literal?
char copy_str(char *dest, const char *src);
struct Books {
    char name[30];
    char auth[30];
    char publ[30];
    int borrow;
};
int main(){
    struct Books book_list[3];
    int i;
    for(i = 0; i<3; i++){
        printf("책 이름, 작가이름, 발간일자를 입력해주세요 \n");
        scanf("%s%s%s", book_list[i].name, book_list[i].auth,book_list[i].publ);
        book_list[i].borrow = 0;
    }

    for(i = 0; i<3; i++){
        printf("------------------------------- \n");
        printf("책 %s 의 정보\n", book_list[i].name);
        printf("저자 : %s \n", book_list[i].auth);
        printf("발행일자 : %s \n", book_list[i].publ);

        if (book_list[i].borrow == 0) {
            printf("안 빌려짐\n");
        } else {
            printf("빌려짐 \n");
        }
    }

    return 0;
}

char copy_str(char *dest, const char *src){
    while(*src){
        *dest = *src;
        src ++;
        dest ++;
    }
    *dest = '\0';
    return 1;
}

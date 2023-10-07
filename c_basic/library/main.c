#include <stdio.h>
#include <stdlib.h>

struct BOOK {
    char book_name[30];
    char auth_name[30];
    char publ_name[30];
    int borrowed;
};

typedef struct BOOK BOOK;

char compare(char* str1, char* str2);
int register_book(BOOK *book_list, int *nth);
int search_book(BOOK *book_list, int total_num_book);
int borrow_book(BOOK *book_list);
int return_book(BOOK *book_list);
int print_book_list(BOOK *book_list, int total_num_book);

int main() {
    int user_choice; 
    int num_total_book = 0;
    BOOK *book_list;

    printf("도서관의 최대 보관 장서 수를 설정해주세요 : ");
    scanf("%d", &user_choice);

    book_list = (BOOK *)malloc(sizeof(BOOK) * user_choice);

    while(1){
        printf("도서 관리 프로그램 \n");
        printf("메뉴를 선택하세요 \n");
        printf("1. 책을 새로 추가하기 \n");
        printf("2. 책을 검색하기 \n");
        printf("3. 책을 빌리기 \n");
        printf("4. 책을 반납하기 \n");
        printf("5. 프로그램 종료 \n");
        printf("6. book_list.txt로 출력하기 \n");
        printf("당신의 선택은 : ");
        scanf("%d", &user_choice);

        if(user_choice == 1){
            register_book(book_list, &num_total_book);
        }else if(user_choice == 2){
            search_book(book_list, num_total_book);
        }else if(user_choice == 3){
            borrow_book(book_list);
        }else if(user_choice == 4){
            return_book(book_list);
        }else if(user_choice == 5){
            break;
        }else if(user_choice == 6){
            print_book_list(book_list, num_total_book);
        }
    }

    free(book_list);
    return 0;
}

char compare(char* str1, char* str2){
    while(*str1){
        if(*str1 != *str2){
            return 0;
        }
        str1 ++;
        str2 ++;
    }
    if(*str2 == '\0'){
        return 1;
    }
    return 0;
}
int register_book(BOOK *book_list, int *nth){
    printf("책의 제목 : ");
    scanf("%s", book_list[*nth].book_name);
    printf("책의 저자 : ");
    scanf("%s", book_list[*nth].auth_name);
    printf("책의 출판사 : ");
    scanf("%s", book_list[*nth].publ_name);
    book_list[*nth].borrowed = 0;
    (*nth)++;
    return 0;
}
int search_book(BOOK *book_list, int total_num_book){
    int user_input;
    int i;
    char user_search[30];

    printf("어느 것으로 검색할 것인가요? \n");
    printf("1. 책 제목\n");
    printf("2. 지은이 검색\n");
    printf("3. 출판사 검색\n");
    scanf("%d", &user_input);
    printf("검색할 단어를 입력해주세요.\n");
    scanf("%s", user_search);
    printf("검색결과 \n");

    if(user_input == 1){
        for(i = 0; i<total_num_book; i++){
            if(compare(book_list[i].book_name, user_search)){
                printf("번호 : %d // 책이름 : %s// 지은이 : %s// 출판사 : %s \n", i, book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
            }
        }
    } else if(user_input == 2){
        for(i = 0; i<total_num_book; i++){
            if(compare(book_list[i].auth_name, user_search)){
                printf("번호 : %d // 책이름 : %s// 지은이 : %s// 출판사 : %s \n", i, book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
            }
        }
    } else if(user_input == 3){
        for(i = 0; i<total_num_book; i++){
            if(compare(book_list[i].publ_name, user_search)){
                printf("번호 : %d // 책이름 : %s// 지은이 : %s// 출판사 : %s \n", i, book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
            }
        }
    }
    return 0;
}
int borrow_book(BOOK *book_list){
    int book_num;
    printf("빌릴 책 번호를 입력 : ");
    scanf("%d", &book_num);
    if(book_list[book_num].borrowed==0){
        book_list[book_num].borrowed = 1;
        printf("책 대여 성공 \n");
    }else{
        printf("책 대여 실패 \n");
    }

    return 0;
}
int return_book(BOOK *book_list){
    int book_num;
    printf("반납 책 번호를 입력 : ");
    scanf("%d", &book_num);
    if(book_list[book_num].borrowed==1){
        book_list[book_num].borrowed = 0;
        printf("책 반납 성공 \n");
    }else{
        printf("책 반납 실패 \n");
    }

    return 0;
}

int print_book_list(BOOK *book_list, int total_num_book){
    int i;
    FILE *fp;
    fp = fopen("book_list.txt", "w");
    if (fp == NULL) {
        printf("출력 오류 ! \n");
        return -1;
    }

    for(i=0; i<total_num_book; i++){
        fprintf(fp, "번호 : %d // 책이름 : %s// 지은이 : %s// 출판사 : %s", i, book_list[i].book_name, book_list[i].auth_name, book_list[i].publ_name);
        if(book_list[i].borrowed == 0){
            fprintf(fp, "/ No \n");
        }else {
            fprintf(fp, "/ Yes \n");
        }
        
    }
    printf("출력완료");
    fclose(fp);
    return 0;
}
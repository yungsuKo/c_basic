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
    struct Books Harry_potter;

    copy_str(Harry_potter.name, "Harry Potter");
    copy_str(Harry_potter.auth, "Tom");
    copy_str(Harry_potter.publ, "2023-01-01");
    Harry_potter.borrow = 1;

    printf("책이름     : %s \n", Harry_potter.name);
    printf("출판사 이름 : %s \n", Harry_potter.auth);
    printf("발간 일자   : %s \n", Harry_potter.publ);

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

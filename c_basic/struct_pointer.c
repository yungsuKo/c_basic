#include <stdio.h>
// 문자열 다루기, literal?
char copy_str(char *dest, const char *src);
struct test {
    int a, b;
};
int main(){
    struct test st;
    struct test *stp;

    stp = &st;

    // (*stp).a = 0;
    stp -> a = 3;
    (*stp).b = 1;

    printf("st.a : %d \n", st.a);
    printf("*stp.a : %d \n", (*stp).a);
    printf("st.b : %d \n", st.b);

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

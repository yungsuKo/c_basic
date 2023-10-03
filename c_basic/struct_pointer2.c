#include <stdio.h>
// 문자열 다루기, literal?
int add_one(int *a);
struct test {
    int c;
};
int main(){
    struct test t;
    struct test *p = &t;

    p->c=1;
    printf("t.c : %d \n", t.c);
    add_one(&t.c);
    printf("t.c : %d \n", t.c);
    add_one(&p->c);
    printf("t.c : %d \n", t.c);
    add_one(&(*p).c);
    printf("t.c : %d \n", t.c);
    printf("t : %p \n", &t);

    
}

int add_one(int *a){
    *a += 1;
    return 0;
}
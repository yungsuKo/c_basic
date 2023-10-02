#include <stdio.h>
// 문자열 다루기, literal?
int add_one(int *pc);
struct TEST {
    int c;
};
int main(){
    struct TEST t;
    struct TEST *pt = &t;

    pt->c=2;
    printf("t.c : %d \n", t.c);
    add_one(&t.c);
    printf("t.c : %d \n", t.c);

    return 0;
}

int add_one(int *pc){
    *pc +=1;
    return 0;
}

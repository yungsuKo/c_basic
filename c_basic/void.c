#include <stdio.h>

void add_one(int *i){
    *i += 1;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 0;
    int b = 2;
    printf("%d \n", a);
    add_one(&a);
    printf("%d \n", a);

    swap(&a,&b);
    printf("%d \n", a);
    printf("%d \n", b);

    return 0;
}
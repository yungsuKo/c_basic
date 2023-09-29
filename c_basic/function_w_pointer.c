#include <stdio.h>

int plus(int *p) {
    *p += 3;
    return 0;
}
int swap(int *pa, int *pb);

int main(){
    int a = 2;
    int b = 5;
    printf("a: %d, b: %d \n", a, b);
    
    swap(&a, &b);

    printf("a: %d, b: %d \n", a, b);

    return 0;
}

int swap(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    return 0;
}

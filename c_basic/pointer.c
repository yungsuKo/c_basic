#include <stdio.h>

int main(){
    int a = 123;
    int* p = &a;
    printf("%p \n",p);
    printf("%p \n",&a);
    return 0;
}
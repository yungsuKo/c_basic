#include <stdio.h>

int main(){
    int a;
    int b;
    // int* const pa = &a;
    const int *pa = &a;
    
    printf("%p \n", pa);
    pa = &b;  // 올바른 문장
    printf("%p \n", pa);
    
    return 0;
}
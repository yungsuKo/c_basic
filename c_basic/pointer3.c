#include <stdio.h>

int main(){
    int a;
    int b;
    int* const pa = &a;
    
    printf("%p", pa);
    *pa = 3;  // 올바른 문장
    
    return 0;
}
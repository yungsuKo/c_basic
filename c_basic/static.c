#include <stdio.h>
// 문자열 다루기, literal?
int global = 1;
int add_one(){
    global +=1;
    return 0;
}

int* error(){
    int a = 2;
    return &a;
}
int* non_error(){
    static int a = 2;
    return &a;
}

int main(){
    // struct Human a = {1,1,1,0};
    // struct Human b = {2,2,2,1};
    int *p = non_error();
    printf("%d \n", *p);

    return 0;
}

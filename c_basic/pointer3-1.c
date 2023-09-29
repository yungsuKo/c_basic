#include <stdio.h>

int main(){
    int arr[3] = {1, 2, 3};
    int a = 1;
    int *parr;
    int *parrA;
    
    parr = &arr[0];
    parrA = &a;

    printf("a : %p \n", a);
    printf("arr : %p \n", arr);
    printf("&arr[0] : %p \n", &arr[0]);
    printf("%p \n", parr);
    printf("%d \n", *(parr));
    printf("%p \n", parrA);
    printf("%d \n", *parrA);
    
    return 0;
}
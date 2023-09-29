#include <stdio.h>

int main(){
    int arr[3] = {1, 2, 3};
    int *parrt;

    parrt = arr;
    // /* parr = &arr[0]; 도 동일하다! */
    printf("%d \n", parrt+2 -arr);
    printf("%d \n", sizeof(arr));
    // printf("arr[1] : %d \n", arr[1]);
    // printf("parr[1] : %d \n", parr[1]);

    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
    printf("&pa : %p // ppa : %p \n", &pa, ppa);

    return 0;
}
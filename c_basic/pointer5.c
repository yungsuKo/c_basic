#include <stdio.h>

int print_hello() {
    printf("Hello \n");
    return 0;
}

int main(){
    int arr[3] = {1, 2, 3};
    int (*parrt)[3] = &arr;

    printf("%d \n", (*parrt)[0]);
    printf("%d \n", (*parrt)[1]);

    return 0;
}
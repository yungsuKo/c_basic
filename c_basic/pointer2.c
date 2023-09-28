#include <stdio.h>

int main(){
    int arr[8] = {1,2,3,4,5,6,7};
    int *parr = &arr;

    printf("arr[0] : %d \n",arr[7]);
    printf("parr : %d \n", *(parr+7));
    
    return 0;
}
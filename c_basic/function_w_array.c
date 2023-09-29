#include <stdio.h>

int sum_one(int *arr);

int main(){
    int i, arr[3];
    
    for(i =0; i< 3; i++){
        scanf("%d", &arr[i]);
    }
    sum_one(arr);
    printf("%d, %d, %d \n", arr[0], arr[1], arr[2]);

    return 0;
}

int sum_one(int *arr){
    int i;
    for(i = 0; i<3; i++){
        printf("infunction : %d \n", arr[i]);
        arr[i]++;
    }

    return 0;
}

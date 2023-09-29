#include <stdio.h>

int max(int *arr);

int main(){
    int i, arr[10];
    
    for(i =0; i< 10; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("입력된 배열중 가장 큰수 : %d \n", max(arr));

    return 0;
}

int max(int *arr){
    int i, max;
    max= arr[0];

    for(i = 0; i<10; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}

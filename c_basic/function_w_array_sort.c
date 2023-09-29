#include <stdio.h>

int sort(int *arr, int size);

int main(){
    int i, arr[10];
    
    for(i =0; i< 10; i++){
        scanf("%d", &arr[i]);
    }
    
    sort(arr, sizeof(arr)/sizeof(int));

    for(i =0; i< 10; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

int sort(int *arr, int size){
    int i,j, k,temp;

    for(i = 0; i<size; i++){
        for(j=0; j<size-1; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
            printf("%d, %d : ",i, j );
            for(k =0; k< 10; k++){
                printf("%d ", arr[k]);
                printf("\n");
            }
        }
    }

    return 0;
}

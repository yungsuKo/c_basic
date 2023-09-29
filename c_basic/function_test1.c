#include <stdio.h>

int input(int *scores, int size);
int sort(int *avg, int size);
int main(){
    int i, arr[5][3], avg[5], total_avg;
    
    for(i =0; i<5; i++){
        printf("학생 %d 점수 : ", i);
        input(arr[i], sizeof(arr[i])/sizeof(int));
        avg[i] = arr[i][0] + arr[i][1]+ arr[i][2];
    }
    sort(avg, sizeof(avg)/sizeof(int));
    total_avg = (avg[0]+avg[1]+avg[2]+avg[3]+avg[4])/5;
    
    for(i =0; i< 5; i++){
        if(avg[i] >= total_avg){
            printf("%d 합격", avg[i]);
        }else{
            printf("%d 불합격", avg[i]);
        }
        
    }

    return 0;
}

int input(int *scores, int size){
    int i;
    for(i=0; i<3; i++){
        scanf("%d", &scores[i]);
    }
    return 0;
}
int sort(int *avg, int size){
    int i, j, temp;
    for(i = 0; i < size; i++){
        for(j = 0; j<size-1; j++){
            if(avg[j]<avg[j+1]){
                temp = avg[j];
                avg[j] = avg[j+1];
                avg[j+1] = temp;
            }
        }
    }
}
#include <stdio.h>

int main() {
    int i = 0;
    int subjectCnt, score;
    double scoreSum = 0;

    printf("몇 개의 시험을 보았나요? ");
    scanf("%d", &subjectCnt);

    for (i=1; i<= subjectCnt; i++){
        printf("성적 %d : ", i);
        scanf("%d \n", &score);
        scoreSum += score;
    }
    printf("당신의 시험 평균은 %.2f \n", scoreSum/subjectCnt);
    return 0;
}

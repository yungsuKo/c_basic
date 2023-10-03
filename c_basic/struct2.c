#include <stdio.h>
// 문자열 다루기, literal?
int add_one(int *pc);
struct Human {
    int age;
    int height;
    int weight;
};
int main(){
    struct Human Tom;
    // struct TEST *pt = &t;
    
    // pt->c=2;
    Tom.age = 27;
    Tom.height = 175;
    Tom.weight = 65;
    int a = 2;

    printf("Tom 에 대한 정보 \n");
    printf("나이   : %d\n", Tom.age);
    printf("키    : %d\n", Tom.height);
    printf("몸무게 : %d\n", Tom.weight);
    printf("몸무게 : %p\n", &Tom.weight);

    return 0;
}

int add_one(int *pc){
    *pc +=1;
    return 0;
}

#include <stdio.h>
// 문자열 다루기, literal?
struct Human {
    int age;
    int height;
    int weight;
    int gender;
} a = {1,2,3,0}, b = {4,5,6,1};
int Print_Status(struct Human human);

int main(){
    // struct Human a = {1,1,1,0};
    // struct Human b = {2,2,2,1};
    Print_Status(a);
    Print_Status(b);

    return 0;
}

int Print_Status(struct Human human){
    if(human.gender == 0){
        printf("hi male \n");
    }else{
        printf("hi female \n");
    }
    return 0;
}
int add_one(int *a){
    *a += 1;
    return 0;
}
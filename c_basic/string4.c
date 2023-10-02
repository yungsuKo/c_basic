#include <stdio.h>

int str_length(char *dest);
int main(){
    char str1[] = "What is your name";
    printf("이 문자열 길이는 : %d \n", str_length(str1));

    return 0;
}

int str_length(char *dest){
    int i = 0;
    while(*(dest+i)){
        i ++;
    }
    return i;
}
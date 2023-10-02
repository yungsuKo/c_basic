#include <stdio.h>

int str_add(char *dest, char *src);
int main(){
    char str1[100] = "hello my name is ";
    char str2[] = "Tom";

    str_add(str1, str2);

    printf("%s", str1);
    return 0;
}

int str_add(char *dest, char *src){
    while(*dest){
        dest++;
    }

    while(*src){
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';

    return 1;
}
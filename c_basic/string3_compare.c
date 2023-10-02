#include <stdio.h>

int str_compare(char *dest, char *src);
int main(){
    char str1[] = "Aom";
    char str2[] = "Tom";

    printf("%d", str_compare(str1, str2));
    return 0;
}

int str_compare(char *dest, char *src){
    while(*dest){
        if(*dest == *src){
            dest++;
            src++;
        }else{
            return 0;
        }
    }
    if(*src){
        return 0;
    }

    return 1;
}
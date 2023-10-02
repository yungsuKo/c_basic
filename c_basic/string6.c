#include <stdio.h>
// 문자열 다루기, literal?
int main(){
    char str1[] = "hello1";
    char str2[] = "hello2";

    str1[0] = 'T';

    printf("%s \n", str1);

    return 0;
}


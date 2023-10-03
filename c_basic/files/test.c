#include "human.c"
#include <stdio.h>

int main(){
    struct Human Lee = Create_Human("qwer", 40, MALE);
    Print_Human(&Lee);
    return 0;
}
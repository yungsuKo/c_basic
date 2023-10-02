#include <stdio.h>

int main()
{
    // char a, b, c;
    // a = 100;
    // b = 300;
    // c = a+b;
    // printf("%d + %d = %d", a, b, c);

    int arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 10; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
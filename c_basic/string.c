#include <stdio.h>

int main()
{
    const char *str = "abcdefg";
    char c_str[] = "abcdefg";

    printf("%s \n", str);
    printf("%s \n", c_str);

    int num;
    char c;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    printf("문자를 입력하세요 : ");
    scanf("%c", &c);

    return 0;
}
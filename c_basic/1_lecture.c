// eax 란 cpu의 rax 레지스터의 하위 32비트
// 어셈블리 []는 메모리방을 의미함.

// 하드디스크에서 불러와서 ram에 저장
#include <stdio.h> // 헤더파일, stdio.h -> 표준 입출력을 의미함.
int main(void){
    printf("   * \n  * * \n * * *\n");
    int a;
    a= 10;
    printf("a의 값은 : %d \n", a);
    printf("a의 값은 : %f \n", 1.0);

    int b;
    b = 2147483647;
    printf("b는 %d \n", b);
    printf("b는 %o \n", b+1);

    char c = 'a';
    printf("c의 값과 들어있는 문자는? \n값: %d\n문자 : %c \n", c, c);

    double celsius;

    printf("섭씨온도를 화씨온도로 바꿔주는 프로그램 입니다. \n");
    printf("섭씨온도를 입력해주세요 \n");
    scanf("%lf", &celsius);

    printf("섭씨온도 %.3f는 화씨로 %.3f입니다.", celsius, celsius*9/5+32);

    return 0;
}
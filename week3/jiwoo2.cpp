#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("정수 : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("\"%d는(은) 양수입니다.", a);
        printf("이 수의 절댓값은 %d이고,", a);
        b = a / 4;
        printf(" \n   절댓값을 4로 나눈 몫은 %d이고,", b);
        c = a % 4;
        printf(" \n      나머지는 %d입니다.\"", c);
    }
    else
    {
        printf("\"%d는(은) 음수입니다.", a);
        a = -a;
        printf("이 수의 절댓값은 %d이고,", a);
        b = a / 4;
        printf("\n   절댓값을 4로 나눈 몫은 %d이고,", b);
        c = a % 4;
        printf("\n      나머지는 %d입니다.\"", c);
    }

    return 0;

}
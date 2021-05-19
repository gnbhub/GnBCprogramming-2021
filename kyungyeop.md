숫자 피라미드 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{    int a;
    int b, c;
    for (a = 11; a > 10;)
    {
        printf("라인 수 : ");
        scanf("%d", &a);
        if (a > 10) {
            printf("[입력오류]피라미드 라인 수는 10이하의 양의 정수만 가능합니다. 다시 입력해주세요. \n");
        }
    }
    if (a <= 10)
    {
        for (int b = 0; b < a; b++)
        {
            for (int c = 0; c < a - b; c++)
            {
                printf(" ");
            }
            for (int c = 0; c<= b; c++)
            {
                printf("%d", b-c);
            }
            for (int c = 0; c<b; c++)
            {
                printf("%d", c+1);
            }
            printf("\n");
        }
    }
    return 0;
}


![image01](https://user-images.githubusercontent.com/81094980/118837369-b226f180-b8ff-11eb-92c2-ca5b5fe24ee3.png)

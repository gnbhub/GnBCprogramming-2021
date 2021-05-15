1. 최대 공약수 계산하기

```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int x, y, b ,s , r;
    printf("정수1 ");
    scanf("%d", &x);
    printf("정수2 ");
    scanf("%d", &y);


    if (x < y) {
        s = x;
        b = y;
    }
    else {
        s = y;
        b = x;
    }
    while(s!=0) {


        r = b % s;
        b = s;
        s = r;
    
        
    }

    printf("최대공약수는 %d 입니다.", b);

    return 0;
}


```


![jiwoo5-1][week5/jiwoo/jiwoo5-1.png]

2. 피라미드 출력하기

```C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    
    int i,j,a;



    for (a = 11; a > 10;) {

        printf("라인 수 : ");
        scanf("%d", &a);
        if (a > 10) {
            printf("[입력오류]피라미드 라인 수는 10이하의 양의 정수만 가능합니다. 다시 입력해주세요. \n");

        }
    }
    if (a <=10)

    {    

        for (i = 0; i < a; i++)
        {
            for (j = 0; a - i > j; j++)
            {
                printf(" ");

            }
            for (j = 0; j < i ; j++)
            {
                
                printf("%d", i-j);
            }
            for (j = 0; j < i + 1; j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        
    }

    return 0;
}

```

![jiwoo5-2][week5/jiwoo/jiwoo5-2.png]

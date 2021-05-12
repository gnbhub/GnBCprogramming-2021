#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, i, j;
    printf("직각 삼각형을 출력합니다.\n");
    printf("단 : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("직각 삼각형을 출력합니다.\n");
    printf("단 : ");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {
        for (j = a; j - i > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("직각 삼각형을 출력합니다.\n");
    printf("단 : ");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {
        for (j = a; j - i > 0; j--)
        {
            printf(" ");

        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("직각 삼각형을 출력합니다.\n");
    printf("단 : ");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {

        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (j = a; j - i > 0; j--)
        {
            printf("*");
        }


        printf("\n");
    }

  
    printf("피라미드를 출력합니다.\n");
    printf("단 : ");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {

        for (j = 0; a - i > j; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i + 1; j++)
        {
            printf("*");
        }


        printf("\n");
    }

    return 0;

}
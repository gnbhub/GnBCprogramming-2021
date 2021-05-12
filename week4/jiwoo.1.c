#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c, d;
    
    printf("점1의 x좌표 : ");
    scanf("%d", &a);
    printf("점1의 y좌표 : ");
    scanf("%d", &b);
    printf("점2의 x좌표 : ");
    scanf("%d", &c);
    printf("점2의 y좌표 : ");
    scanf("%d", &d);

    float l, h;

    if (a == c || b == d)
    {
        printf("직사각형이 아닙니다.");
    }
    else

        if (a > c) {
            l = a - c;
        }
        else {
            l = c - a;
        }

        if (b > d) {
            h = b - d;
        }
        else {
            h = d - b;
        }

        printf("둘레의 길이 : %f\n",2*l+2*h);
        printf("대각선의 길이 : %f\n", sqrt(l * l + h * h));
        printf("넓이 : %f\n", l * h);

        return 0;

}
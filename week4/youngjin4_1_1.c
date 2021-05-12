#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)

{
	double a, b, c, e;
	double x, y, result1, result2, result3;
	printf("점1의 x좌표 : ");
	scanf("%lf", &a);

	printf("점1의 y좌표 : ");
	scanf("%lf", &b);

	printf("점2의 x좌표 : ");
	scanf("%lf", &c);

	printf("점2의 y좌표 : ");
	scanf("%lf", &e);

	if (a == c || b == e)
		printf("직사각형이 아닙니다.");

	else {
		x = c - a;
		result1 = fabs(x, 0);

		y = e - b;
		result2 = fabs(y, 0);
		printf("둘레의 길이 : %.2lf\n", 2 * (result1 + result2));

		result3 = sqrt(result1 * result1 + result2 * result2, 0);

		printf("대각선의 길이 : %.2lf\n", result3);

		printf("넓이 : %.2lf\n", result1 * result2);

	}	return 0;
}

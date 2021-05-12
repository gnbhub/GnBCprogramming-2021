#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	double x1, y1, x2, y2;
	double p, d, a;

	printf("점1의 x좌표: ");
	scanf("%lf", &x1);
	printf("점1의 y좌표: ");
	scanf("%lf", &y1);
	printf("점2의 x좌표: ");
	scanf("%lf", &x2);
	printf("점2의 y좌표: ");
	scanf("%lf", &y2);

	p = 2 * (fabs(x2 - x1) + fabs(y2 - y1));
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	a = fabs((x2 - x1) * (y2 - y1));

	if (x1 != x2 && y1 != y2){
		printf("둘레의 길이: %.2lf", p);
		printf("대각선의 길이: %.2lf", d);
		printf("넓이: %.2lf", a);
	}
	else
		printf("직사각형이 아닙니다.");

	return 0;
}

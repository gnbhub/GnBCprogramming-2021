#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b=1, n;
	printf("n을 입력하시오 : ");
	scanf("%d", &n);
	
	for (a = 1; a <= n; a++)
		b = a * b;
	
	if (b < 0)
		printf("overflow 발생!");
	else
		printf("n! = %d", b);
	return 0;
}

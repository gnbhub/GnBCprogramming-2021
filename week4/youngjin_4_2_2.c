#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("출력할 단 : ");
	scanf("%d", &a);
	printf("\n\n----3단----\n");
	for (b = 1; b<=9; b++)
	{
		printf("%d X %d = %d\n", a, b, a * b);
	}
	return 0;
}

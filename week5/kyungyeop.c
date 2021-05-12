#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, i, result = 0, a, b;
	printf("두 개의 정수 입력: \n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		a = num1;
		b = num2;
	}
	else
	{
		a = num2;
		b = num1;
	}

	for (i = 1; i <= a; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			result = i;
	}

	printf("%d", result);
	return 0;
}

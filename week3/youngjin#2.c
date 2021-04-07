#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0;
	char c = 0;
	printf("식을 입력하세요(ex. 7 + 4): ");
	scanf("%d %c %d", &a, &c, &b); // 되긴 되는데 여기서 C6031 경고창이 뜸. 왜인지 모르겠음...
	if (c == '+')
		printf("%d", a + b);
	else if (c == '-')
		printf("%d", a - b);
	else if (c == '*')
		printf("%d", a * b);
	else if (c == '%')
		printf("%d", a % b);
	else if (c == '/')
		printf("%d", a / b);

	return 0;
}

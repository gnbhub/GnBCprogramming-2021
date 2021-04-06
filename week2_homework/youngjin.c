#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b, c;

	printf("첫번째 양의 정수 : ");
	scanf("%d", &a);
	printf("두번째 양의 정수 : ");
	scanf("%d", &b);
	printf("\n\n");

	printf("number     |decimal    |octal      |hexadecimal|\n");
	printf("number 1   |%+11d|%11o|%11x|\n", a, a, a);
	printf("number 2   |%+11d|%11o|%11x|\n", b, b, b);

	c = a + b;
	printf("sum        |%-+11d|%-11o|%-11x|", c, c, c);

	return 0;
}

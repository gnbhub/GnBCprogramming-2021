#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int a;
	printf("a를입력하세요\n");
	scanf("%d", &a);
	int b;
	printf("b를입력하세요\n");
	scanf("%d", &b);
	printf("%-11s|%-11s|%-11s|%-11sl", "number", "decimal" , "otcal", "hexadecimal");
	printf("\n%-11s|%+11d|%+11o|%+11x|", "number 1", a, a, a);
	printf("\n%-11s|%+11d|%+11o|%+11x|", "number 2", b, b, b);
	printf("\n%-11s|%-+11d|%-11o|%-11x|", "sum", a+b, a+b, a+b);

	
	return 0;
}

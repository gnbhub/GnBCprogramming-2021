#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1 = "%d""%o""%x", num2 = "%d""%o""%x", result;

	printf("첫 번째 양의 정수 : ");
	scanf("%d", &num1);

	printf("두 번째 양의 정수 : ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("\n\nnumber     |decimal    |octal      |hexadecimal|\n");
	printf("number 1   |%+11d|%11o|%11x|\n", num1,num1,num1);
	printf("number 2   |%+11d|%11o|%11x|\n", num2,num2,num2);
	printf("sum        |%-+11d|%-11o|%-11x|\n",result,result,result);
	
	return 0;

}

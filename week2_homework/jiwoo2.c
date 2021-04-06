#include <stdio.h>

int main(void)
{
	
	int num1;
	int num2;
	int num3;

	printf("첫번째 양의 정수 : ");
	scanf_s("%d", &num1);
	printf("두번째 양의 정수 : ");
	scanf_s(" %d", &num2);
	
	
	char a[] = "number";
	char b[] = "decimal";
	char c[] = "otcal";
	char d[] = "hexadecimal";
	char e[] = "number 1";
	char f[] = "number 2";
	char g[] = "sum";

	printf("\n\n\n%-11s|%-11s|%-11s|%-11s|",a,b,c,d);
	printf("\n%-11s|%+11d|%11o|%11x|",e, num1, num1, num1);
	printf("\n%-11s|%+11d|%11o|%11x|",f, num2, num2, num2);
	num3 = num1 + num2;
	printf("\n%-11s|%-+11d|%-11o|%-11x|",g, num3, num3, num3);



	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	printf("num1를 입력하세요\n");
	scanf("%d", &num1);
	if ((num1 >> 31) == 0) 
		printf("%d는(은) 양수입니다. 이 수의 절댓값은 %d이고, 절댓값을 4로 나눈 몫은 %d이고, 나머지는 %d입니다.", num1, num1,num1 / 4, num1 % 4);
	else 
	printf("%d는(은) 음수입니다. 이 수의 절댓값은 %d이고, 절댓값을 4로 나눈 몫은 %d이고, 나머지는 %d입니다.", num1, -(num1), -(num1) / 4, -(num1) % 4);
	
	



return 0;
}

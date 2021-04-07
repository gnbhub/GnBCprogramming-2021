#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a;
	printf( "정수 : " );
	scanf("%d", &a);
	if ((a >> 31) == 0)
		printf("%d는(는) 양수입니다. 이 수의 절댓값은 %d이고, 절댓값을 4로 나눈 몫은 %d이고, 나머지는 %d입니다.",a, a, a / 4, a % 4);
	else
		printf("%d는(는) 음수입니다. 이 수의 절댓값은 %d이고, 절댓값을 4로 나눈 몫은 %d이고, 나머지는 %d입니다.",a, -a, -a / 4, -a % 4);
	
	return 0;
}

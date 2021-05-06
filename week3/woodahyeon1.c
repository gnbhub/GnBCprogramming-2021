#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int R;
	printf("정수: ");
	scanf("%d", &R);

	if (R >= 0)
	{
		printf("\n\"%d는(은) 양수입니다. 이 수의 절댓값은 %d이고,", R, R);
		printf("\n	절댓값을 4로 나눈 몫은 %d이고", R / 4);
		printf("\n		나머지는 %d입니다.\"", R % 4);
	}
	else
	 {
		printf("\n\"%d는(은) 음수입니다. 이 수의 절댓값은 %d이고,", R, -R);
		printf("\n	절댓값을 4로 나눈 몫은 %d이고", -R / 4);
		printf("\n		나머지는 %d입니다.\"", -R % 4);
	 }
	return 0;
}

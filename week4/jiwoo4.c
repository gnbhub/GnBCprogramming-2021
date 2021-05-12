#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, sum = 0;
	printf("1~10까지 출력하기\n");
	for (i = 1; i <= 10; i++)
		printf("%d ", i);



	int a;
	printf("\n");
	printf("\n출력할 단 : ");
	scanf("%d", &a);
	printf("\n===%d단===\n", a);
	for (i = 1; i < 10; i++)
		printf("%d * %d = %d\n", a, i, a * i);


	printf("\n1~10까지의 합 구하기\n");
	for (i = 1; i <= 10; i++)
		sum += i;
	printf("%d ", sum);


	return 0;


}
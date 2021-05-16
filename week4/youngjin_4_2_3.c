#include <stdio.h>

int main(void)
{
	int a, sum = 0;
	for (a = 1; a <= 10; ++a)
		sum += a;
		printf("%d", sum);//여기서 중괄호 한 번 더 묶으면 안됨??
	
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n, i=1, nf = 1;
	while(i>0){
		printf("정수를 입력하세요: ");
		scanf("%d", &n);
		for (i = n; i > 0; i--)
			nf *= i;
	if (nf < 0) {
		printf("오버플로가 발생하였습니다.\n");
		i = 1;
		continue;
	}
	else
		printf("%d!=%d", n, nf);
	}
	return 0;
}

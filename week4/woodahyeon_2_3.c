#include <stdio.h>
int main(void) {

	int n=1, s=0;
	printf("1~10까지의 합 구하기: ");
	while (n <= 10) {
		s += n;
		n++;
	}
	printf("%d", s);

	return 0;

}

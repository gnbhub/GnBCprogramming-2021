#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){

	int n, i;
	printf("출력할 단: ");
	scanf("%d", &n);
	printf("\n\n---%d단---", n);
	for (i = 1; i < 10; i++)
		printf("\n%d X %d = %d", n, i, n * i);
	
	return 0;

}

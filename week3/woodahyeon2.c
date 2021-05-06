#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;
	char o;

	printf("½ÄÀ» ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf("%d %c %d", &n1, &o, &n2);
	
	if (o == '+')
		printf("%d",n1 + n2);

	else if (o == '-')
		printf("%d",n1 - n2);

	else if (o == '*')
		printf("%d",n1 * n2);

	else if (o == '/')
		printf("%d", n1 / n2);

	else if (o == '%')
		printf("%d", n1 % n2);

	return 0;
}

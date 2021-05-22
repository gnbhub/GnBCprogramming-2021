1.

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	printf("정수 1 : ");
	scanf("%d", &a);
	printf("정수 2 : ");
	scanf("%d", &b);

	int x, y, r;

	if (a >= b) {
		x = a, y = b;
	}

	else if (a < b) {
		x = b, y = a;
	}

	while (1) {

		r = x % y;
		x = y;
		y = r;

		if (y == 0)
			break;
	}
	printf("최대공약수는 %d입니다.", x);


	return 0;
}
```


2.

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int line;

	while (1) {
		printf("라인 수: ");
		scanf("%d", &line);

		if (line <= 10 && line > 0)
			break;
		else
			printf("[입력오류] 피라미드의 라인 수는 10이하의 양의 정수만 가능합니다. 다시 입력해주세요.\n");
		continue;
	}
	int i, j;
	for (i = 0; i < line; i++) {
		//앞쪽 빈공간 맞춤
		for (j = i ; j < line; j++)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("%d", (0 + i - j));
		for (j = 1; j <= i; j++)
			printf("%d", (0 + j));
		printf("\n");
	}
}

```



참고만 하세요! 😊

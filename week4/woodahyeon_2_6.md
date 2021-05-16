```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n, i, j;
	printf("직각 삼각형을 출력합니다.\n단 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/118415260-5cc2c880-b6e4-11eb-8279-80cf0e0f62c2.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n, i, j;
	printf("직각 삼각형을 출력합니다.\n단 : ");
	scanf("%d", &n);
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/118415274-65b39a00-b6e4-11eb-9854-0593eb2791ee.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n, i, j, k;
	printf("피라미드를 출력합니다.\n단 : ");
	scanf("%d", &n);
	for (k = 1; k <= n; k++) {
		for (i = n - k; i >= 1; i--)
			printf(" ");
		for (j = 1; j <= (2 * k) - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/118415378-eecad100-b6e4-11eb-8f2a-b820a48580d2.png)

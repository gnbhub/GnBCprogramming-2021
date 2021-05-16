1. 최대 공약수 계산하기
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n1, n2, a, b, r = 1;
	printf("정수 1: ");
	scanf("%d", &n1);
	printf("정수 2: ");
	scanf("%d", &n2);

	if (n1 >= n2)
		 a = n1, b = n2;
	else
		 a = n2, b = n1;

	if (a % b != 0) {
		while (1) {
			r = a % b;
			if (r == 0) break;
			a = b;
			b = r;
		}
	}
	printf("\n최대공약수는 %d입니다.", b);

	return 0;

}
```
![image](https://user-images.githubusercontent.com/51956616/118415338-b5926100-b6e4-11eb-9716-63f9b36ccb48.png)

![image](https://user-images.githubusercontent.com/51956616/118415340-b925e800-b6e4-11eb-900d-4e8553554fbf.png)

2. 피라미드 출력하기
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int n=0, i, j, k, l;
	printf("라인 수: ");
	scanf("%d", &n);
	for (i = 1; i <= n ; i++) {
		if (n > 10 || n < 0){
			printf("[입력오류]피라미드 라인 수는 10 이하의 양의 정수만 가능합니다. 다시 입력해주세요.\n");
		continue;
		}
		else {
			for (j = n - i; j >= 0; j--)
				printf(" ");
			for (k = i-1; k >= 0; k--)
				printf("%d", k);
			if (i >= 2)
				for (l = 1; l <= i - 1; l++)
					printf("%d", l);
			printf("\n");
		}
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/118415387-fd18ed00-b6e4-11eb-9c88-70d347fdf663.png)

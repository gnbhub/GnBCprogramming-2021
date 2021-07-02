```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int arr[6], a[6], i, c;
int RightShift(int b) {
	for (i=0;i<6;i++) {
		if ((5 - i) >= b) {
			a[i + b] = arr[i];
		}
		else
		{
			a[i - (6 - b)] = arr[i];
		}
	}
	for (i = 0; i < 6; i++) {
		printf("%d", a[i]);
	}
}

int main(void) {
	for (i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	printf("오른쪽으로 몇 번 보낼지 숫자를 적으시오 : ");
	scanf("%d", &c);
	printf("%d", RightShift(c));
	return 0;
}// 근데 컴파일하면 맨 뒤에 6 나오는데 왜 그런거임???
```
<img width="732" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/124296820-59e93d80-db95-11eb-9cd6-9e516abc6c39.png">

1.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	char w[100];
	int i;
	printf("영어 단어 입력: ");
	scanf("%s", w);
	
	for (i = 0; w[i]; i++);
	printf("단어의 길이: %d",i);

	printf("\n거꾸로 된 단어: ");
	for (i = i - 1; i >= 0; i--)
		printf("%c", w[i]);

	return 0;
}
```
```
![image](https://user-images.githubusercontent.com/51956616/119524737-ddef1f00-bdb8-11eb-95ec-78829d7e4b36.png)
```

2.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int i, j, temp;
	int n[5];
	printf("정수 5개 입력: ");
	for (i=0; i<5; i++)
		scanf("%d", &n[i]);
	
	for (i = 4; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;

			}
		}
	}

	printf("정렬: ");
	for (i = 0; i < 5; i++)
		printf("%d ", n[i]);
	
	return 0;
}
```
```
![image](https://user-images.githubusercontent.com/51956616/119524772-e47d9680-bdb8-11eb-9335-e2cb3acc7629.png)
```

3. 5

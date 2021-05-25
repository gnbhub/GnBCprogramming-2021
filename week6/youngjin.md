```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char words[100];
	int i=0;

	printf("영어 단어 입력 : ");
	gets(words);
	printf("단어의 길이 : ");

	for (i; words[i] != '\0'; i++){}//초기화되지 않은 메모리 'words' 사용 중 이라는데 char words 초기화는 어떻게 해야함??
		printf("%d\n", i);

		printf("거꾸로 된 단어 : ");
		for (i - 1; i >= 0; i--)
			putchar(words[i]);//여기도 마찬가지
	return 0;
}
```
<img width="720" alt="11" src="https://user-images.githubusercontent.com/81066580/119499728-f43db080-bda1-11eb-9dbe-b10e10fe1999.png">

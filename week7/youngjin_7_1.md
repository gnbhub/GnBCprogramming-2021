[1]
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

[2]
```c

int Left_Any_Shift(int a[6], int b[6], int i, int moving){
for (i = 5; i >= (6 - moving); i--) {
	b[i] = a[i - 6 + moving];
}
for (i = 0; i < (6 - moving); i++) {
	b[i] = a[i + moving];
}

return b[6];
}

int main() {

	int i = 0;
	int a[6] = { 1, 2, 3, 5, 7, 9 };
	int b[6];

	printf("배열 a는 아래와 같습니다.\n");
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("몇 칸 왼쪽으로 이동하시겠습니까? \n");
	int moving;
	scanf("%d", &moving);

	b[i] = Left_Any_Shift(a, b, i, moving);

	printf("\n\n배열 a를 왼쪽으로 %d만큼 이동시키면\n", moving);
	for (i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}
}
```
<img width="718" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/124697061-2275ea80-df21-11eb-902d-0f93f8fa4c32.png">


[3]
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int temp;
void Shuffle(int a[6], int i) {
	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		int randNum1 = rand() % 6;
		int randNum2 = rand() % 6;
		int temp;
		temp = a[randNum1];
		a[randNum1] = a[randNum2];
		a[randNum2] = temp;
	}
}
int main() {
	int i = 0;
	int a[6] = { 1, 2, 3, 5, 7, 9 };
	printf("배열을 랜덤으로 섞으면\n");
	Shuffle(a, i);
	for (int i = 0; i < 6; i++)
		printf("%d ", a[i]);
	return 0;
}

```
<img width="718" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/124709726-c9b14c80-df36-11eb-8341-5c5eb230b88c.png">


# ✅ 배열 원소 출력하는 함수 만들기

## 1️⃣ 사용자가 입력한 수 만큼 오른쪽으로 이동
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Right_Any_Shift(int a[6], int b[6], int i, int moving);

int main() {

	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
	int b[6];

	printf("배열 a는 아래와 같습니다.\n");
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("몇 칸 오른쪽으로 이동하시겠습니까? \n");
	int moving;
	scanf("%d", &moving);

	b[i] = Right_Any_Shift(a, b, i, moving);

	printf("\n\n배열 a를 오른쪽으로 %d만큼 이동시키면\n", moving);
	for (i = 0; i < 6; i++) {
		printf("%d ", b[i]);
	}
}

int Right_Any_Shift(int a[6], int b[6], int i, int moving) {
	for (i = 5; i >= moving; i--) {
		b[i] = a[i - moving];
	}
	for (i = 0; i < moving; i++) {
		b[i] = a[i + 6 - moving];
	}

	return b[6];
}
```

## 2️⃣ 사용자가 입력한 수 만큼 왼쪽으로 이동
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Left_Any_Shift(int a[6], int b[6], int i, int moving);

int main() {

	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
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

int Left_Any_Shift(int a[6], int b[6], int i, int moving) {
	for (i = 0; i < 6 - moving; i++) {
		b[i] = a[i + moving];
	}
	for (i = 5; i >= 6 - moving; i--) {
		b[i] = a[i - 6 + moving];
	}

	return b[6];
}

```

## 3️⃣ 무작위 셔플
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // rand()함수 사용 (배열 셔플)
#include <time.h>  // time 함수 사용 (배열 셔플)

void Shuffle(int a[6], int i);

int temp;

int main() {

	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };

	printf("배열을 랜덤으로 섞으면\n");
	Shuffle(a, i);

	for (int i = 0; i < 6; i++)
		printf("%d ", a[i]);
	return 0;
}

void Shuffle(int a[6], int i) {

	srand(time(NULL)); // 랜덤한 수 발생

	for (i = 0; i < 6; i++) {
		int randNum1 = rand() % 6;
		int randNum2 = rand() % 6;
		int temp;
		temp = a[randNum1];
		a[randNum1] = a[randNum2];
		a[randNum2] = temp;

	}
}
```

## 4️⃣ 크기 정렬 (오름차순)
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Ascending_Order(int a[6], int i);

int temp;

int main() {

	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
	int b[6];

	printf("배열 a를 오름차순으로 배열하면\n");
	Ascending_Order(a, i);

	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void Ascending_Order(int a[6], int i) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


```

## 5️⃣ 크기 정렬 (내림차순)
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Descending_Order(int a[6], int i);

int temp;

int main() {

	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };

	printf("배열 a를 내림차순으로 배열하면\n");
	Descending_Order(a, i);
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void Descending_Order(int a[6], int i) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}
		}
	}
}

```


# ✅ 재귀함수를 이용해 팩토리얼 구하기

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main() {
	printf("양의 숫자를 입력하세요: ");
	int n;

	scanf("%d", &n);

	int fact_num;

	fact_num = factorial(n);

	printf("%d! = %d", n, fact_num);

	return 0;
}

int factorial(int n) {
	if (n <= 1) return 1; // 종료 조건
	else return n * factorial(n - 1);
}


```


# ✅ 특정수 n을 입력 받아서 n을 소인수분해한 결과가 출력되도록 하기
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void factorize(int n);

int input;

void main() {
	printf("소인수분해 하고싶은 수를 입력하세요 : ");
	scanf("%d", &input);

	factorize(input);

	return 0;
}

void factorize(int n) {
	int i, primenumber = 0;
	int X;
	int prime[50];
	n = input;

	for (i = 2; i <= n; i++) {
		if (n % i == 0) {
			prime[primenumber] = i;
			primenumber++;
			n = n / i;
			i = 1;
		}
	}
	X = 1;
	i = 0;
	int cnt = 0;
	while (input != X) {
		
		if (cnt == 0) {
			printf("%d", prime[i]);
		}
		else {
			printf(" x %d", prime[i]);
		}
		X = X * prime[i];
		cnt++;
		i++;
	}
	
}


```


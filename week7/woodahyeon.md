1-1.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int moving, i, j;

int Rightshift(int arr[6], int moving);
int Rightshift(int arr[6], int moving) {
	int temp;
	for (i = 0; i < moving; i++) {
		temp = arr[5];
		for (j = 5; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	return arr[6];
}
int main(void) {
	int a[6] = { 1,2,3,4,5,6 };
	printf("이동할 칸 수를 입력하세요: ");
	scanf("%d", &moving);
	a[6] = Rightshift(a, moving);
	for (i = 0; i < 6; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124913407-0a3dc280-e02a-11eb-9443-678cdd01be23.png)


1-2.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int moving, i, j;

int Leftshift(int arr[6], int moving);
int Leftshift(int arr[6], int moving) {
	int temp;
	for (i = 0; i < moving; i++) {
		temp = arr[0];
		for (j = 1; j < 6; j++) {
			arr[j - 1] = arr[j];
		}
		arr[5] = temp;
	}
	return arr[6];
}
int main(void) {
	int a[6] = { 1,2,3,4,5,6 };
	printf("이동할 칸 수를 입력하세요: ");
	scanf("%d", &moving);
	a[6] = Leftshift(a, moving);
	for (i = 0; i < 6; i++) {
		printf("%d", a[i]);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124913543-348f8000-e02a-11eb-91f4-bcf602853565.png)


1-3.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int Shuffle(int a[6], int i);
int Shuffle(int a[6], int i) {
	srand(time(NULL));
	for (i = 0; i < 6; i++) {
		int num1 = rand() % 6;
		int num2 = rand() % 6;
		int temp;
		temp = a[num1];
		a[num1] = a[num2];
		a[num2] = temp;

	}
}
int main(void) {
	int i = 0;
	int a[6] = { 45, 7, 34, 2, 29, 94 };
	printf("a[6] = { 45, 7, 34, 2, 29, 94 }\n\n무작위 셔플 실행\n");
	Shuffle(a, i);
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124913713-70c2e080-e02a-11eb-936a-e78288450e5d.png)
![image](https://user-images.githubusercontent.com/51956616/124913752-791b1b80-e02a-11eb-902f-cd85b9fe6eaf.png)


1-4.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i, j, temp, a[6] = { 54,21,65,48,7,3 };
int Ascending(int a[6], int i);
int Ascending(int a[6], int i) {
	for (i = 5; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	printf("a[6]={54,21,65,48,7,3}\n오름차순 정렬: ");
	Ascending(a, i);
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124913895-a8ca2380-e02a-11eb-84fc-db6d8f703210.png)


1-5.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int i, j, temp, a[6] = { 54,21,65,48,7,3 };
int Descending(int a[6], int i);
int Descending(int a[6], int i) {
	for (i = 5; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main(void) {
	printf("a[6]={54,21,65,48,7,3}\n내림차순 정렬: ");
	Descending(a, i);
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124913977-bf707a80-e02a-11eb-90d4-f18403067158.png)


2.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int num;
int factorial(int num);
int factorial(int num) {
	if (num == 1) return 1;
	return num * factorial(num - 1);
}
int main(void) {
	printf("계산할 수를 입력하세요: ");
	scanf("%d", &num);
	printf("%d", factorial(num));
	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124294989-4c32b880-db93-11eb-8702-916b72e70b44.png)


3.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n;
int factorize(int n);
int factorize(int n) {
	int i;
	for (i = 2; n % i != 0; i++);
	return i;
}
int main(void) {
	printf("수를 입력하세요: ");
	scanf("%d", &n);
	printf("%d", factorize(n));
	while (n / factorize(n) != 1) {
		n = n / factorize(n);
		printf(" x %d", factorize(n));
	}
	if (n / factorize(n) == 1) return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/124295147-771d0c80-db93-11eb-8a5b-57134defbad4.png)

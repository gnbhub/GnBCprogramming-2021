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

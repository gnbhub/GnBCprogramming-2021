```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n)
{
	if (n <= 1) return 1;
	else return n*factorial(n - 1);
}
int main (void) 
{
	int a, b = 0;
	printf("수를 입력하시오 : ");
	scanf("%d", &a);
	b = factorial(a);
	printf("재귀함수를 이용해 팩토리얼 구하기 : %d", b);

return 0;
}
```
<img width="725" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/124093338-bc0d4a00-da92-11eb-8bde-e07d94e4ecd7.png">

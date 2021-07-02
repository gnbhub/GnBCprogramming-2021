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
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorize(int n)
{
	int i;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
			if (n % i == 0)
			{
				printf("* ");
			}
			else if (n % i != 0)
			{
				if (n > i)
				printf("* ");
			}
			i = 1;
		}
	}
}
int main (void) 
{
	int c;
	scanf("%d", &c);
	printf("출력 결과 : ");
	factorize(c);
	return 0;
}
```
<img width="718" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/124264141-1380e800-db6f-11eb-8db7-9f6953829372.png">

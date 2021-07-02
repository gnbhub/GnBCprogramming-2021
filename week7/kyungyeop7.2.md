'''c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number * factorial(number - 1);
	}
}


int num, result = 0;
int main(void)
{
	printf("정수를 입력하세요");
	scanf("%d", &num);

	int result = factorial(num);

	printf("%d" , result);
	return 0;
}
```

![image](https://user-images.githubusercontent.com/81094980/124310213-d2a4c580-dba6-11eb-8994-7d2f3fe58905.png)

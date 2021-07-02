## ✅ 재귀함수를 이용해 팩토리얼 구하기
```C 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fun(int i);

int fun(int i) 
{
   if (i == 1) {
      return 1;
   }
   else
      return i * fun(i - 1);
}

int main(void)
{
   int i;
   scanf("%d", &i);
   printf("%d",fun(i));

   return 0;
}
```
![jiwoo7-2](https://user-images.githubusercontent.com/81032690/124269570-00254b00-db76-11eb-8099-4c42b7cfbc15.png)

## ✅ 특정수 n을 입력 받아서 n을 소인수분해한 결과가 출력되도록 하기
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int a, i;
	scanf("%d", &a);

	while (1){
	for (i = 2; a % i != 0; i++) 
	{

	}
	printf("%d ", i);
	
	if (a / i == 1)
		break;
	else
		a = a / i;

	}
	return 0;
}
```
![jiwoo7-3](https://user-images.githubusercontent.com/81032690/124269631-16cba200-db76-11eb-8ef8-d0c27db9e0ef.png)


## ✅ 배열 원소 출력하는 함수 만들기
✔ 원소가 6개인 배열을 가지고 테스트할 것

1 
```C
define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Right_Any_Shift(int a[6], int b[6], int i, int moving);

int Right_Any_Shift(int a[6], int b[6], int i, int moving) {
   for (i = 5; i >= moving; i--) {
      b[i] = a[i - moving];
   }
   for (i = 0; i < moving; i++) {
      b[i] = a[i + 6 - moving];
   }
   return b[6];
}


int main(void)
{
   int i = 0;
   int a[6] = { 5, 24, 67, 12, 59, 40 };
   int b[6];

   printf("배열 a는 아래와 같습니다.\n");
   for (i = 0; i < 6; i++) {
      printf("%d ", a[i]);
   }

   printf("\n몇 칸 오른쪽으로 이동하시겠습니까 ? \n");
   int moving;
   scanf_s("%d", &moving);

   b[i] = Right_Any_Shift(a, b, i, moving);

   printf("배열 a를 오른쪽으로 %d만큼 이동시키면\n", moving);
   for (i = 0; i < 6; i++) {
      printf("%d ", b[i]);
   }
}
```
![jiwoo7-1-1](https://user-images.githubusercontent.com/81032690/124643342-f2502c80-decb-11eb-813e-63ac87a2c973.png)

2
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Right_Any_Shift(int a[6], int b[6], int i, int moving);

int Right_Any_Shift(int a[6], int b[6], int i, int moving) {
   for (i = 5; i >= moving; i--) {
      b[i-moving] = a[i];
   }
   for (i = 0; i < moving; i++) {
      b[i+6-moving] = a[i];
   }
   return b[6];
}


int main(void)
{
   int i = 0;
   int a[6] = { 5, 24, 67, 12, 59, 40 };
   int b[6];

   printf("배열 a는 아래와 같습니다.\n");
   for (i = 0; i < 6; i++) {
      printf("%d ", a[i]);
   }

   printf("\n몇 칸 왼쪽으로 이동하시겠습니까 ? \n");
   int moving;
   scanf_s("%d", &moving);

   b[i] = Right_Any_Shift(a, b, i, moving);

   printf("배열 a를 왼쪽으로 %d만큼 이동시키면\n", moving);
   for (i = 0; i < 6; i++) {
      printf("%d ", b[i]);
   }
}
```
![jiwoo7-1-2](https://user-images.githubusercontent.com/81032690/124643416-0ac04700-decc-11eb-96fa-48531d932dca.png)

3
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int a[6], int i);

void Shuffle(int a[6], int i) {
    srand(time(NULL));
    for (i = 0; i < 6; i++) {
        int randnum1 = rand() % 6;
        int randnum2 = rand() % 6;
        int temp;
        temp = a[randnum1];
        a[randnum1] = a[randnum2];
        a[randnum2] = temp;
    }
}

int temp;

int main(void) {
        int i = 0;
        int a[6] = { 14,88,57,21,3,46 };

        printf("배열을 랜덤으로 섞으면\n");
        Shuffle(a, i);

        for (int i = 0; i < 6; i++)
                printf("%d ", a[i]);
        return 0;
   
}
``` 
![jiwoo7-1-3](https://user-images.githubusercontent.com/81032690/124643540-29264280-decc-11eb-9856-9601e1b841e7.png)

4
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Ascending_Order(int a[6], int i);

int temp;

void Ascending_Order(int a[6], int i) {
    for(i=0;i<6;i++){
        for (int j = 0; j < 6 - i-1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void) {
        int i = 0;
        int a[6] = { 14,88,57,21,3,46 };
        int b[6];

        printf("배열 a를 오름차순으로 배열하면\n");
        Ascending_Order(a, i);

        for (int i = 0; i < 6; i++) {
            printf("%d ", a[i]);
        }
        return 0;
   
}
```
![jiwoo7-1-4](https://user-images.githubusercontent.com/81032690/124643601-3b07e580-decc-11eb-9d82-0c9fd0a6645a.png)

5
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Ascending_Order(int a[6], int i);

int temp;

void Ascending_Order(int a[6], int i) {
    for(i=0;i<6;i++){
        for (int j = 0; j < 6 - i-1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void) {
        int i = 0;
        int a[6] = { 14,88,57,21,3,46 };
        int b[6];

        printf("배열 a를 내름차순으로 배열하면\n");
        Ascending_Order(a, i);

        for (int i = 0; i < 6; i++) {
            printf("%d ", a[i]);
        }
        return 0;
   
}
```
![jiwoo7-1-5](https://user-images.githubusercontent.com/81032690/124643652-4b1fc500-decc-11eb-987b-21c314cf336a.png)


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


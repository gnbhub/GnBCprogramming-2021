## ✅ 구조체
(a) 두 점의 좌표가 일치하면 1을 반환하고 그렇지 않으면 0을 반환 // 구조체 2개
```C
#include <stdio.h>

int fun(struct point point1,struct point point2);

struct point {
   int x;
   int y;
};

int main(void)
{
   

   struct point point1;
   struct point point2;

   scanf_s("%d %d %d %d", &point1.x, &point1.y, &point2.x, &point2.y);

   fun(point1,point2);

   return 0;
}

int fun(struct point point1,struct point point2)
{
   if (point1.x == point2.x && point1.y == point2.y) {

      printf("1");

   }
   else
   {
      printf("0");
   }
   
   return 0;
}
```
![jiwoo8-(a)](https://user-images.githubusercontent.com/81032690/127164896-a3cdf29f-6eff-4068-a55b-b6b552bdb5c9.png)


(b) 점의 좌표를 받아서 어느 사분면에 속하는 지를 반환 // 구조체 1개
```C
#include <stdio.h>

int fun(struct point point1);

struct point {
    int x;
    int y;
};

int main(void)
{

    struct point point1;

    scanf_s("%d %d", &point1.x, &point1.y);

    fun(point1);

    return 0;
}

int fun(struct point point1)
{
    if (point1.x > 0) {

        if (point1.y > 0) {
            printf("제1사분면");
        }
        
        else {
            printf("제4사분면");
        }

    }
    
    else
    {
        if (point1.y > 0) {
            printf("제2사분면");
        }
        else {
            printf("제3사분면");
        }

    }

    return 0;
}
```
![jiwoo8-(b)](https://user-images.githubusercontent.com/81032690/127164998-f0521858-a992-46f8-aed4-8530a0e5e71c.png)


## ✅ 포인터
포인터를 이용해 배열 원소의 최댓값과 최솟값을 가지는 인덱스를 찾아라.
```C
#include <stdio.h>

int main(void) {

    int i;
    int arr[5];
    scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    int max = arr[0];
    int num1 = 0;
    int* numPtr1 = &num1;

    for (i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
            *numPtr1 = i;
        }

    }
    printf("최댓값 인덱스 : %d\n", *numPtr1);

    int min = arr[0];
    int num2 = 0;
    int* numPtr2 = &num2;

    for (i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
            *numPtr2 = i;
        }

    }
    printf("최솟값 인덱스 : %d\n", *numPtr2);

    return 0;
}
```
![jiwoo8-2](https://user-images.githubusercontent.com/81032690/127165090-22bcd893-b5b0-41e3-b7f7-0c0cc7d44cd2.png)

1.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
} point;

int a (point p1, point p2) {
	if (p1.x == p2.x && p1.y == p2.y) return 1;
	return 0;
}

int b(point p) {
	if (p.x > 0 && p.y > 0) printf("제 1사분면 위의 점입니다.\n");
	if (p.x < 0 && p.y > 0) printf("제 2사분면 위의 점입니다.\n");
	if (p.x < 0 && p.y < 0) printf("제 3사분면 위의 점입니다.\n");
	if (p.x > 0 && p.y < 0) printf("제 4사분면 위의 점입니다.\n");
	if (p.x==0 || p.y==0) printf("어느 사분면에도 속하지 않습니다.\n");
}

int main(void) {
	point p1, p2;

	printf("점1의 x좌표 : "); scanf("%d", &p1.x);
	printf("점1의 y좌표 : "); scanf("%d", &p1.y);
	printf("점2의 x좌표 : "); scanf("%d",&p2.x);
	printf("점2의 y좌표 : "); scanf("%d", &p2.y);

	int result = a(p1, p2);
	printf("(a) %d\n", result);

	printf("(b) 점1은 "); b(p1);
	printf("점2는 "); b(p2);

	return 0;
}
```
![image](https://user-images.githubusercontent.com/51956616/127324083-9129574b-7f38-4d38-9d76-5205ff9fee93.png)


2.
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, num, max=0, min=0;
	printf("입력받을 배열 원소의 수 : ");
	scanf("%d", &num);
	int arr[100];
	printf("수를 입력하세요 : ");
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	int *ptr = arr;
	for (i = 0; i < num; i++) {
		if (*(ptr+max) < *(ptr+i)) max = i;
	}
	printf("최댓값 : %d, 인덱스[%d]\n", *(ptr + max), max);
	for (i = 0; i < num; i++) {
		if (*(ptr+min) > *(ptr + i)) min = i;
	}
	printf("최솟값 : %d, 인덱스[%d]", *(ptr + min), min);
}
```
![image](https://user-images.githubusercontent.com/51956616/127433499-043ea776-f689-47ba-9e2f-bcb71eb74880.png)

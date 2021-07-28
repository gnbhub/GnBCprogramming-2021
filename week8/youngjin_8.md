1(a)
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct coordinate {
	int x;
	int y;
};

void main()
{
	int a, b, c, d;
	printf("A의 X좌표, A의 Y좌표, B의 X좌표, B의 Y좌표 : ");
	scanf("%d, %d, %d, %d", &a, &b, &c, &d);
	struct coordinate p1 = { a, b };
	struct coordinate p2 = { c, d };

	if ((p1.x) == (p2.x) && (p1.y) == (p2.y))
		printf("1");
	else
		printf("0");
	return 0;
}
```
<img width="353" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/127300056-d8c8c886-e056-4ec3-a309-60329bcbcc23.png">

1(b)
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct coordinate {
	int x;
	int y;
};

void main()
{
	int a, b;
	printf("A의 X좌표, A의 Y좌표 : ");
	scanf("%d, %d", &a, &b);
	struct coordinate p1 = { a, b };

	if ((p1.x) < 0 && (p1.y) < 0)
		printf("제3사분면");
	else if ((p1.x) > 0 && (p1.y) < 0)
		printf("제4사분면");
	else if ((p1.x) < 0 && (p1.y) > 0)
		printf("제2사분면");
	else if ((p1.x) > 0 && (p1.y) > 0)
		printf("제1사분면");
	else
	printf("어느 사분면에도 속하지 않는다.");
	return 0;
}
```
<img width="288" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/127301105-4b88fd4f-d7a5-48c4-a98f-ee2f6c5aaa56.png">

2
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num[10];
	int i;
	scanf("%d %d %d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
	int max = num[0];
	int min = num[0];
	int num1 = 0;
	int* ptr1 = &num1;

	for (i = 0; i < 10; i++) {
		if (max < num[i]) {
			max = num[i];
			*ptr1 = i;
		}
	}
	printf("배열 원소 최댓값의 인덱스 : %d\n", *ptr1);

	int num2 = 0;
	int* ptr2 = &num2;

	for (i = 0; i < 10; i++) {
		if (min > num[i]) {
			min = num[i];
			*ptr2 = i;
		}
	}
	printf("배열 원소 최솟값의 인덱스 : %d", *ptr2);
	return 0;
}
```
<img width="679" alt="제목 없음" src="https://user-images.githubusercontent.com/81066580/127318218-eb808fc4-851b-479f-9fa0-9c8c6bd798d5.png">


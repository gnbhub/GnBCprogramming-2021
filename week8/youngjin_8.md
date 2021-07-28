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

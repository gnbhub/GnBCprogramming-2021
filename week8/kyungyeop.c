```c
#include <stdio.h>

struct point {
	int x;
	int y;
};

int equal(struct point point1, struct point point2) {
	if ((point1.x == point2.x) && (point1.y == point2.y)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void)
{
	struct point point1, point2;
	scanf_s("%d %d", &point1.x, &point1.y);
	scanf_s("%d %d", &point2.x, &point2.y);
	printf("%d\n", equal(point1, point2));

	return 0;
}
```

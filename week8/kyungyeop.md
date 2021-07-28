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

```c
#include <stdio.h>
#include <string.h>
struct point {
	int x;
	int y;
};

int quadrant(struct point p) 
{
	if ((p.x > 0) && (p.y > 0)) {
		printf("제 1 사분면");
	}
	else if ((p.x < 0) && (p.y > 0)) {
		printf("제 2 사분면");
	}
	else if ((p.x < 0) && (p.y < 0)) {
		printf("제 3 사분면");
	}
	else {
		printf("제 4 사분면");
	}
return 0;
}

int main(void) 
{
	struct point p;
	printf("좌표를 입력 :");
	scanf_s("%d %d", &p.x, &p.y);
	quadrant(p);
	return 0;
}
```
![image](https://user-images.githubusercontent.com/81094980/127308455-d5fa4fe6-7d11-4da7-9623-e17407ccdc39.png)

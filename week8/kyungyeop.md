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
![image](https://user-images.githubusercontent.com/81094980/127308717-44b48e16-9db8-4e5d-8696-614f8d8a660f.png)

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

```c
#include <stdio.h>

int main(void) 
{
    int data[5];
    scanf_s("%d %d %d %d %d", &data[0], &data[1], &data[2], &data[3], &data[4]); 
    int max = 0;
    int n;
    int* maxptr1 = &n;
    for (n = 1; n < 5; n++) {
        if (data[max] < data[n]) {
            max = n;
        }
    }

    printf("최대값의 인덱스 : %d\n", max);

    int min = 0;
    int m;
    int* minptr1 = &m;
    for (m = 1; m < 5; m++) {
        if (data[m] < data[min]) {
            min = m;
        }
    }

    printf("최소값의 인덱스 : %d\n", min);


    return 0;
}
```
![image](https://user-images.githubusercontent.com/81094980/127338701-71ed1f08-8e08-48c2-9834-e3c5c3216176.png)

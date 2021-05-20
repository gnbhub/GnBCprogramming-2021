```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a, b, c;
	int d=1;

	printf("정수 1 : ");
	scanf("%d", &a);
	printf("정수 2 : ");
	scanf("%d", &b);

	if (a < b) {
		for (c = a; c > 1; c--) {
			if (a % c == 0 && b % c == 0) {
				d = d*c;
				a = a / c;
				b = b / c;
			}
		}
	}
	else if (a > b) {
		for (c = b; c > 1; c--) {
			if (a % c == 0 && b % c == 0) {
				d = d*c;
				a = a / c;
				b = b / c;
			}
		}
	}
	else if (a = b){
		d = b;
	}
	printf("최대공약수는 : %d입니다.", d);
	return 0;
} // homework 유클리드 알고리즘 설명 부분 이해 안감
```
![image](https://user-images.githubusercontent.com/81066580/118949905-a5081200-b994-11eb-8dfd-32fce38fbe9d.png)


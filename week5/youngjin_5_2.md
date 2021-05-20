```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
int e, f, g, h;
printf("라인 수 : ");
scanf("%d", &e);
for (; e > 10 || e < 0;)
{
	printf("[입력오류]피라미드 라인 수는 10이하의 양의 정수만 가능합니다. 다시 입력해주세요.\n");
	printf("라인 수 : ");
	scanf("%d", &e);
}

	for (f = 1; f <= e; f++)
	{
		for(g = 1; g <= e-f; g++)
		{
			printf(" ");
		}
		for (h = 1; h <= f; h++)
		{
			printf("%d", f-h);
		}
		for (h = 1; h < f; h++)
		{
			printf("%d", h);
		}
		printf("\n");
	}
	return 0;
} 
```
![image](https://user-images.githubusercontent.com/81066580/118950296-06c87c00-b995-11eb-9772-5cf6e0016c65.png)

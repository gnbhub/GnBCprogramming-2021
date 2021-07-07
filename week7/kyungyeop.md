```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Right_Any_Shift(int a[6], int b[6], int i, int moving);
int main()
{
	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
	int b[6];

	printf("배열 a는 아래와 같습니다.\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n\n");
	printf("몇 칸 오른쪽으로 이동하시겠습니까? \n");
	int moving;
	scanf("%d", &moving);

	b[i] = Right_Any_Shift(a, b, i, moving);
	printf("\n\n배열 a를 오른쪽으로 %d만큼 이동시키면\n", moving);
	for (i = 0; i < 6; i++)
	{
		printf("%d", b[i]);
	}
}
int Right_Any_Shift(int a[6], int b[6], int i, int moving) 
{
	for (i = 5; i >= moving; i--) 
	{
		b[i] = a[i - moving];
	}
	for (i = 0; i < moving; i++) 
	{
		b[i] = a[i + 6 - moving];
	}

	return b[6];
}
```
![image](https://user-images.githubusercontent.com/81094980/124640623-a18b0480-dec8-11eb-8cc5-13371ae71d2d.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Left_Any_Shift(int a[6], int b[6], int i, int moving);

int main()
{
	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
	int b[6];
	printf("배열 a는 아래와 같습니다. \n");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");

	printf("몇 칸 왼쪽으로 이동하시겠습니까? \n");
	int moving;
	scanf("%d", &moving);
	b[i] = Left_Any_Shift(a, b, i, moving);
	printf("\n\n배열 a를 왼쪽으로 %d만큼 이동시키면\n", moving);
	for (i = 0; i < 6; i++)
	{
		printf("%d ", b[i]);
	}
}

int Left_Any_Shift(int a[6], int b[6], int i, int moving)
{
	for (i = 0; i < 6 - moving; i++)
	{
		b[i] = a[i + moving];
	}
	for (i = 5; i >= 6 - moving; i--)
	{
		b[i] = a[i - 6 + moving];
	}
	return b[6];
}
```
![image](https://user-images.githubusercontent.com/81094980/124647434-ed41ac00-ded0-11eb-92ef-8c07ec2b4be0.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
void Shuffle(int a[6], int i);

int temp;

int main()
{
	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };

	printf("배열을 랜덤으로 섞으면\n");
	Shuffle(a, i);

	for (int i = 0; i < 6; i++)
		printf("%d", a[i]);
	return 0;
}
void Shuffle(int a[6], int i)
{
	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		int randNum1 = rand() % 6;
		int randNum2 = rand() % 6;
		int temp;
		temp = a[randNum1];
		a[randNum1] = a[randNum2];
		a[randNum2] = temp;
	}
}
```
![image](https://user-images.githubusercontent.com/81094980/124648372-24648d00-ded2-11eb-9d1e-74db9b84155e.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Ascending_Order(int a[6], int i);
int temp;

int main()
{
	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };
	int b[6];
	printf("배열 a를 오름차순으로 배열하면\n");
	Ascending_Order(a, i);

	for (i = 0; i < 6; i++) 
	{
		printf("%d ", a[i]);
	}
	return 0;
}

void Ascending_Order(int a[6], int i)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
```
![image](https://user-images.githubusercontent.com/81094980/124755363-3db71900-df66-11eb-9910-f2269d88fd30.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Descending_Order(int a[6], int i);

int temp;
int main()
{
	int i = 0;
	int a[6] = { 72, 1, 36, 56, 21, 23 };

	printf("배열 a를 내림차순으로 배열하면\n");
	Descending_Order(a, i);
	for (i = 0; i < 6; i++) 
	{
		printf("%d ", a[i]);
	}
	return 0;
}
void Descending_Order(int a[6], int i)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}
```
![image](https://user-images.githubusercontent.com/81094980/124757030-1eb98680-df68-11eb-9f23-fc31cdf315f6.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

    int n = 0;

    scanf("%d", &n);

    for (int k = 2; k <= n; k++)
    {

        if (n % k == 0)
        {
            printf("%d", k);

            n = n / k;

            k--;
        }
    }
    if (n > 1)
    {
        printf("%d", n); 
    }
        
  
    return 0;
}
```
![image](https://user-images.githubusercontent.com/81094980/124290170-18a15f80-db8e-11eb-8ebc-3eb5a49bd203.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number * factorial(number - 1);
	}
}


int num, result = 0;
int main(void)
{
	printf("정수를 입력하세요");
	scanf("%d", &num);

	int result = factorial(num);

	printf("%d" , result);
	return 0;
}
```
![image](https://user-images.githubusercontent.com/81094980/124310213-d2a4c580-dba6-11eb-8994-7d2f3fe58905.png)

1. 최대 공약수 계산하기

```C

코드 복붙


```


```C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num1, num2, i, result = 0, a, b;
    printf("두 개의 정수 입력: \n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        a = num1;
        b = num2;
    }
    
    else
    {
        a = num2;
        b = num1;
    }

    for (i = 1; i <= a; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            result = i;
    }

    printf("%d", result);
    return 0;
}

```
![image](https://user-images.githubusercontent.com/77336436/117969749-c8aed500-b362-11eb-8467-92d4b63771de.png)


사진 캡처해서 붙여넣기

2. 피라미드 출력하기

```C

코드 복붙 

```

사진 캡처해서 붙여넣기

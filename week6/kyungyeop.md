```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{

    char word[100];
    int a, b, n;
    printf("영어 단어 입력 : ");
    scanf("%s", &word);

    for (n = 0; ;n++) 
    {
        if (word[n] == '\0') 
        {
            printf("단어의 길이 : %d\n", n);
            break;
        }
    }
    printf("거꾸로 된 단어 : ");
    for (b = 1;b<=n;b++) 
    {
        printf("%c", word[n-]);

    }

    return 0;

}
```
![c과제1001](https://user-images.githubusercontent.com/81094980/119544810-10a31280-bdcd-11eb-8bd4-f8d41228533f.jpg)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 5

void bubble_sort(int list[], int n)
{
    int i, j, temp;

    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}


int main(void)
{
    int i;
    int a, b, c, d, e;
  
    int n = MAX_SIZE;

    printf("정수 5개 입력 :");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int list[100] = { a, b, c, d, e };
    bubble_sort(list, n);


    for (i = 0; i < n; i++)
    {
        printf("%d  ", list[i]);
    }
}
```
![c과제2001](https://user-images.githubusercontent.com/81094980/119544926-2dd7e100-bdcd-11eb-8e62-e3546dcc503f.jpg)

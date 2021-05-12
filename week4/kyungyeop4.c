//1부터 10까지 출력하기
#include <stdio.h>

int main(void)
{     
int i;
for(i = 1; i <= 10; i++)
printf("%d", i);

return 0;
}

//1부터 10까지의 합 출력하기
#include <stdio.h>

int main(void)
{     
int i, Sum = 0;
for(i = 1; i <= 10; i++)
Sum += i;
printf("1부터 10까지의 합은 %d다.\n", Sum);

return 0;
}


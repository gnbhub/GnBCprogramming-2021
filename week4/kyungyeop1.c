#include <stdio.h>
int main()
{
    int num, a = 1, i;
    printf("양의 정수를 입력해 주세요 : ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
	{
		a = a * i;
	}
    printf("%d! = %d\n", num, a);

return 0;
}
//overflow:17일때 발생

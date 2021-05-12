//구구단 출력하기
#include <stdio.h>
int main()
{
    int i, a;
    scanf("%d",&a);
    printf("출력할 단: %d \n",a);
    printf("----%d단----\n",a);
    for ( i=1; i<10; i++) {
    printf("%d*%d=%d\n",a,i,a*i);
    }
return 0;
 }

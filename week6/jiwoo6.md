```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){

   int i,n;
   char str[100];
   printf("영어 단어 입력 : ");
   scanf("%s",&str);

   for (n = 0;;n++) {
      if (str[n] == '\0') {
         printf("단어의 길이 : %d\n",n);
         break;
      }
   }
   printf("거꾸로 된 단어 : ");
   for (i = n;i>=0;i--) {
      printf("%c",str[i]);

   }

   return 0;

}
```
![jiwoo6-1](https://user-images.githubusercontent.com/81032690/119502744-37e5e980-bda5-11eb-82d3-2835357f665f.png)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 5

void bubble_sort(int list[], int n) {
   int i, j, temp;

   for (i = n-1; i > 0; i--) {
      for (j = 0; j < i; j++) {
         if (list[j] > list[j+1]){
            temp = list[j];
            list[j]=list[j+1];
            list[j+1] = temp;
            }
      }

   }
}

int main(void) {

   int a,b,c,d,e,i;
   int n = MAX_SIZE;
   printf("정수 5개 입력 : ");
   scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
   
   
   int list[5] = {a,b,c,d,e};
   bubble_sort(list, n);

   for (i = 0; i < n; i++) {
      printf("%d ", list[i]);
   }

}
```

![jiwoo6-2](https://user-images.githubusercontent.com/81032690/119502819-4cc27d00-bda5-11eb-86ea-73d741711d68.png)

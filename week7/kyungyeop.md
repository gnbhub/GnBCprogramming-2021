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
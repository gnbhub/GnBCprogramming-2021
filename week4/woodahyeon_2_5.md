```c
#include <stdio.h>
int main(void) {
	
	int n, m;
	for (n = 1; n < 11; n++) {
		printf("%d의 약수는", n);
		for (m = 1; m <= n; m++) {
			if (n%m == 0) {
				if (m == n)
					printf(" %d\n", m);
				else
					printf(" %d", m);
			}
			else continue;
		}
	}
	return 0;
}
```
```
![image](https://user-images.githubusercontent.com/51956616/118414954-8e3a9480-b6e2-11eb-93ce-5b3801d91651.png)
```

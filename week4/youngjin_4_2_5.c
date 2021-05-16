#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = 1; a <= 10; a++)
	{
		printf("%d의 약수는 : ", a);
		{
			for (b = 1; b <= a; b++)
			{
				if (a % b == 0)
				printf("%d ", b);
			}
		printf("\n"); 
		}
	}
	return 0;
}

#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = 1; a <= 10; a++)
	{
		printf("%dė ė―ėë : ", a);
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

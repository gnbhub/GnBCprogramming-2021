#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
int a, b, c, d;
printf("직각삼각형을 출력합니다.\n단 : ");
scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{
		for (c=1; c <= b; c++)
		{
			printf("x");
		}
		printf("\n");
	}
	printf("\n\n");


	for (b = 1; b <= a; b++)
	{
		for (d = 1; d <= a - b; d++)
		{
			printf(" ");
		}
		for (c = 1; c <= b; c++)
		{
			printf("x");
		}
		printf("\n");
	}
	printf("\n\n");


	for (b = a ; 0 < b ; b--)
	{
		for (c = 1; c <= b; c++)
		{
			printf("x");
		}
		printf("\n");
	}
	printf("\n\n");


	for (b = a; 0 < b; b--)
	{
		for (d = 1; d <= a-b; d++)
		{
			printf(" ");
		}
		for (c = 1; c <= b; c++)
		{
			printf("x");
		}
		printf("\n");
	}
	printf("\n\n");

int e, f, g, h;
printf("피라미드를 출력합니다.\n단 : ");
scanf("%d", &e);

	for (f = 1; f <= e; f++)
	{
		for(g=1;g<=e-f;g++)
		{
			printf(" ");
		}
		for (h=1;h<=2*f-1;h++)
		{
			printf("x");
		}
		printf("\n");
	}
	return 0;
}

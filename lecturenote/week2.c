#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main(void) {

	int num1 = 10, num2 = 5;
	printf("num1의 초깃값은 %d이다.\n", num1);
	printf("num2의 초깃값은 %d이다.\n", num2);

	// num2의 값에 새로운 정숫값을 저장한다.
	num2 = 20;
	// num1의 값에 새로운 정숫값을 저장한다.
	num1 = 30;

	printf("num1의 새로운 값은 %d이다.\n", num1);
	printf("num2의 새로운 값은 %d이다.\n", num2);

	short a, b;
	unsigned short c;
	a = pow(2, 15) - 1; // 2^15 - 1 = 32767
	b = pow(2, 15); // 2^15 = 32768
	c = pow(2, 15);

	printf("a의 값은 %d이다.\n", a);
	printf("b의 값은 %d이다.\n", b);
	printf("c의 값은 %d이다.\n", c);






	float a_1 = 12.34;
	double b_1 = 56.78;
	printf("float형 a의 값은 %f이다.\n", a_1);
	printf("double형 b의 값은 %lf이다.\n", b_1);
	// 소수점 자릿수를 조정하면
	printf("소수점 자릿수를 조정한 후의 값\n");
	printf("float형 a의 값은 %.2f이다.\n", a_1);
	printf("double형 b의 값은 %.3lf이다.\n", b_1);



	int a_2 = 20;
	float b_2 = 5.05F, c_2 = 12000.149F;

	printf("정수형의 다양한 출력 형태\n\n");

	printf("1)%d\n\n", a_2);
	printf("2)%6d\n\n", a_2);
	printf("3)%+6d\n\n", a_2);
	printf("4)%-6d\n\n", a_2);
	printf("실수형의 다양한 출력 형태\n\n");

	printf("1)%f\n\n", b_2);
	printf("2)%6.1f\n\n", b_2);
	printf("3)%+6.1f\n\n", b_2);
	printf("4)%6f\n\n", c_2);





	printf("소문자 a의 ASCII 값은 %d이다.\n", 'a');
	printf("소문자 b의 ASCII 값은 %d이다.\n", 'b');
	printf("대문자 A의 ASCII 값은 %d이다.\n", 'A');
	printf("대문자 B의 ASCII 값은 %d이다.\n\n", 'B');
	printf("ASCII 97은 %c다.\n", 97);
	printf("ASCII 98은 %c다.\n", 98);
	printf("ASCII 65는 %c다.\n", 65);
	printf("ASCII 66은 %c다.\n", 66);



	int c_3;
	float d = 5.6, e = 8.4, f;

	c_3 = d + e;
	printf("c=d+e의 연산 결과는 %.2f이다\n", (float)c_3);

	f = d + e;
	printf("f=d+e 의 연산결과는 %.2f이다.\n", f);

	f = d + (int)e;
	printf("d+(int)e의 연산결과는 %.2f이다.\n", f);




	int Number = 65;
	printf("65를 8진수로 변환 : %o\n", Number);
	printf("65를 10진수로 변환 : %d\n", Number);
	printf("65를 16진수로 변환 : %x\n", Number);
	printf("65를 문자형으로 변환 : %c\n", Number);


	int age = 0;
	printf("당신의 나이를 입력하세요.\n");
	scanf("%d", &age);
	printf("당신의 나이는 %d입니다.\n", age);


	int age_1 = 0, birthyear = 0;

	printf("당신의 나이와 출생 연도를 입력하세요.\n");
	scanf("%d %d", &age_1, &birthyear);
	printf("당신은 %d년에 출생한 %d세입니다.\n", birthyear, age_1);
	getchar();

	printf("\t\"안녕하세요\"\n\n");
	printf("탈출 기법을 제대로 사용한 예\n");
	printf("\t10 %% 5 = 0\n\n");
	printf("탈출 기법을 제대로 사용하지 않은 예\n");
	printf("\t10 % 5 = 0\n");
	//visual studio 환경에서는 정상작동하여 위에것만 작동되야함

	char Letter_In;
	printf("문자 1개를 입력하세요.\n");
	Letter_In = getchar();
	putchar(Letter_In);

	getchar();

	char Name[20];
	printf("\n당신의 이름을 입력하세요 : ");
	gets(Name);
	puts(Name);


	return 0;
}

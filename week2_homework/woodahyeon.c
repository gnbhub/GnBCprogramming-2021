#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1 = "%d""%o""%x", num2 = "%d""%o""%x", result;

	printf("첫 번째 양의 정수 : ");
	scanf("%d", &num1);

	printf("두 번째 양의 정수 : ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("\n\nnumber     |decimal    |octal      |hexadecimal|\n");
	printf("number 1   |%+11d|%11o|%11x|\n", num1,num1,num1);
	printf("number 2   |%+11d|%11o|%11x|\n", num2,num2,num2);
	printf("sum        |%-+11d|%-11o|%-11x|\n",result,result,result);
	//이거 테이블 제목 11칸도 띄어쓰기 말고 변수 사용해서 하는 건가요??
	//시간이 늦어서 주석으로 달아용,, 내일 일찍 일어나면 지울게요! 
	return 0;

}

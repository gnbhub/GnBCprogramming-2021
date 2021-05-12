#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a, b, c, d, e, f, g;

	    printf("점 1의 x좌표 : \n");
		scanf("%f", &a);
		printf("점 1의 y좌표 : \n");
		scanf("%f", &b);
		printf("점 2의 x좌표 : \n");
		scanf("%f", &c);
		printf("점 2의 y좌표 : \n");
		scanf("%f", &d);
	
	if(a - c >= 0);
		{
			if (a - c == 0)
				printf("직사각형이 아닙니다.\n");
			else if(b - d == 0)
				printf("직사각형이 아닙니다.\n");
            return 0;
		}
	if(a - c < 0);
	    {
		
			if ( c - a ==0)
				printf("직사각형이 아닙니다.\n");
			else if (d - b == 0)
				printf("직사각형이 아닙니다.\n");
	        return 0;
	    }

	
	e= (a-c)*2 + (b-d)*2  ;
	f= (a - c) *  (b - d) ;
		printf("둘레의 길이: %f \n",fabs(e));
		printf("넓이: %f \n",fabs(f));
		

		
		
return 0; 
}

1. 최대 공약수 계산하기

```C
#include "header.h"

int XP = 40;
int YP = 0; // 처음 좌표 지정

int main(void)
{
	CursorView(0);

	while (1)
	{
		GotoXY(XP, YP);
		printf("ㅁ");
		MoveSquare(); // 이동 함수
	}

	return 0;
}

void MoveSquare()
{
	int nkey;

	if (_kbhit())
	{
		nkey = _getch();

		GotoXY(XP, YP); //이동 전 좌표로 가서
		printf("  "); // 자취 지우기!

		if (nkey == ARROW)
		{
			nkey = _getch();
			switch (nkey)
			{
			case UP: // 방향키 위
				YP--;
				break;
			case DOWN: // 방향키 아래
				YP++;
				break;
			case LEFT: // 방향키 왼쪽
				XP--;
				break;
			case RIGHT: // 방향키 오른쪽
				XP++;
				break;
			}
		}
	}
}





```


2. 피라미드 출력하기

```C
#include "header.h"

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void CursorView(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}


```


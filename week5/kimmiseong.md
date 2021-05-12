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



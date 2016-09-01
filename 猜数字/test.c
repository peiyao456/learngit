#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


int main()
{
	print_manu();
	char chessBoard[3][3];
	printf("ÇëÊäÈëÄãµÄÑ¡Ôñ>");
	int choose = 0;
	scanf("%d", &choose);
	switch (choose)
	{
	case 1:
		game(chessBoard);
		break;
	case 0:
		exit(0);
		break;
	default:
		printf("input error");
	}
	system("pause");
	return 0;
}

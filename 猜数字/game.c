#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


int chess_full(char chessBoard[3][3])//������������
{
	int i = 0;
	int j = 0;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			if (chessBoard[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void init(char chessBoard[3][3])//���̳��Ի�����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			chessBoard[i][j] = ' ';
		}
	}

	distchessBoard(chessBoard);
}
void distchessBoard(char chessBoard[3][3])//��ӡ���̺���
{
	int i = 0;
	for (i = 0;i < 3;i++)//��ӡ����
	{
		printf(" %c | %c | %c \n", chessBoard[i][0], chessBoard[i][1], chessBoard[i][2]);
		if (i != 2)
			printf("---|---|---\n");//pchessBoard
	}
}
void manPlay(char chessBoard[3][3])//�����庯��
{
	if (chess_full(chessBoard) == 1)
	{
		exit(0);
	}
	int line = 0;
	int column = 0;
	do
	{
		printf("������������ӵ�λ��(ע����С�±���0Ŷ):");
		scanf("%d%d", &line, &column);
		while (chessBoard[line][column] != ' ')
			if ((line < 0) || (line > 2) || (column < 0) || (column > 2))
			{
				printf("�Բ��������������Ч��λ�ã�");
			}
		chessBoard[line][column] = 'X';
	} while (chessBoard[line][column] == ' ');
	distchessBoard(chessBoard);
}
void pcplay(char chessBoard[3][3])//�������庯��
{
	if (chess_full(chessBoard) == 1)
	{
		exit(0);
	}
	printf("����������...\n");
	int line = 0;
	int column = 0;
	int count = 0;
	while (line = rand() % 3, column = rand() % 3, chessBoard[line][column] == ' ')
	{
		count++;
		chessBoard[line][column] = 'Y';
		if (count == 1)
		{
			break;
		}
	}
	distchessBoard(chessBoard);
}
int judge(char chessBoard[3][3])
{
	int i = 0;
	if ((chessBoard[0][0] == chessBoard[1][1]) && (chessBoard[1][1] == chessBoard[2][2]))
	{
		if (chessBoard[1][1] == 'X')
		{
			printf("���Ӯ��\n");
			return 1;
		}
		if (chessBoard[1][1] == 'Y')
		{
			printf("�Է�Ӯ��\n");
			return 1;
		}
	}
	if ((chessBoard[0][2] == chessBoard[1][1]) && (chessBoard[1][1] == chessBoard[2][0]))
	{
		if (chessBoard[1][1] == 'X')
		{
			printf("���Ӯ��\n");
			return 1;
		}
		if (chessBoard[1][1] == 'Y')
		{
			printf("�Է�Ӯ��\n");
			return 1;
		}
	}
	for (i = 0;i < 3;i++)
	{
		if ((chessBoard[i][1] == chessBoard[i][0]) && (chessBoard[i][1] == chessBoard[i][2]))
		{
			if (chessBoard[i][1] == 'X')
			{
				printf("���Ӯ��\n");
				return 1;
			}
			if (chessBoard[i][1] == 'Y')
			{
				printf("�Է�Ӯ��\n");
				return 1;
			}
		}

	}
	for (i = 0;i < 3;i++)
	{
		if ((chessBoard[0][i] == chessBoard[1][i]) && (chessBoard[1][i] == chessBoard[2][i]))
		{
			if (chessBoard[0][i] == 'X')
			{
				printf("���Ӯ��\n");
				return 1;
			}
			if (chessBoard[0][i] == 'Y')
			{
				printf("�Է�Ӯ��\n");
				return 1;
			}
		}
	}
	return 0;
}
void game(char chessBoard[3][3])
{
	//char chessBoard[3][3];
	int i = 0;
	int ret = 0;
	init(chessBoard);//���ó�ʼ������
	while ((chess_full(chessBoard) == 0))
	{
		manPlay(chessBoard);
		pcplay(chessBoard);
		ret = judge(chessBoard);
		if (ret == 1)
			break;
	}
	if (ret == 0)
	{
		printf("ƽ��\n");
	}
}

void print_manu()
{
	printf("----------------��ӭ����������ϵͳ-------------------\n");
	printf("*****************************************************\n");
	printf("**********************1.play*************************\n");
	printf("**********************2.exit*************************\n");
	printf("*****************************************************\n");
}

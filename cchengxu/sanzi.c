#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("******0.exit******\n");
	printf("******1.play******\n");
	printf("******************\n");
}
void game()
{
	//printf("����Ϸ");
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	showBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayMove(board, ROW, COL);
		showBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//�϶�����Ӯ��
		}
		computerMove(board, ROW, COL);
		showBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//�϶�����Ӯ��
		}
	}
	if (ret == 'Q')
	{
		printf("ƽ��\n");
		return;
	}
	if (ret == 'X')
	{
		printf("���Ӯ\n");
		return;
	}
	if (ret == 'O')
	{
		printf("����Ӯ\n");
		return;
	}

}
int main()
{
	int input = 0;
	printf("��������Ĳ����� \n");
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		defult:
			break;
		}
	} while (input);
}
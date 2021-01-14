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
	//printf("玩游戏");
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
			break;//肯定有人赢了
		}
		computerMove(board, ROW, COL);
		showBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;//肯定有人赢了
		}
	}
	if (ret == 'Q')
	{
		printf("平局\n");
		return;
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
		return;
	}
	if (ret == 'O')
	{
		printf("电脑赢\n");
		return;
	}

}
int main()
{
	int input = 0;
	printf("请输入你的操作： \n");
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
			printf("退出游戏");
			break;
		defult:
			break;
		}
	} while (input);
}
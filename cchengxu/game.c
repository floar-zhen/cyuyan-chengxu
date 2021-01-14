#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
	void showBoard(char board[][COL], int row, int col)
	{
		printf("**********************************\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//---控制行数
		if (i < row - 1)
		{
			//循环控制---的列数
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("**********************************\n");
}

	void PlayMove(char board[][COL], int row, int col)//玩家移动
	{
		int x = 0;
		int y = 0;

		while (1)
		{
			printf("请输入你的1-3坐标: \n");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
			{
				if (board[x-1][y-1] == ' ')
				{
					board[x-1][y-1] = 'X';
					break;
				}
			}
			else
			{
				printf("坐标已被占用，请重新输入： \n");
			}
		}
	}
	void computerMove(char board[][COL], int row, int col)//控制电脑移动
	{
		while (1)
		{
			int x = rand() % ROW;//row=3则生成0 1 2
			int y = rand() % COL;

			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = 'O';
				break;
			}
		}
	}

	char IsWin(char board[][COL], int row, int col)//判断是否赢
	{
		for (int i = 0; i < row; i++)
		{
			//行
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
			{
				return board[i][0];
			}
			//列
			if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}
			//对角线
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			{
				return board[0][0];
			}
			//另一条对角线
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
			{
				return board[0][0];
			}
			//是否平局-->棋盘里面已经放满了
			if (IsFull(board, row, col) == 1)
			{
				return 'Q';//证明平局
			}
		}
		return ' ';//代表没有人赢
	}

	static int IsFull(char board[][COL], int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (board[i][j] = ' ')
				{
					return 0;//证明没有满
				}
			}
		}
		return 1;//证明它满了
	}


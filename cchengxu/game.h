#ifndef _GAME_H_
#define _GAME_H_
#pragma once  //Ԥ��ͷ�ļ��ظ�����
# define ROW 3
# define COL 3
void InitBoard(char board[][COL], int row, int col);

void showBoard(char board[][COL], int row, int col);
char IsWin(char board[][COL], int row, int col);
void computerMove(char board[][COL], int row, int col);
#endif
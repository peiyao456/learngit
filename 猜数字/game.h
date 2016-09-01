#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include<stdlib.h>

int chess_full(char chessBoard[3][3]);//棋盘判满函数
void init(char chessBoard[3][3]);//棋盘初试化函数
void distchessBoard(char chessBoard[3][3]);//打印棋盘函数
void manPlay(char chessBoard[3][3]);//人下棋函数
void pcplay(char chessBoard[3][3]);//电脑下棋函数
int judge(char chessBoard[3][3]);//评判胜负函数
void game(char chessBoard[3][3]);//游戏函数
void print_manu();//打印菜单函数

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include<stdlib.h>

int chess_full(char chessBoard[3][3]);//������������
void init(char chessBoard[3][3]);//���̳��Ի�����
void distchessBoard(char chessBoard[3][3]);//��ӡ���̺���
void manPlay(char chessBoard[3][3]);//�����庯��
void pcplay(char chessBoard[3][3]);//�������庯��
int judge(char chessBoard[3][3]);//����ʤ������
void game(char chessBoard[3][3]);//��Ϸ����
void print_manu();//��ӡ�˵�����

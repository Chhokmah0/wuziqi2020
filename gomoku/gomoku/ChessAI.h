#pragma once
#include "Player.h"
class ChessAI : public Player
{
private:
	long long score_self,score_other;
	int want_set_x, want_set_y;	//�ڵݹ�����Ž�ʱӦ���µ�λ��
	int* guess_line(int x, int y, int front);
public:
	void get_score(Checkerboard& board,int x,int y);//�����x��y���������̶�score�ĸı�

};


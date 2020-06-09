#pragma once
#include "Player.h"
#include <string>

enum RESULT {
	DRAW,
	B_WIN,
	W_WIN
};

struct EVALUATION {
	long long score;
	RESULT result;
	int STAT[8];//��������ĳЩ���ͣ����ܲ���ɱ��

	EVALUATION() : score(0){
		memset(STAT, 0, sizeof(STAT));
	}
};

class ChessAI : public Player
{
private:
	void init_typescore();//��ʼ������
public:
	EVALUATION get_score(Checkerboard& board);

};


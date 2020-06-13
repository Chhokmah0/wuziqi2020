#pragma once
#include <string>

#include "Player.h"

enum RESULT { DRAW, B_WIN, W_WIN };

struct Point {
    int x, y;
    long long val;

    Point() : x(0), y(0), val(0){};
    Point(int _x, int _y, long long _val) : x(_x), y(_y), val(_val){};

    friend bool operator<(const Point& a, const Point& b) {
        return a.val > b.val;
    }
};

//����������ӾͲ��ÿ���new֮�����Ҫdel�ˡ�
const int MAXN_POINTS = 15;
struct Points {
    Point p[MAXN_POINTS];
};

struct EVALUATION {
    long long score;
    RESULT result;
    int STAT[8];  //��������ĳЩ���ͣ����ܲ���ɱ�壬ʱ�䲻��û��ʵ�֡�

    EVALUATION() : score(0) { memset(STAT, 0, sizeof(STAT)); }
};

class ChessAI : public Player {
   private:
    Point best_point;       //������¼alpha-beta������λ��
    void init_typescore();  //��ʼ������

   public:
    int color;
    ChessAI(int _color) : color(_color) { init_typescore(); };
    bool AI_set_chess(Checkerboard& board);
    EVALUATION get_score(Checkerboard& board);
    Points seek_points(Checkerboard board);
    Point get_best(Checkerboard board);  //һ���
    long long alpha_beta(Checkerboard board, int depth, long long alpha, long long beta);
};

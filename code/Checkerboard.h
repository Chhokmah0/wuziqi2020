#pragma once
//
// Created by Chhokmah on 2020/4/17.
//

#ifndef GOMOKU_CHECKERBOARD_H
#define GOMOKU_CHECKERBOARD_H

//�޽���
//�ո�0������1������2
#include <easyx.h>

class Checkerboard {
   public:
    int board[15][15];
    Checkerboard();
    ~Checkerboard() = default;

    void init();
    bool set_chess(int x, int y, int c);
    bool judge(int x, int y, int c);
    static int count(const int* x);
    int* get_line(int x, int y, int front);
    static bool inside(int x, int y);
    void print_init();
    void print_board();
    void print_chess();
    void print_win();
    Checkerboard reverse();  //��ת���ӣ�����AIȥ�������ӵ��������
};

#endif  // GOMOKU_CHECKERBOARD_H

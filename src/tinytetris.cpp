#include <ctime>    //   ████████  ██████  ████████  ████████  ██  ██████  ██
#include "curses.h" //      ██     ██         ██     ██    ██  ██  ██      ██
#include <stdlib.h> //      ██     ████       ██     ████████  ██  ██████  ██
#include <string.h> //      ██     ██         ██     ██  ██    ██      ██
#include <unistd.h> //      ██     ██████     ██     ██    ██  ██  ██████  ██

// 一共有 7 种形状的块

// todo 这些数字表示什么含义（这段直接复制的）
// block layout is: {w-1,h-1}{x0,y0}{x1,y1}{x2,y2}{x3,y3} (two bits each)
int x = 431424, y = 598356, r = 427089, px = 247872, py = 799248, pr,
    c = 348480, p = 615696, tick, board[20][10],
    block[7][4] = {{x, y, x, y},
                   {r, p, r, p},
                   {c, c, c, c},
                   {599636, 431376, 598336, 432192},
                   {411985, 610832, 415808, 595540},
                   {px, py, px, py},
                   {614928, 399424, 615744, 428369}},
    score = 0;

// extract a 2-bit number from a block entry
int NUM(int x, int y) {
    return 3 & block[p][x] >> y;
}

void new_piece() {
    y = py = 0;
    p = rand() % 7;
    r = pr = rand() % 4;
    x = px = rand() % (10 - NUM(r, 16));
}

int main() {
    srand((unsigned int) time(0));
    initscr();
    start_color();
    // colors indexed by their position in the block
    for (int i = 1; i < 8; i++) {
        init_pair(i, i, 0); // define color pairs
    }
    new_piece();
    return 0;
}
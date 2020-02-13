
#ifndef HEADER_H
#define HEADER_H


#define AMOUNT 20
#define WIDTH 40
#define HEIGHT 20

extern int headX;
extern int headY;
extern char map[WIDTH][HEIGHT];
extern char head[WIDTH][HEIGHT];

extern std::string dir;

extern void Plansza();
extern void Move();
#endif // !HEADER_H
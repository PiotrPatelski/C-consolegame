#include <iostream>
#include <windows.h>
#include <ctime>						 				 // U¿ywa funkcji czas (prêdkoœæ gry)
#include <vector>										 // U¿ywa funkcji Pozycje
#include <fstream>									     // U¿ywa funkcji do wysokiego wyniku
#include <string>
#include <conio.h>
#include "header.h"

/*
void dodawanie(int *result)
{
	*result = *result + AMOUNT;
	std::cout << "result = "<<*result<<std::endl;
}
void odejmowanie(int *result)
{
	*result = *result - AMOUNT;
	std::cout << "result = " << *result << std::endl;
}
void mno¿enie(int *result)
{
	*result = *result * AMOUNT;
	std::cout << "result = " << *result << std::endl;
}
*/
void Plansza()
{
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1)
            {
                map[x][y] = '#';
                head[x][y] = '#';

            }
            else if (x == headX && y == headY)
            {
                map[x][y] = 'O';
                head[x][y] = 'O';
            }
            
            else
            {
                map[x][y] = ' ';
                head[x][y] = ' ';
            }
            std::cout << map[x][y];
        }
        std::cout << std::endl;
    }
}
void Move()
{
    
    if (_kbhit())
    {
        //funkcja <conio.h> zwraca wartoœæ z tablicy ASCII wciœniêtego klawisza
        switch (_getch())
        {
        case 'a':
            dir = "LEFT";
            break;
        case 'd':
            dir = "RIGHT";
            break;
        case 'w':
            dir = "UP";
            break;
        case 's':
            dir = "DOWN";
            break;
            /*case 'x':
                gameOver = true;
                break;*/
        }
    }
    HANDLE hOut;
    COORD Position;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    Position.X = headX;
    Position.Y = headY;
    if (dir == "LEFT")
    {
        
        SetConsoleCursorPosition(hOut, Position);
        std::cout << " \r";
        //LEFT
        Position.X = headX - 1;
        SetConsoleCursorPosition(hOut, Position);
        std::cout << "O\r";
        headX -= 1;
    }
    else if (dir == "RIGHT")
    {

       
        SetConsoleCursorPosition(hOut, Position);
        std::cout << " \r";
        //RIGHT
        Position.X = headX + 1;
        SetConsoleCursorPosition(hOut, Position);
        std::cout << "O\r";
        headX += 1;
        
    }
    else if (dir == "UP")
    {
        
        SetConsoleCursorPosition(hOut, Position);
        std::cout << " \r";
        //UP
        Position.Y = headY - 1;
        SetConsoleCursorPosition(hOut, Position);
        std::cout << "O\r";
        headY -= 1;
    }
    else if (dir == "DOWN")
    {
        
        SetConsoleCursorPosition(hOut, Position);
        std::cout << " \r";
        //DOWN
        Position.Y = headY +1;
        SetConsoleCursorPosition(hOut, Position);
        std::cout << "O\r";
        headY += 1;
    }
}
// multifileExample.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <windows.h>
#include <ctime>						 				 // Używa funkcji czas (prędkość gry)
#include <vector>										 // Używa funkcji Pozycje
#include <fstream>									     // Używa funkcji do wysokiego wyniku
#include <string>
#include <conio.h>
#include "header.h"

int headX = WIDTH / 2;
int headY = HEIGHT / 2;
char map[WIDTH][HEIGHT];
char head[WIDTH][HEIGHT];

std::string dir = "STOP";
void Plansza();
void Move();

int main()
{   
       
    Plansza();

    while (1)
    {
        Sleep(200);
        Move();
        
        
        
    }
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

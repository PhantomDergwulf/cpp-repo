// PTA 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <ctime>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    int Seed = time(NULL);
    srand(Seed);
    bool InBattle = false;
    int EnemyEncounter = rand() % 100 + 1;
    int array[1][2][3][4][5][6][7][8][9][10];

    if (EnemyEncounter > 1 && EnemyEncounter < 10) {
        std::cout << "A small bat appeared, prepare for battle!\n";
        bool InBattle = true;
    } else {

        
        if (EnemyEncounter > 11 && EnemyEncounter < 20) {
            std::cout << "A large bat appeared appeared, prepare for battle!\n";
            bool InBattle = true;
        } else {
        std::cout << "No enemy here. be on the look out\n";
        }
    }

    std::cout << "Debug vars, please ignore\n" << EnemyEncounter << "\n" << Seed << "\n" << InBattle;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

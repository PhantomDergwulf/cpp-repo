// PTA 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <ctime>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    int seed = time(NULL);
    srand(seed);
    bool in_battle = false;
    int enemy_encounter = rand() % 100 + 1;
    int array[10];

    if (enemy_encounter > 1 && enemy_encounter < 10) {
        std::cout << "A small bat appeared, prepare for battle!\n";
        bool in_battle = true;
    } else {

        
        if (enemy_encounter > 11 && enemy_encounter < 20) {
            std::cout << "A large bat appeared appeared, prepare for battle!\n";
            bool in_battle = true;
        } else {
        std::cout << "No enemy here. be on the look out\n";
        }
    }

    std::cout << "Debug vars, please ignore\n" << enemy_encounter << "\n" << seed << "\n" << in_battle;
    return 0;
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

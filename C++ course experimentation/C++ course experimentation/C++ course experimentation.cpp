// C++ course experimentation.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <climits>
// #include <> 
// this tells the program to include standard lib

using namespace std;

namespace std {};
// namespace initialisation

void simple_io_day_computer()
{
	string day;
	cout << "Hello World!, what day is it today?\n "; //this outputs hello world to the console 
	cin >> day;
	cout << "Hi! I'm phantom and today is " << day << "\n";
}
void simple_salary_computer()
{
	double annual_salary = 5000;
	cout << "please enter your annual salary ";
	cin >> annual_salary;
	double montly_salary = annual_salary / 12;
	cout << "your monthly salary is " << montly_salary;
}

void program_function()
{
	int program = -1;
	cout << "which program do you wish to see, 0 to exit\n";
	cin >> program;
	switch (program)
	{
		case 1:
			simple_io_day_computer();
			program = -1;
			break;
		case 2:
			simple_salary_computer();
			program = -1;
			break;
	}
}

int main()
{

	int program = -1;
	{
		while (program == !0) 
		{
			program_function();
		}
	}
}

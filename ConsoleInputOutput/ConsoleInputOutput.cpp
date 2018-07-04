// ConsoleInputOutput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	cout.precision(3);
	cout << "Not fixed with 3 digits: " << -1234.5678 << "\n";
	cout.precision(4);
	cout << "Not fixed with 4 digits: " << -1234.5678 << "\n";
	cout.precision(5);
	cout << "Not fixed with 5 digits: " << -1234.5678 << "\n";
	cout.precision(6);
	cout << "Not fixed with 6 digits: " << -1234.5678 << "\n";

	cout << fixed;
	cout.precision(3);
	cout << "Fixed with 3 digits: " << -1234.5678 << "\n";
	cout.precision(4);
	cout << "Fixed with 4 digits: " << -1234.5678 << "\n";
	cout.precision(5);
	cout << "Fixed with 5 digits: " << -1234.5678 << "\n";
	cout.precision(6);
	cout << "Fixed with 6 digits: " << -1234.5678 << "\n";

	char string[256];
	string[0] = 'h';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = 0;
	cout << string << "\n";

	cout << "Give me your name: ";
	cin >> string;

	cout << "Your name is: " << string;

    return 0;
}


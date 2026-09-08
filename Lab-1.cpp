// Lab-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double AIR;

int main()
{
    cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 to quit): " << endl;
    cin >> AIR;
    AIR = AIR / 100;
    cout << AIR;
}


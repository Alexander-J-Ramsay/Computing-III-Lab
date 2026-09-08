// Lab-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double AIR;
    double loan_amount;
    int loan_period;

    cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 to quit): " << endl;
    cin >> AIR;
    AIR /= 100;

    cout << "Please enter the amount you would like to receive: " << endl;
    cin >> loan_amount;

    cout << "Please enter loan period in months:" << endl;
    cin >> loan_period;

    double years = loan_period / 12;

    double FVI = loan_amount / (1 - AIR * years);
    double monthly_amount = FVI / loan_period;

    cout << "the total amount of your loan (including interest at 15% per annum) is $" << FVI << endl;
    cout << "Your monthly payment for 12 months will be $" << monthly_amount << endl;

}

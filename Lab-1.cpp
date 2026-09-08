// Lab-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double AIR;
int loan_amount;
int loan_period;


int main()
{
    cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 to quit): " << endl;
    cin >> AIR;
    AIR /= 100;

    cout << "Please enter the amount you would like to receive: " << endl;
    cin >> loan_amount;

    cout << "Please enter loan period in months:" << endl;
    cin >> loan_period;


    double total_interest = loan_amount * AIR * (loan_period / 12);
    double total_amount = loan_amount + total_interest;
    double monthly_amount = total_amount / loan_period;

    cout << "the total amount of your loan (including interest at 15% per annum) is $" << total_amount << endl;
    cout << "Your monthly payment for 12 months will be $" << monthly_amount << endl;

  
}


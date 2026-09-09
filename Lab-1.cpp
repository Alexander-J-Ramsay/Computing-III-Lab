#include <iostream>
#include <cmath> //cmath for the rounding.

using namespace std;

int main(void)
{
    double intrest;
    double loan_amount;
    int loan_period;
    double years;
    double loan_total;
    double monthly_amount;

    //First check from the user for if they want to run the program and enter the loop.
    cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 to quit): ";
    cin >> intrest;

    while (intrest != 0) //Loop continues until the user stops by entering intrest as 0.
    {
        intrest /= 100; //Convert the intrest to a decimal value.

        cout << "Please enter the amount you would like to receive: ";
        cin >> loan_amount;

        cout << "Please enter loan period in months: ";
        cin >> loan_period;

        years = loan_period / 12; //Convert months into years as a decimal value.

        //Calculate the overall loan total and monthly amount after intrest rounding to the nearest cent.
        loan_total = round((loan_amount / (1 - intrest * years)) * 100) / 100; 
        monthly_amount = round((loan_total / loan_period) * 100) / 100; 

        cout << "the total amount of your loan (including interest at 15% per annum) is $" << loan_total << "." << endl;
        cout << "Your monthly payment for 12 months will be $" << monthly_amount << "." << "\n" << endl;

        cout << "Please enter the annual interest rate as a percentage (e.g., 15 for 15%) (enter 0 to quit): ";
        cin >> intrest;
    }
    return 0; //Terminate program once user inputs 0 for intrest.
}

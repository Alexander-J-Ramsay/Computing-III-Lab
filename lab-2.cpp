#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void getInput(int &pounds, double &ounces); // Get user input for pounds and ounces
void calculation(double ounces, double pounds, double& kilograms, double& grams);

int main()
{
    int pounds;
    double ounces;
    getInput(pounds, ounces);
    
}
void getInput(int &pounds, double &ounces)
{
    cout << "Please enter the number of pounds: ";
    cin >> pounds;
    cout << "Please enter the number of ounces: ";
    cin >> ounces;
}

void calculation(double ounces, double pounds, double& kilograms, double& grams)
{
    double pounds_Combined = pounds + (ounces / 16);

    double total_kilograms = pounds_Combined * 0.45359237;
    kilograms = static_cast<int>(floor(total_kilograms));

    grams = (total_kilograms - kilograms) * 1000;
}


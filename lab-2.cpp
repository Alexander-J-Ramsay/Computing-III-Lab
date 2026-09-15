#include <iostream>
#include <cmath>
using namespace std;

void getInput(int &pounds, double &ounces); // Get user input for pounds and ounces

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


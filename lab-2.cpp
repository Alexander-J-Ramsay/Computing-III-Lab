#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void conversion_output(int pounds, int kilograms, double ounces, double grams);
void conversion(int pounds, int &kilograms, double ounces, double &grams);
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

void conversion_output(int pounds, int kilograms, double ounces, double grams)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(8);

	cout << pounds << " pounds and " << ounces << " ounces converts to " << endl << kilograms << " kilograms and " << grams << " grams";
}

void conversion(int pounds, int& kilograms, double ounces, double& grams)
{
	double combined_pounds;

	combined_pounds = pounds + ounces / 16;
	double combined_kg = combined_pounds * 0.45359237;
	kilograms = floor(combined_kg);
	grams = (combined_kg - kilograms) * 1000;

}


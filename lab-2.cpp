#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;
/*Faizan made the output function, Aiden made the input function, Mason and Alex both made 
conversion functions (Mason void conversion, Alex void calculation) due to miscommunication, 
Mason made the input verification, and Alex made the driver and fixed some bugs. */

void conversion_output(int pounds, int kilograms, double ounces, double grams);
void conversion(int pounds, int& kilograms, double ounces, double& grams);
void getInput(int& pounds, double& ounces); // Get user input for pounds and ounces
void calculation(double ounces, double pounds, double& kilograms, double& grams);

int main()
{
	int pounds;
	double ounces, g = 0;
	int kg = 0;
	getInput(pounds, ounces);
	conversion(pounds, kg, ounces, g);
	conversion_output(pounds, kg, ounces, g);

	return 0;
}

void getInput(int& pounds, double& ounces)
{
	while (cout << "Please enter the number of pounds: " && (!(cin >> pounds) || pounds < 0))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Thats not a number greater than or equal to 0! Please try again..." << endl;
	}

	while (cout << "Please enter the number of ounces: " && (!(cin >> ounces) || ounces < 0 || ounces >= 16))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "That's not a number greater than or equal to 0, and less than 16! Please try again..." << endl;
	}
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

/*The third function should also take 4 parameters, and should output the result of the calculation to
cout by displaying both the starting values and both of the resulting converted values. This function
should not do any calculations. Your output for ounces and grams should be displayed in fixed
notation, showing the decimal place with 8 decimal digits of precision.*/
#include <iostream>
#include <cmath>



using namespace std;

void conversion_output(int pounds, int kilograms, double ounces, double grams);
void conversion(int pounds, int &kilograms, double ounces, double &grams);

int main(int argc, char* argv[])
{
	int kg = 0, pounds = 5;
	double g = 0, ounces = 13.2579;

	conversion(pounds, kg, ounces, g);

	conversion_output(pounds, kg, ounces, g); // pounds, kg, ounces, grams
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

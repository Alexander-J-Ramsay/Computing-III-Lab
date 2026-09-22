#include <iostream>

using namespace std;

void runConversions(double drams);

int main(void)
{

	int inputSelection = -1;
	double inputMass;
	double drams;

	while (inputSelection != 0)
	{
		cout << "Please enter 1 to use Avoirdupois pounds, 2 to use Troy pounds, 3 to use grams, or 0 to exit: ";
		cin >> inputSelection;

		switch (inputSelection)
		{
		case 1:
			cout << "Please enter a mass in Avoirdupois pounds: ";
			cin >> inputMass;
			drams = inputMass * 256.0;
			break;
		case 2:
			cout << "Please enter a mass in Troy pounds: ";
			cin >> inputMass;
			drams = inputMass * 96.0;
			break;
		case 3:
			cout << "Please enter a mass in grams: ";
			cin >> inputMass;
			drams = inputMass / 1.7718451953125;
			break;
		default:
			cout << "\nThanks for using the mass conversion program!" << endl;
			exit(0);
			break;
		}
		runConversions(drams);
	}
	return 0;
}

void runConversions(double drams)
{
	cout << "Mass in Avoirdupois pounds is: " << drams / 256 << endl;
	cout << "Mass in Troy pounds is: " << drams / 96 << endl;
	cout << "Mass in grams is: " << drams * 1.7718451953125 << "\n" << endl;
}

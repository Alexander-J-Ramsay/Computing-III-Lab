#include <iostream>

using namespace std;

void runConversions(const double drams);
int inputVerify(double& inputMass, const string& text);

int main(void)
{
	int inputSelection = -1;
	double inputMass;
	double drams = 0;

	while (inputSelection != 0)
	{
		while (cout << "Please enter 1 to use Avoirdupois pounds, 2 to use Troy pounds, 3 to use grams, or 0 to exit: "
			&& (!(cin >> inputSelection) || inputSelection < 0 || inputSelection > 3))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (inputSelection)
		{
		case 1:
			inputVerify(inputMass, "Please enter a mass in Avoirdupois pounds: ");
			drams = inputMass * 256.0;
			break;
		case 2:
			inputVerify(inputMass, "Please enter a mass in Troy pounds: ");
			drams = inputMass * 96.0;
			break;
		case 3:
			inputVerify(inputMass, "Please enter a mass in grams: ");
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

int inputVerify(double& inputMass, const string& text)
{
	while (cout << text && (!(cin >> inputMass) || (inputMass <= 0)))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 1;
}

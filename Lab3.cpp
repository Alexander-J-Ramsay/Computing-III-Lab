// lab_3 
//Alexander made the class and class functions, Mason made the input verification, Faizen made the Main function, and Aiden Also helped with input verification and Main function

#include <iostream>
#include <cmath>

using namespace std;

class Mass {
public:
	void setMassAvoirdupoisPounds(double avoirdupois_Pounds);
	void setMassTroyPounds(double troy_Pounds);
	void setMassMetricGrams(double metric_Grams);
	double get_avoirdupoisPounds(void);
	double get_troyPounds(void);
	double get_metricGrams(void);

private:
	double drams;

};

void Mass::setMassAvoirdupoisPounds(double avordupois_Pounds) 
{
	drams = avordupois_Pounds * 256;
}

void Mass::setMassTroyPounds(double troy_Pounds)
{
	drams = troy_Pounds * 96;
}

void Mass::setMassMetricGrams(double metric_Grams)
{
	drams = metric_Grams / 1.7718451953125;
}

double Mass::get_avoirdupoisPounds(void)
{
	return drams / 256;
}

double Mass::get_troyPounds(void)
{
	return drams / 96;
}

double Mass::get_metricGrams(void)
{
	return drams * 1.7718451953125;
}

int inputVerify(double& inputMass, const string& text);
void runConversions(Mass weight);




int main(void)
{
	Mass weight;
	int inputSelection = -1;
	double inputMass;

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
			weight.setMassAvoirdupoisPounds(inputMass);
			break;

		case 2:
			inputVerify(inputMass, "Please enter a mass in Troy pounds: ");
			weight.setMassTroyPounds(inputMass);
			break;
		case 3:
			inputVerify(inputMass, "Please enter a mass in grams: ");
			weight.setMassMetricGrams(inputMass);
			break;
		default:
			cout << "\nThanks for using the mass conversion program!" << endl;
			exit(0);
			break;
		}
		runConversions(weight);
	}
	return 0;
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

void runConversions(Mass weight)
{
	cout << "Mass in Avoirdupois pounds is: " << weight.get_avoirdupoisPounds() << endl;
	cout << "Mass in Troy pounds is: " << weight.get_troyPounds() << endl;
	cout << "Mass in grams is: " << weight.get_metricGrams() << "\n" << endl;
}


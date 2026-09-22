// lab_3

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





int main()
{
	int choice;
	int choice2;
	Mass weight;

	do
	{
		cout << "Please enter 1 to use Avoirdupois pounds, 2 to use Troy pounds, 3 to use grams, or 0 to exit : ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Please enter a mass in Avoirdupois pounds: ";
			cin >> choice2;

			weight.setMassAvoirdupoisPounds(choice2);
			cout << "troy pounds --> " << weight.get_troyPounds() << "    metric grams --> " << weight.get_metricGrams() << endl;
		}
		else if (choice == 2)
		{
			cout << "Please enter a mass in troy pounds: ";
			cin >> choice2;

			weight.setMassTroyPounds(choice2);
			cout << "avoirdupois pounds --> " << weight.get_avoirdupoisPounds() << "   metric grams --> " << weight.get_metricGrams() << endl;
		}
		else if (choice == 3)
		{
			cout << "Please enter a mass in metric grams: ";
			cin >> choice2;

			weight.setMassMetricGrams(choice2);
			cout << "troy pounds --> " << weight.get_troyPounds() << "   avoirdupois pounds --> " << weight.get_avoirdupoisPounds() << endl;
		}
		else
		{
			break;
		}
	} while (choice != 0);
}
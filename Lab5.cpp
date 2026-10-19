#include <iostream>
#include <vector>

using namespace std;

class ComplexNumber {

	friend ostream& operator<<(ostream& out, ComplexNumber c);

public:
	ComplexNumber() : _real(0), _imag(0) {}
	ComplexNumber(double initR, double initD) : _real(initR), _imag(initD) {}

	double getRealNumber(void) { return _real; }
	double getImaginaryNumber(void) { return _imag; }

	void setRealNumber(double newR) { _real = newR; }
	void setImaginaryNumber(double newI) { _imag = newI; }

private:
	double _real;
	double _imag;
};

int main()
{
	vector<int> complexNumbers = { 0,1,2,3,4,5,6,7,8,9 };

	cout << "Vector output using an indexed for-loop:" << endl;
	for (int n = 0; n < 10; n++)
	{
		cout << n << "+" << n * 2 << "i" << endl;
	}
	cout << "Vector output using an iterator in for-loop:" << endl;
	
	for (vector<int>::iterator iterator = complexNumbers.begin(); iterator != complexNumbers.end(); iterator++)
	{
		cout << *iterator << "+" << *iterator * 2 << "i" << endl;
	}
}

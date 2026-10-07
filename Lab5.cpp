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
	cout << "hello world!" << endl;
}
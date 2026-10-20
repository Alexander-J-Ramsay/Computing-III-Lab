#include <iostream>
#include <vector>

using namespace std;

class ComplexNumber {

	friend ostream& operator<<(ostream& out, const ComplexNumber& c);

public:
	ComplexNumber() : _real(0), _imag(0) {}
	ComplexNumber(double initR, double initD) : _real(initR), _imag(initD) {}

	double getRealNumber(void) { return _real; }
	double getImaginaryNumber(void) { return _imag; }

	void setRealNumber(double newR) { _real = newR; }
	void setImaginaryNumber(double newI) { _imag = newI; }

	ComplexNumber operator+(const ComplexNumber& right) const
	{
		return ComplexNumber(_real + right._real, _imag + right._imag);
	}

	ComplexNumber operator-(const ComplexNumber& right) const
	{
		return ComplexNumber(_real - right._real, _imag - right._imag);
	}

	ComplexNumber operator*(const ComplexNumber& right) const
	{
		return ComplexNumber(_real * right._real - _imag * right._imag,
			_real * right._imag + _imag * right._real);
	}

	ComplexNumber operator/(const ComplexNumber& right) const
	{
		double denom = right._real * right._real + right._imag * right._imag;
		if (denom == 0) {
			cerr << "Error: division by zero complex number" << endl;
			return ComplexNumber();
		}
		return ComplexNumber((_real * right._real + _imag * right._imag) / denom,
			(_imag * right._real - _real * right._imag) / denom); 
	}

	ComplexNumber operator!() const
	{
		return ComplexNumber(_real, -_imag);
	}

private:
	double _real;
	double _imag;
};

ostream& operator<<(ostream& out, const ComplexNumber& c)
{
	out << c._real << "+" << c._imag << "i";
	return out;
}

int main()
{
	ComplexNumber c1;
	cout << "Value of c1 (default constructor):" << endl;
	cout << "c1.getRealNumber() == " << c1.getRealNumber() << ", c1.getImaginaryNumber() == " << c1.getImaginaryNumber() << endl;

	ComplexNumber c2(1, 2);
	cout << "Value of c2 (value constructor):" << endl;
	cout << "c2.getRealNumber() == " << c2.getRealNumber() << ", c2.getImaginaryNumber() == " << c2.getImaginaryNumber() << endl;

	ComplexNumber c3;
	c3.setRealNumber(3);
	c3.setImaginaryNumber(4);
	cout << endl;

	cout << "c2 + c3 (" << c2 << " + " << c3 << ") == " << (c2 + c3) << endl;
	cout << "c2 - c3 (" << c2 << " - " << c3 << ") == " << (c2 - c3) << endl;
	cout << "c2 * c3 (" << c2 << " * " << c3 << ") == " << (c2 * c3) << endl;
	cout << "c2 / c3 (" << c2 << " / " << c3 << ") == " << (c2 / c3) << endl;
	cout << "(c2/c3) + (c2*c3) == " << ((c2 / c3) + (c2 * c3)) << endl;

	cout << "Conjugate of c2 (" << c2 << ") == " << !c2 << endl;
	cout << endl;

	vector<ComplexNumber> complexNumbers;
	for (int n = 0; n < 10; n++)
	{
		complexNumbers.push_back(ComplexNumber(n, 2 * n));
	}

	cout << "Vector output using an indexed for-loop:" << endl;
	for (int i = 0; i < complexNumbers.size(); i++)
	{
		cout << complexNumbers[i] << endl;
	}

	cout << "Vector output using an iterator in for-loop:" << endl;
	for (vector<ComplexNumber>::iterator it = complexNumbers.begin(); it != complexNumbers.end(); it++)
	{
		cout << *it << endl;
	}
}

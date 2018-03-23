#pragma once


class ComplexNumber {
public:
	ComplexNumber();
	ComplexNumber(ComplexNumber a, ComplexNumber b);
	ComplexNumber(double a, double b);
	void set_real(double a);
	void set_imaginary(double a);
	double get() {
		double rez = this->real + this->imaginary;
		return rez;

	}
private:
	double real;
	double imaginary;
};

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() {
	this->real = 0;
	this->imaginary = 0;
}

ComplexNumber::ComplexNumber(ComplexNumber a, ComplexNumber b) {
	this->real = a.real + b.real;
	this->imaginary = b.imaginary + a.imaginary;
}

ComplexNumber::ComplexNumber(double a, double b) {
	this->real = a;
	this->imaginary = b;
}
void ComplexNumber::set_real(double a) {
	this->real = a;
}

void ComplexNumber::set_imaginary(double a) {
	this->imaginary = a;
}
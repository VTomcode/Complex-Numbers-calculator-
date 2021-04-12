#include "Complex.h"
#include <iostream>
#include "math.h"
using namespace std;
 
Complex::Complex(double real,double image) //constractor 
{
	Set_imaginary(image);
	Set_Real(real);
}

Complex::~Complex()
{

}
// set functions 
void Complex::Set_imaginary(double image)
{
	this->imaginary_number = image;
}

void Complex::Set_Real(double real)
{
	this->real_number = real;
}
//get functions 
double Complex::Get_imaginary()
{
	return this->imaginary_number;
}

double Complex::Get_Real()
{
	return this->real_number;
}
// operator overloading 
Complex Complex::operator+(const Complex& Number)
{
	Complex result;
	result = Complex(this->real_number + Number.real_number, this->imaginary_number + Number.imaginary_number);
		return result;
}

Complex Complex::operator-(const Complex& Number)
{
	Complex result;
	result = Complex(this->real_number - Number.real_number, this->imaginary_number - Number.imaginary_number);
	return result;
}

Complex Complex::operator*(const Complex& Number)
{
	Complex result; 
	result = Complex((this->real_number * Number.real_number) - (this->imaginary_number * Number.imaginary_number), (this->imaginary_number * Number.real_number) + (this->real_number * Number.imaginary_number));
	return result;
}

Complex Complex::operator/(const Complex& Number)
{
	Complex result;
	double a, b, c, d;
	a = this->real_number;
	b = this->imaginary_number;
	c = Number.real_number;
	d = Number.imaginary_number;
		result = Complex(((a * c + b * d) / (c *c + d*d)), ((b * c - a * d) / (c * c + d * d)));
	return result;
}

Complex Complex::operator++()
{
	Complex Number;

	Number = Complex(this->real_number++, this->imaginary_number);
	return Number;
}
Complex Complex::operator++(int)
{
	Complex Number;

	Number = Complex(this->real_number++, this->imaginary_number);
	return Number;
}
// Input and output 
ostream& operator<<(ostream& ostream, const Complex &Number)
{
	ostream << Number.real_number << " + " << Number.imaginary_number << "i";
	return ostream;
}
istream& operator >>(istream& istream,Complex &Number)
{
	istream >> Number.real_number;
	istream.ignore(1);
	istream >> Number.imaginary_number;
	istream.ignore(1);
	return istream;
}
#ifndef Complex_h
#define Complex_h
#include <iostream>
#include "math.h"
using namespace std;

class Complex
{
	friend istream& operator >>(istream&, Complex &Number);

	friend ostream& operator <<(ostream&,const Complex &Number);

	public:
		Complex(double =0, double=0);

		~Complex();

		void Set_Real(double);

		void Set_imaginary(double);

		double Get_Real();

		double Get_imaginary();
		 Complex operator++();
		 Complex operator++(int);
		 Complex operator+(const Complex& Number);//c3 = c1 + c2

		 Complex operator-(const Complex& Number);//c3 = c1 - c2

		 Complex operator*(const Complex& Number);//c3 = c1 * c2;

		 Complex operator/(const Complex& Number);//c3 = c1 / c2


		 void operator+=(const Complex& Number);//c2 += c1

		 void operator-=(const Complex& Number);//c2 -= c1

		 void operator*=(const Complex& Number);//c2 *= c1

		 void operator/=(const Complex& Number);//c2 /= c1
	private:
		double real_number;
		double imaginary_number;
};

#endif
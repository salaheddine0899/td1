#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(double re=0, double img=0)
{
	this->re = re;
	this->img = img;
}

Complex::Complex(double re)
{
	this->re = re;
	this->img = 0;
}

Complex::Complex()
{
}

void Complex::afficher()
{
	if(this->img>=0)
		cout << "le complex est:" << this->re << "+" << this->img << "i" << endl;
	else
	{
		cout << "le complex est:" << this->re << this->img << " i" << endl;
	}
}

Complex Complex::conjugue()
{
	return Complex(this->re, (-1) * this->img);
}

double Complex::module()
{
	double mod = pow(this->re, 2) + pow(this->img, 2);
	return sqrt(mod);
}

Complex Complex::operator/(Complex& z)
{
	if ((z.re == 0) && (z.img == 0)) {
		cout << "on ne peut pas diviser par 0";
	}
	else {
		Complex res(0,0);
		Complex z2 = Complex(this->re, this->img);
		res = (z.conjugue() * z2);
		res.re /= pow(z.re, 2) + pow(z.img, 2);
		res.img /= pow(z.re, 2) + pow(z.img, 2);
		return res;
	}
}

Complex operator+(double x, const Complex& z)
{
	return Complex(z.re+x,z.img);
}

//Complex operator+(double x, const Complex& z)
//{
//	return x+z;
//}

#include "Complex.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;
}

Complex::Complex(double re)
{
	this->re = re;
	this->img = 0;
}



Complex& Complex::init(double re, double img)
{
	Complex *z=new Complex(re, img);
	return *z;
}

void Complex::afficher() const
{
	if(this->img>=0)
		cout << "le complex est:" << this->re << "+" << this->img << "i" << endl;
	else
	{
		cout << "le complex est:" << this->re << this->img << " i" << endl;
	}
}

Complex Complex::conjugue() const
{
	return Complex(this->re, (-1) * this->img);
}

double Complex::module() const
{
	double mod = pow(this->re, 2) + pow(this->img, 2);
	return sqrt(mod);
}

Complex& Complex::operator=(const Complex& z)
{
	//si les objets sont différents
	if (this!= &z) {
		this->re = z.re;
		this->img = z.img;
	}
	return *this;
}
Complex& Complex::operator+(Complex& z1)
{
	// TODO: insert return statement here
	Complex *res=new Complex();
	res->re = this->re + z1.re;
	res->img = this->img + z1.img;
	return *res;
}


Complex& Complex::operator-(Complex& z1)
{
	Complex *res = new Complex();
	res->re = this->re - z1.re;
	res->img = this->img - z1.img;

	return *res;
}

Complex& Complex::operator*(Complex& z)
{
	
	Complex *res =new Complex((this->re * z.re - this->img * z.img), (this->re * z.img + this->img * z.re));
	return *res;
	
}

Complex& Complex::operator/(Complex& z)
{
	if ((z.re == 0) && (z.img == 0)) {
		cout << "on ne peut pas diviser par 0";
	}
	else {
		Complex *res=new Complex();
		Complex z2 = Complex(this->re, this->img);
		*res = (z.conjugue() * z2);
		res->re /= pow(z.re, 2) + pow(z.img, 2);
		res->img /= pow(z.re, 2) + pow(z.img, 2);
		return *res;
	}
}

Complex& Complex::operator+(double x)
{
	Complex *res=new Complex();// = Complex(this->re + x, this->img);
	res->re = this->re + x;
	res->img = this->img;
	return *res;
}

//Complex operator+(double x, const Complex& z)
//{
//	return x+z;
//}

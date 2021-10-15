#pragma once
class Complex
{
	//attributs
	private: 
		double re;
		double img;
	public:
	// methodes
		//Complex init(double re,double img);
		//constructeur
		Complex(double re, double im);
		Complex(double re);
		Complex();
		void afficher() const;
		Complex conjugue() const;
		double module() const;
		Complex operator=(const Complex& z);
		Complex operator + (Complex &z1) {
			Complex res;
			res.re = this->re + z1.re;
			res.img = this->img + z1.img;

			return res;
		}
		Complex operator - (Complex &z1) {
			Complex res;
			res.re = this->re - z1.re;
			res.img = this->img - z1.img;

			return res;
		}

		Complex operator * (Complex &z) {
			return Complex((this->re*z.re-this->img*z.img),(this->re*z.img+ this->img* z.re));
		}

		Complex operator / (Complex& z);

		friend Complex operator+(double x,const Complex&z);

	
};


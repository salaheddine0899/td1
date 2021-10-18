#pragma once
class Complex
{
	//attributs
	private: 
		double re;
		double img;
		//constructeur
		Complex(double re = 0, double im = 0);
		Complex(double re);
	public:
	// methodes
		static Complex&  init(const double re=0,const double img=0);
		void afficher() const;
		Complex conjugue() const;
		double module() const;
		Complex& operator=(const Complex& z);
		Complex& operator + (Complex& z1);
		Complex& operator - (Complex& z1);

		Complex& operator * (Complex& z);

		Complex& operator / (Complex& z);

		Complex& operator+(double x);

	
};


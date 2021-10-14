#include "Circle.h"
#include<iostream>

using namespace std;

void Circle::afficher()
{
	cout << "le point(" << this->p.x << "," << this->p.y << ") de r=" << this->rayon;
}

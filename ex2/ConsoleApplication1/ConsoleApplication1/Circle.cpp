#include "Circle.h"
#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include <cmath>

using namespace std;

Circle::Circle(Point centre, float rayon)
{
	this->centre = centre;
	this->rayon = rayon;
}

void Circle::afficher()
{
	cout << "le point(" << this->centre.x << "," << this->centre.y << ") de r=" << this->rayon << endl;
}

void Circle::changer_rayon(float nv_rayon)
{
	this->rayon = nv_rayon;
}

void Circle::translate_center(Point center)
{
	this->centre = center;
}

float Circle::surface()
{
	return M_PI * pow(this->rayon, 2);
}

float Circle::perimetre()
{
	return 2 * M_PI * this->rayon;
}

bool Circle::operator == (Circle& c)
{
	return ((this->centre.x==c.centre.x)&&(this->centre.y==c.centre.y))&&(this->rayon==c.rayon);
}

bool Circle::appartenir(Point p)
{
	float d=sqrt(pow(p.x,2)+pow(p.y,2));
	return d<=this->rayon;
}

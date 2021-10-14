#pragma once
typedef struct {
	float x;
	float y;
}Point;

class Circle
{
private:
	float rayon;
	Point p;
public:
	void afficher();
	//changement du rayon
	void changer_rayon(float nv_rayon);

	
};


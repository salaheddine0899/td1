#pragma once
typedef struct {
	float x;
	float y;
}Point;

class Circle
{
private:
	Point centre;
	float rayon;
public:
	Circle(Point centre, float rayon);
	void afficher();
	//changement du rayon
	void changer_rayon(float);
	//translation du centre
	void translate_center(Point);
	//surface
	float surface();
	//perimetre
	float perimetre();
	//égalité
	bool operator == (Circle& c);

	bool appartenir(Point p);

	
};


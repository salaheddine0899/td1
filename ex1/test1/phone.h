#pragma once

class Phone {
	//declaration des donn�es
	int taille;
	char color[20];
	char model[20];
	int num;
	//les prototypes
	void call(Phone*);
	void free(Phone*);

}Phone;



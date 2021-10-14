#pragma once
#include<iostream>
#include <string>
using namespace std;
class Compte
{
private:
	int numCompte;
	string  nomProprietaire;
	float solde;
	void deposer(float);
	bool retirer(float);

public:
	Compte(int, string, float);
	void consulter();
	void transferer(Compte &c,float mt);
};


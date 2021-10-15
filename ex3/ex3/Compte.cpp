#include "Compte.h"

int Compte::nbComptes = 0;

void Compte::deposer(float mt)
{
	this->solde += mt;
}

bool Compte::retirer(float mt)
{
	if (this->solde < mt) {
		cout << "solde insuffisant" << endl;
		return false;
	}
	this->solde -= mt;
	return true;
}

Compte::Compte(string nomProp, float solde)
{
	this->numCompte = ++this->nbComptes;
	this->nomProprietaire = nomProp;
	this->solde = solde;
}

void Compte::consulter()
{
	cout << "Mr " << this->nomProprietaire << ",num de compte:" << this->numCompte << ", a un montant:" << this->solde << endl;
}

void Compte::transferer(Compte &c,float mt)
{
	if (this->retirer(mt)) {
		c.deposer(mt);
	}
}

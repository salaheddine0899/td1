#pragma once
#include<iostream>

using namespace std;

	template<class T>
	struct Cellule {
		T val;
		Cellule* next;
	};

	template<class T>
	class Pile
	{
	private:
		Cellule<T>* root = NULL;
	public:
		void empiler(T val)
		{
			Cellule<T>* cel = new Cellule<T>();
			cel->val = val;
			/*cel->next = nullptr;*/
			if (this->root == NULL) {
				
				cel->next = NULL;
				this->root = cel;
			}
			else
			{
				cel->next = this->root;
				this->root = cel;
			}
		}
		void depiler() {
			if (this->root) {
				Cellule<T>* tmp;
				tmp = this->root;
				this->root = this->root->next;
				delete tmp;
			}
		}

		void afficher() {
			Cellule<T>* crt = this->root;
			while (crt) {
				cout << crt->val << "->";
				crt = crt->next;
			}
		}
	};




//ILISI2
//ABID Salah Eddine

#include <iostream>
#include "complex.h"

using namespace std;

//using namespace dd;
int main()
{
    Complex &z=Complex::init(3,2);//instantiation=declaration+initialisation
    z.afficher();
    /*Complex  *z2=new z2->init(0,1);
    z.afficher();
    z.conjugue().afficher();
    z2->afficher();
    cout << sizeof(z2)<<endl;
    Complex z3;
    z3=z+3;
    z3.afficher();
    cout << z2->module() << endl;


    delete z2;*/
 
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
